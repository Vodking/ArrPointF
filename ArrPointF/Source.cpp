#include "Starter.hpp"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float num1, num2;
	char choice;

	DataIn(&num1, &num2, &choice);
	Checker(choice, num1, num2);

}