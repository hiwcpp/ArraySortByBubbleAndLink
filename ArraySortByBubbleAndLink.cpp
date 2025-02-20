#include <iostream>
#include <cstdlib>

int main() {
	srand(2);
	int array[10];
	std::cout << "BEFORE SORT: " << std::endl;
	for (int& x : array) {
		x = rand() % 50;
		std::cout << x << " | ";
	}

	int temp = 0;

	for (int i = 0; i < 10; i++) {
		for (int index = 0; index < 9 - i; index++) {
			if (array[index] > array[index + 1]) {
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
			}
		}
	}

	std::cout << std::endl << "AFTER SORT: " << std::endl;

	for (int i = 0; i < 10; i++) {
		std::cout << array[i] << " | ";
	}

	return 0;
}