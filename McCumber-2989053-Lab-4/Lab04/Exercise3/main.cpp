/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab4
*Description: This program will read in files for an array.
*Date: 7/7/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
int main(){
  int* nums = nullptr;
  nums = new int[6];
  nums[0] = 5;
  nums[1] = 105;
  nums[2] = 15;
  nums[3] = 20;
  nums[4] = 35;
  nums[5] = 47;
  int value = 0;
  char userQuit;
  bool number;

  std::ifstream inFile;
  inFile.open("input.txt");
  if(inFile.is_open()){
    inFile >> nums[0];
    inFile >> nums[1];
    inFile >> nums[2];
    inFile >> nums[3];
    inFile >> nums[4];
    inFile >> nums[5];
    inFile.close();
  }
  else{
    std::cout << "File could not be opened.\n";
  }
  std::cout << "Contents of input.txt: \n";
  std::cout << "[" << nums[1] << ", " << nums[2] << ", " << nums[3] << ", " << nums[4] << ", " << nums[5] << "]\n\n";

  while (userQuit != 'y') {
    std::cout << "Input a value to search for: ";
    std::cin >> value;
    for(int i=1; i<6; i++){
      if(value == nums[i]){
        std::cout << value << " is in the array.\n";
        number = true;
      }
      if(i == 5 && value != nums[i] && number == false){
        std::cout << value << " is not in the array.\n";
      }
    }
    number = false;
    std::cout << "Do you wish to quit (y/n): ";
    std::cin >> userQuit;
  }
  delete[] nums;
  return(0);
}
