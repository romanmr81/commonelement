#include<iostream>

int main() {

	//declare the array1 and array2
	int array1[10] = { 4, 2, 3, 10, 3, 34, 35, 67, 3, 1 };
	int array2[10] = { 8, 5, 10, 1, 6, 16, 61, 9, 11, 2 };

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
