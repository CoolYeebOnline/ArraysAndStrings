#include <iostream>


//int main() {
//	int inputArray[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << "Please enter a value for Index " << i << ": ";
//		std::cin >> inputArray[i];
//	}
//
//	//std::cout << "Please enter a value for Index 0: ";
//	//std::cin >> inputArray[0];
//
//	//std::cout << "Please enter a value for Index 1: ";
//	//std::cin >> inputArray[1];
//
//	//std::cout << "Please entre a value for Index 2: ";
//	//std::cin >> inputArray[2];
//
//	//std::cout << "Please enter a value for Index 3: ";
//	//std::cin >> inputArray[3];
//
//	//std::cout << "Please enter a value for Index 4: ";
//	//std::cin >> inputArray[4];
//
//	/*std::cout << inputArray[0] << std::endl;
//
//	std::cout << inputArray[1] << std::endl;
//
//	std::cout << inputArray[2] << std::endl;
//
//	std::cout << inputArray[3] << std::endl;
//
//	std::cout << inputArray[4] << std::endl;*/
//
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << inputArray[i] << std::endl;
//	}
//
//
//
//
//
//
//
//
//
//}

int main() {

	float inputArray[5];
	int deletedValue;

	for (int i = 0; i < 5; i++) {
		std::cout << "Please enter a float value " << i << ": ";
		std::cin >> inputArray[i];
	}
	
	for (int i = 0; i < 5; i++) {
		std::cout << "The Array Looks like this: " << std::endl;
		std::cout << inputArray[i] << std::endl;
	}

	std::cout << "Enter the Index of a value to remove: ";
	std::cin >> deletedValue;

	for (int i = deletedValue; i < 5; i++)
	{
		inputArray[i] = inputArray[i + 1];

		if (i == 4) {
			inputArray[i] = 0;
			}
		else {
			inputArray[i] = inputArray[i + 1];
		}
		
	}
	for (int i = 0; i < 5; i++) {
		std::cout << "The Array Looks like this: " << std::endl;
		std::cout << inputArray[i] << std::endl;
	}
	
}