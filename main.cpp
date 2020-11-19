#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

auto main(int argc, char* argv[]) -> int {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	auto A = 1;
	auto B = 1;
	auto C = 1;

	A = 1; B = 3; C = 2;


	int l, r;
	std::cout << "¬ведите значение L:";
	std::cin >> l;
	std::cout << "¬ведите значение R:";
	std::cin >> r;

	if ((A + B + C) > (A * B * C)) {
		if (A * ((A >= l or A <= r) ? 1 : 0) > B * ((B >= l or B <= r) ? 1 : 0) and A * ((A >= l or A <= r) ? 1 : 0) > C * ((C >= l or C <= r) ? 1 : 0)) {
			return A;
		}
		else if (B * ((B >= l or B <= r) ? 1 : 0) > C * ((C >= l or C <= r) ? 1 : 0) and B * ((B >= l or B <= r) ? 1 : 0) > A * ((A >= l or A <= r) ? 1 : 0)) {
			return B;
		}
		else {
			return C;
		}
	}
	else {
		if (A * ((A <= l or A >= r) ? 1 : 0) > B * ((B <= l or B >= r) ? 1 : 0) and A * ((A <= l or A >= r) ? 1 : 0) > C * ((C <= l or C >= r) ? 1 : 0)) {
			return A;
		}
		else if (B * ((B <= l or B >= r) ? 1 : 0) > C * ((C <= l or C >= r) ? 1 : 0) and B * ((B <= l or B >= r) ? 1 : 0) > A * ((A <= l or A >= r) ? 1 : 0)) {
			return B;
		}
		else {
			return C;
		}
	}

}
