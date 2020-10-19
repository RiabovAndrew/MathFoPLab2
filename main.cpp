#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

auto main(int argc, char* argv[]) -> int {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	auto A = new int[3];
	A[0] = 1; A[1] = 3; A[2] = 2;


	int l, r;
	std::cout << "Введите значение L:";
	std::cin >> l;
	std::cout << "Введите значение R:";
	std::cin >> r;

	auto sum = 0;
	auto mult = 1;
	auto max1 = A[0];
	auto max2 = A[0];
	bool b1 = 0;
	bool b2 = 0;

	if(A[0] >= l and A[0] <= r) {
		sum += A[0];
		mult *= A[0];
		if(max1<A[0]) {
			max1 = A[0];
		}
		b1 = 1;
	}
	else {
		if(max2 < A[0]) {
			max2 = A[0];
		}
		b2 = 1;
	}
	if (A[1] >= l and A[1] <= r) {
		sum += A[1];
		mult *= A[1];
		if (max1 < A[1]) {
			max1 = A[1];
		}
		b1 = 1;
	}
	else {
		if (max2 < A[1]) {
			max2 = A[1];
		}
		b2 = 1;
	}
	if (A[2] >= l and A[2] <= r) {
		sum += A[2];
		mult *= A[2];
		if (max1 < A[2]) {
			max1 = A[2];
		}
		b1 = 1;
	}
	else {
		if (max2 < A[2]) {
			max2 = A[2];
		}
		b2 = 1;
	}
	// После испрвления
	if(b1) {
		if(sum > mult) {
			if (b1) std::cout << max1 << "\n";
			else std::cout << "Выход за массив\n";
		}
		else {
			if(b2) std::cout << max2 << "\n";
			else std::cout << "Выход за массив\n";
		}
	}
	else {
		 std::cout << "Выход за массив\n";
	}
}
