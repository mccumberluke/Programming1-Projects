//File Name: main.cpp
//Author: Luke McCumber
//Assignment: EECS 168 Lab02
//Description: This program will perform long division.
//Date: 6/17/2021

#include <iostream>
int main(){
  int numer = 0;
  int denom = 0;

  std::cout << "Enter a numerator: ";
  std::cin >> numer;
  std::cout << "Enter a denominator: ";
  std::cin >> denom;

  if(denom==0){
    std::cout << "Sorry, you may not divide by zero.\n";
  }
  else{
    std::cout << numer << " / " << denom << " = " << numer/denom << " Remainder " << numer%denom << "\n";
  }
  return(0);
}
