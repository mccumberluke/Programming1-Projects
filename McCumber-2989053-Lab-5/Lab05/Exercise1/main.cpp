/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab5
*Description: This program will run functions to manipulate numbers.
*Date: 7/14/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>

void run();
int lastDigit(int);
int removeLastDigit(int);
int addDigit(int);
int reverse(int);
bool isPalindrome(int);
int countDigits(int);
int sumDigits(int);
void printMenu();
int choice = 0;
int n = 0;

void printMenu(){
	std::cout << "1) Count digits\n";
	std::cout << "2) Sum digits\n";
	std::cout << "3) Is Palindrome\n";
	std::cout << "4) Reverse\n";
	std::cout << "5) Exit\n";
}

void run(){
	do {
		printMenu();
		std::cout << "Choice: ";
		std::cin >> choice;
		if(choice == 5){
			return;
		}
		std::cout << "Enter a number: ";
		std::cin >> n;
		if(choice == 1){
			std::cout << "The count of your digits is: " << countDigits(n) << "\n\n";
		}
		if(choice == 2){
			std::cout << "The sum of your digits is: " << sumDigits(n) << "\n\n";
		}
		if(choice == 3){
			if (isPalindrome(n)) {
				std::cout << "Your number is a palindrome." << "\n\n";
			}
			else{
				std::cout << "Your is not a palindrome." << "\n\n";
			}
		}
		if(choice == 4){
			std::cout << "The reverse order is: " << reverse(n) << "\n\n";
		}
	} while(choice != 5);
}

int lastDigit(int n){
	int digit = (n % 10);
	return digit;
}

int removeLastDigit(int n){
	int last = (n / 10);
	return last;
}

int addDigit(int currentNum, int newDigit){
	int n = (currentNum * 10) + newDigit;
	return n;
}

int reverse(int n){
	int newNum = 0;
	while (n > 0) {
		int digit = lastDigit(n);
		n = removeLastDigit(n);
		newNum = addDigit(newNum, digit);
	}
	return newNum;
}

bool isPalindrome(int n){
	int reversedNum = reverse(n);
	if(n == reversedNum){
		return true;
	}
	return false;
}

int countDigits(int n){
	int count = 0;
	while (n > 0) {
		n = removeLastDigit(n);
		count++;
	}
	return count;
}

int sumDigits(int n){
	int sum = 0;
	while (n > 0) {
		int digit = lastDigit(n);
		sum = (sum + digit);
		n = removeLastDigit(n);
	}
	return sum;
}

int main()
{
		run();
		return(0);
}
