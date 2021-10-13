/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab3
*Description: This program will find ASCII characters.
*Date: 6/24/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
int main(){
  int choice = 0;
  int value = 0;
  do {
    std::cout << "1) Select a specific number\n";
    std::cout << "2) Display visible ASCII values (33 to 126)\n";
    std::cout << "3) Exit\n";
    std::cout << "Choice: ";
    std::cin >> choice;
    if(choice < 1 || choice > 3){
      std::cout << "invalid choice\n\n";
    }
    if(choice == 1){
      std::cout << "Enter a value: ";
      std::cin >> value;
      if(value < 33 || value > 126){
        std::cout << "Invalid number\n\n";
      }
      if(value >= 33 && value <= 126){
        std::cout << value << " = " <<  static_cast<char>(value) << "\n\n";
      }
    }
    if(choice ==2){
      for (int i=33; i <=126; i++) {
        std::cout << static_cast<char>(i) << "\n";
      }
      std::cout << "\n";
    }
  } while(choice != 3);
}
