#include "Functional.h"

void Functional::main() {
	lambdas();
	tailRecursion();
	higherOrder();
}

void Functional::lambdas() {
	int a = 2, b = 1;

	std::function<int(int)> simpleLine = [a, b](int x) {
		return a * x + b;
	};

	int (*noEnclosing)(int) = [](int x) {
		return x;
	};

	auto simpleLn = [a, b](int x) {
		return a * x + b;
	};

	auto functionComposition = [simpleLine, simpleLn](int x) {
		return simpleLine(simpleLn(x));
	};
	std::cout << simpleLine(2) << " " << noEnclosing(3) << " " << simpleLn(9) << std::endl;
}

void Functional::tailRecursion() {
	std::function<int(int, int, int)> fibonacci = [&](int n, int a = 0, int b = 1) {
		if (n == 0)
			return a;
		if (n == 1)
			return b;
		return fibonacci(n - 1, b, a + b);
	};

	std::cout << fibonacci(5, 0, 1) << std::endl;
}

template<class F>
void listVector(std::vector<F> vec) {
	for (int i = 0;i < vec.size();i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void Functional::higherOrder() {
	transform();
	remove_if();
	accumulate();
}

void Functional::transform() {
	std::cout << "Transform" << std::endl;
	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::vector<std::string> str{ "Programming", "in", "a", "functional", "style." };
	std::vector<int> vec2{};

	std::transform(vec.begin(), vec.end(), vec.begin(), [](int i) { return i * i;});
	std::transform(str.begin(), str.end(), std::back_inserter(vec2), [](std::string s) { return s.length();});

	listVector(vec);
	listVector(str);
	listVector(vec2);
}

void Functional::remove_if() {
	std::cout << std::endl << "Remove if" << std::endl;
	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::vector<std::string> str{ "Programming", "in", "a", "functional", "style." };

	auto end = std::remove_if(vec.begin(), vec.end(), [](int i) {return (i < 30) or (i > 60);});
	auto end2 = std::remove_if(str.begin(), str.end(), [](std::string s) {return !(std::isupper(s[0]));});

	std::cout << "Left after remove" << std::endl;
	for (std::vector<int>::iterator start = vec.begin();start != end;start++) {
		std::cout << *start << " ";
	}
	std::cout << std::endl;

	for (std::vector<std::string>::iterator start = str.begin();start != end2;start++) {
		std::cout << *start << " ";
	}
	std::cout << std::endl;
}

void Functional::accumulate() {
	std::cout << "Accumulate" << std::endl;

	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::vector<std::string> str{ "Programming", "in", "a", "functional", "style." };

	int startValue = 0;
	int result = std::accumulate(vec.begin(), vec.end(), startValue, [](int a, int b) {return a+b;});

	std::string sStartValue = "%";
	std::string sResult = std::accumulate(str.begin(), str.end(), sStartValue, [](std::string a, std::string b) {return a + "<>" + b;});

	std::cout << result << std::endl;
	std::cout << sResult << std::endl;
}