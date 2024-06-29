#ifndef STARTER_HPP
#define STARTER_HPP

#include <iostream>
#include <Windows.h>
#include <string>

float Add(float num1, float num2);
float Sub(float num1, float num2);
float Mult(float num1, float num2);
float Div(float num1, float num2);
float Perc(float num1, float num2);

void Checker(char op, float num1, float num2);
void DataIn(float* num1, float* num2, char* op);

float (*PtrF[])(float num3,float num4) = { Add,Sub,Mult,Div,Perc };


#endif // !STARTER_HPP

