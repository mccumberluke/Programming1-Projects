//File Name: main.cpp
//Author: Luke McCumber
//Assignment: EECS168 Lab02
//Description: This program will calculate the total at a restaurant.
//Date: 6/17/2021
#include <iostream>
int main(){
  std::cout.precision(2);
  std::cout << std::fixed;

  int salad = 0;
  int drink = 0;
  int cake = 0;
  char userLetter;
  int age;
  double sub = 0;
  double tax = 0;
  double discount = 0;
  double total = 0;

  std::cout << "============================\n";
  std::cout << "WELCOME TO THE RESTAURANT\n";
  std::cout << "============================\n\n";

  std::cout << "Do you want Salads? (y/n): ";
  std::cin >> userLetter;

  if(userLetter=='y'|| userLetter == 'Y'){
    std::cout << "How many?: ";
    std::cin >> salad;
    std::cout << "\n";
  }
  if(salad<0){
    salad = 0;
  }
  else{
    std::cout << "\n";
  }

  std::cout << "Do you want Drinks? (y/n): ";
  std::cin >> userLetter;
  if(userLetter=='y'|| userLetter == 'Y'){
    std::cout << "How many?: ";
    std::cin >> drink;
    std::cout << "\n";
  }
  if(drink<0){
    drink = 0;
  }
  else{
    std::cout << "\n";
  }
  std::cout << "Do you want Cakes? (y/n): ";
  std::cin >> userLetter;
  if(userLetter=='y'|| userLetter == 'Y'){
    std::cout << "How many?: ";
    std::cin >> cake;
    std::cout << "\n";
  }
  if(cake<0){
    cake = 0;
  }
  else{
    std::cout << "\n";
  }
  std::cout << "How old are you?: ";
  std::cin >> age;
  std::cout << "============================\n";
  sub = (salad*4.25) + (drink*1.05) + (cake*3.55);
  tax = (sub*0.05);
  total = (sub+tax);
  if(age>=65){
    discount = (sub*.10);
    tax = (sub*0.05);
    total = total - discount;
  }
  if(age<=5){
    sub= sub - (cake*3.55);
    tax= (sub*0.05);
    total= (sub+tax);
    discount = (cake*3.55);
  }
  std::cout << salad << " Salads @ $4.25 ==> " << "$" << salad*4.25 << "\n";
  std::cout << drink << " Drinks @ $1.05 ==> " << "$" << drink*1.05 << "\n";
  std::cout << cake << " Cakes @ $3.55 ==> " << "$" << cake*3.55 << "\n";
  std::cout << "Subtotal: $" << sub << "\n";
  std::cout << "Tax: $" << tax << "\n";
  std::cout << "Discount: $" << discount << "\n";
  std::cout << "============================\n";
  std::cout << "Total: $" << total << "\n\n";
  std::cout << "Please come again!\n";
  return(0);
}
