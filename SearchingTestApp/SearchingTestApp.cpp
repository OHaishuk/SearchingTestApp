#include "Searching.h"
#include <iostream>

int main() {
	std::vector<int> a({ 2,4,7,9,12,15,15,15,15,15,29,70,80,80 });
	int result;

	result = binarySearch(a, 15);
	std::cout << "Binary search: " << result << std::endl;

	int binresult = binarySearchFirst(a, 15);
	std::cout << "Binary search first: " << binresult << std::endl;

	return 0;
}