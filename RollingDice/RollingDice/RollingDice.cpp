// RollingDice.cpp : Defines the entry point for the console application.
// This program designed to roll two dice. It used a random function to generate
// a random number representing one of the sides. A user is asked to input a number 
// between 2 and 12. The program should then output the result of each die and 
// the combined total of the two sides. The program will continue 
// rolling the dice until the total equals what the user entered. Then, it will 
// output the number of tries it took. 


//Pre-proccessing directives
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <random>

// Standard library
using namespace std;

int sum(int total)
{
	// Declare variables
	int dice1;
	int dice2;
	int sumset = 0;
	int counter = 0;

	// Show results of the rolls until number is obtained.
	while (sumset != total)
	{
		dice1 = rand() % 6 + 1; // Generate random number for dice 1.
		dice2 = rand() % 6 + 1; // Generate random number for dice 2.
		sumset = dice1 + dice2; // Calculate the total of the two dice. 
		counter++;
		cout << "The first dice rolled is: " << dice1 << endl; // Output the random number for 1st dice.
		cout << "The second dice rolled is: " << dice2 << endl; // Output the random number for 2nd dice.
		cout << "The total of the two dice is: "
			<< sumset << "\n"
			<< endl; // Output the total of the two numbers.
	}
	return counter;
}


int main()
{
	srand((unsigned)time(0)); // Initialize random seed.
	cout << "Enter a number etween 2 and 12: "; // Ask user to enter a number of choice. 

	int number, rolls;
	cin >> number; // Input the user number.

	// Ensure the correct input value.
	while (number < 2 || number>12)
	{
		cout << "Invalid input ";
		cin >> number;
	}

	// Output the number of tries it took. 
	rolls = sum(number);
	cout << "\n\The number of times you rolled to get "
		<< number << " from a pair of two dice is: "
		<< rolls; _getch();

	return 0;
}