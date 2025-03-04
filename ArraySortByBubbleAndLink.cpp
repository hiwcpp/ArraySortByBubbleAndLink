#include <iostream>
#include <ctime>

int main() {
	setlocale(LC_ALL, "RU");

	const int SIZE = 10;
	int array[SIZE];

	srand(time(NULL));

	std::cout << "Массив до сортировки:\n\n";

	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 10 + 5;
		std::cout << "[" << array[i] << "]" << " ";
	}

	std::cout << "\n\nМассив после сортировки:" << std::endl;
	int collector = 0;
	for (int i = 1; i < SIZE; i++) {
		for (int index = 0; index < SIZE - i - 1; index++) {
			if (array[index] > array[index + 1]) {
				collector = array[index + 1];
				array[index + 1] = array[index];
				array[index] = collector;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) {
		std::cout << "[" << array[i] << "]" << " ";
	}

	return 0;
}