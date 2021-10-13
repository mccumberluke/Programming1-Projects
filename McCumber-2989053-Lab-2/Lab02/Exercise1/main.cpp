//File Name: main.cpp
//Author: Luke McCumber
//Assignment: EECS 168 Lab02
//Description: This program will find the wind speed of a storm.
//Date: 6/17/2021
#include <iostream>
int main(){
  int speed = 0;

  std::cout << "Input a wind speed (m/s): ";
  std::cin >> speed;
  if(speed<0){
    std::cout << "Negative wind? Sorry, that's invalid.\n";
  }
  else if(speed<18){
    std::cout << "A wind speed of " << speed << " m/s is a tropical depression.\n";
  }
  else if(speed>18 && speed<33){
    std::cout << "A wind speed of " << speed << " m/s is a tropical storm.\n";
  }
  else if(speed>33 && speed <43){
    std::cout << "A wind speed of " << speed << " m/s is a Category 1 hurricane.\n";
  }
  else if(speed>43 && speed <50){
    std::cout << "A wind speed of " << speed << " m/s is a Category 2 hurricane.\n";
  }
  else if(speed>50 && speed <58){
    std::cout << "A wind speed of " << speed << " m/s is a Category 3 hurricane.\n";
  }
  else if(speed>58 && speed <70){
    std::cout << "A wind speed of " << speed << " m/s is a Category 4 hurricane.\n";
  }
  else if(speed>=70){
    std::cout << "A wind speed of " << speed << " m/s is a Category 5 hurricane.\n";
  }
  return(0);
}
