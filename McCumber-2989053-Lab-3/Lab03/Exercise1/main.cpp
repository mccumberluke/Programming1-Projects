/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab3
*Description: This program will count characters.
*Date: 6/28/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
#include <string>
int main(){

  std::string phrase = "";
  char character;
  int count = 0;
  std::cout << "Enter a string: ";
  std::cin >> phrase;
  std::cout << "Enter a character to count: ";
  std::cin >> character;

  for(int i=0; i<phrase.length(); i++){
    if(phrase.at(i)==character){
      count++;
    }
  }
  std::cout << "In the string " << phrase << " the character '" << character << "' occurs " << count << " time(s).\n";
  return(0);
}
