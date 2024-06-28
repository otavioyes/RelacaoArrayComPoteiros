#include <iostream>
#include <vector>


int main() {

	int Vetor[]{ 10, 20, 30, 40, 50 };
	int* ptr;

	ptr = Vetor; 

	//ptr--;
	//std::cout << *(ptr + 2) << '\n';

	std::cout << "[ ";
	for (int i = 0; i < 5; i++) {
		std::cout << *(&Vetor[0] + i) << " ";

	}

	std::cout << " ] ";

}