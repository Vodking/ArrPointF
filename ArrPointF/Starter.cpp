#include "Starter.hpp"

float Add(float num1, float num2)
{
    return num1 + num2;
}

float Sub(float num1, float num2)
{
    return num1 - num2;
}

float Mult(float num1, float num2)
{
    return num1 * num2;
}

float Div(float num1, float num2)
{
    if (num2 == 0)
    {
        std::cerr << "Error";
        return -1.0f;
    }
    else
    {
        return num1 / num2;
    }
}

float Perc(float num1, float num2)
{
    return num1 * num2 / 100;
}


void Checker(char op, float num1, float num2)
{
    if (op == '+')
    {
        (PtrF[0])(num1, num2);
    }
    else if (op == '-')
    {
        (PtrF[1])(num1, num2);
    }
    else if (op == '*')
    {
        (PtrF[2])(num1, num2);
    }
    else if (op == '/')
    {
        (PtrF[3])(num1, num2);
    }
    else if (op == '%')
    {
        (PtrF[4])(num1, num2);
    }
    else
    {
        std::cout << -1;
    }
}

void DataIn(float* num1, float* num2, char* op)
{
    std::cout << "¬ведите первое число: ";
    std::cin >> *num1;
    std::cout << "¬ведите второе число: ";
    std::cin >> *num2;
    std::cout << "¬ведите операцию + - * / %";
    std::cin >> *op;
}
