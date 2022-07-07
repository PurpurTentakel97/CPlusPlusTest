//
// Purpur Tentakel
// 02.07.2022
//

#include <iostream>
#include <string>
#include <format>
#include "../hed/Helper.h"

void Print(const int numberToPrint) {
	std::cout << numberToPrint << std::endl;
}
void Print(const double numberToPrint) {
	std::cout << numberToPrint << std::endl;
}
void Print(const std::string& stringToPrint) {
	std::cout << stringToPrint << std::endl;
}

void Print(const std::string& message, const int number) {
	const std::string toPrint = std::format("{} -> {} Byte", message, number);
	std::cout << toPrint << std::endl;
}
void Print(const std::string& message, const int number1, const int number2) {
	const std::string toPrint = std::format("{} -> X:{} :: Y:{}", message, number1, number2);
	std::cout << toPrint << std::endl;
}


