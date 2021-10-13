/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab4
*Description: This program will use arrays for basic Numeric Computation.
*Date: 7/6/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
int main(){
  const int size = 5;
  double nums[size];
  double sum = 0;
  double average = 0;
  double large = 0;
  double small = 0;

  std::cout << "Please enter 5 numbers\n";
  for(int i=0; i<size; i++){
    std::cout << "Input a number into your array: ";
    std::cin >> nums[i];
  }
  std::cout << "Here are all the numbers in your array: \n";
  for(int i=0; i<size; i++){
    std::cout << nums[i] << "\n";
  }

  for(int i=0; i<size; i++){
    sum = (sum+nums[i]);
  }
  std::cout << "The sum of all the values is: " << sum << "\n";

  for(int i=0; i<size; i++){
    average = (sum/size);
  }
  std::cout << "The average of all the values is: " << average << "\n";

  for(int i=0; i<size; i++){
    if(large < nums[i]){
      large = nums[i];
    }
  }
  std::cout << "The largest value is: " << large << "\n";

  small = nums[0];
  for(int i=1;i<size; i++){
    if(small>nums[i]){
      small = nums[i];
    }
  }
  std::cout << "The smallest value is: " << small << "\n";
  return(0);
}
