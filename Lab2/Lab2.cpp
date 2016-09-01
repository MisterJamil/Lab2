// Lab2.cpp : Defines the entry point for the console application.
// Author: Jamil Saliba
// Date: 9/1/2016
// Description: Mileage Reimbursment Calculator

#include "stdafx.h"
#define RATE .35 //Setting rate as a constant


int main()
{
	double begOD, endOD, totalMiles, totalReimbursment;//Variable declaration
	
	printf("Mileage Reimbursement Calculator\n\n");//Title of program on line one
	printf("Enter beginning odometer reading\n");//Title of input: beginning odometer
	scanf("%lf", &begOD);//Input beginning: odometer

	printf("Enter ending odometer reading\n");//Title of input: ending odometer
	scanf("%lf", &endOD);//Input: ending odometer

	totalMiles = endOD - begOD;//total miles caclulation
	totalReimbursment = RATE * totalMiles;//total reimbursment calculation
	
	printf("You traveled: %.2f miles\n\n", totalMiles);//Output: total miles
	printf("Your reimbursement is $%.2f\n\n", totalReimbursment);//Output: total reimbursment

    return 0;
}//End program