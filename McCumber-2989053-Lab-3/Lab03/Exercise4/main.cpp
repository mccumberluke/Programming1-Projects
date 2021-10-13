/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab3
*Description: This program will find the number of people getting sick.
*Date: 6/24/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
int main(){
  int day = 0;
  int day1 = 1;
  int day2 = 8;
  int day3 = 22;
  int people = 0;
  std::cout << "OUTBREAK!\n";
  std::cout << "What day do you want a sick count for?: ";
  std::cin >> day;
  if(day < 1){
    std::cout << "Invalid day\n";
  }
  if(day == 1){
    std::cout << "Total people with flu: " << day1 << "\n";
  }
  if(day == 2){
    std::cout << "Total people with flu: " << day2 << "\n";
  }
  if(day == 3){
    std::cout << "Total people with flu: " << day3 << "\n";
  }
  if(day > 3){
    for(int i=4; i<=day; i++){
      people = day1+day2+day3;
      day1 = day2;
      day2 = day3;
      day3 = people;
    }
    std::cout << "Total people with flu: " << people << "\n";
  }
  return(0);
}
