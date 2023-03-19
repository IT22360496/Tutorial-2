/* Exercise 1 - Calculations
Convert the C program given below which converts a length given in cm to inches to a C++
program.
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.
e.g.
float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2;
You already know that printf() in C is std::cout in C++
e.g.
printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
#include <stdio.h>
void main(void)
{
 float cm, inches;
 printf("Enter a length in cm : ");
 scanf("%f",&cm);
 inches = cm / 2.54;
 printf("Length in inches is %f \n", inches);
} */

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	float cm, inches;
	
	cout << "Enter a length in cm : ";
	cin >> cm;
	
	inches = cm / 2.54;
	
	cout << "Length in inches is \n" << setiosflags(ios::fixed) << setprecision(6) << inches;
	
	return 0;
}
