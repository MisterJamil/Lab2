// Lab2.cpp : Defines the entry point for the console application.
// Author: Jamil Saliba
// Date: 9/1/2016
// Description: Mileage Reimbursment Calculator

#include "stdafx.h"
#define R .35 //Setting rate as a constant


int main()
{
	double Beg_OD, End_OD, TM, TC;//Variable declaration
	
	printf("Mileage Reimbursement Calculator\n\n");//Title of program on line one
	printf("Enter beginning odometer reading\n");//Title of input one
	scanf("%lf", &Beg_OD);//Input one
	printf("Enter ending odometer reading\n");//Title of input two
	scanf("%lf", &End_OD);//Input two
	TM = End_OD - Beg_OD;//Calculations
	TC = R * TM;
	printf("You traveled: %.2f miles\n\n", TM);//Output one
	printf("Your reimbursement is $%.2f\n\n", TC);//Output two

    return 0;
}//End program

