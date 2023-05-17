#include <iostream>
#include <vector>
#include <algorithm>

#include "Functor.h"


int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "\tСчетчик чисел\n" << std::endl;

	MB::Functor functor;
	std::vector<int> vector_int{ 4, 1, 3, 6, 25, 54 };

	std::cout << "[IN]: ";
	for (auto& i : vector_int) {
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl;

	functor = std::move(std::for_each(vector_int.begin(), vector_int.end(), functor));

	std::cout << "[OUT]: get_sum() = " << functor.get_sum() << std::endl;
	std::cout << "[OUT]: get_count() = " << functor.get_count() << std::endl;

	system("pause > nul");
	return 0;
}