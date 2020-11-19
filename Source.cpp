#include<iostream>

int main() {

	//defining the array
	int array1[10], array2[10];
	std::cout << "Enter list 1: ";
	//first array
	for (int i = 0; i < 10; ++i) {
		std::cin >> array1[i];
	}
	//second array
	std::cout << "Enter list 2: ";
	for (int i = 0; i < 10; ++i) {
		std::cin >> array2[i];
	}
	std::cout << "The common elements are: ";
	
	//finding common elements
	for (int i = 0; i < 10; ++i) {

		bool found = false;
		for (int j = 0; j < 10; ++j) {

			if (array1[i] == array2[j])
				found = true;
		}
		if (found) {
			std::cout << " " << array1[i];
		}
	}
	std::cout << std::endl;
	return 0;
}