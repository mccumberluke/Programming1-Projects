/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab6
*Description: This program will use command line arguments for arrays.
*Date: 7/19/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <string>

int* insert(int arr[], int& size, int value, int position){
  size++;
  int* newArr = nullptr;
  newArr = new int[size+1];

  for(int i=0; i<position; i++){
    newArr[i] = arr[i];
  }
  newArr[position-1] = value;
  for(int i=position; i<size; i++){
    newArr[i] = arr[i-1];
  }
  delete[] arr;
  return(newArr);
}

int* remove(int arr[], int& size, int position){
  int* newArr = nullptr;
  newArr = new int[size];
  for(int i=0; i<size; i++){
    newArr[i] = arr[i];
  }
  for(int i=position; i<size; i++){
    newArr[i] = newArr[i+1];
  }
  size--;
  delete[] arr;
  return(newArr);
}

int count(int arr[], int size, int target){
  int count = 0;
  for(int i=0; i<size; i++){
    if(arr[i] == target){
      count++;
    }
  }
  return(count);
}

void print(int arr[], int size) {
  int num = 0;
  std::cout << "[";
  for(int i=0; i<size-1; i++){
    std::cout << arr[i] << ", ";
    num++;
  }
  if(num<size){
    std::cout << arr[num];
  }
  std::cout << "]";
  std::cout << "\n";
}

int main(int argc, char** argv) {
  int size = 0;
  int choice = 0;
  int value = 0;
  int position = 0;
  int target = 0;
  if(argc == 3){
    std::string strSize = argv[2];
    size = std::stoi(strSize);
    std::ifstream inFile;
    inFile.open(argv[1]);
    if(inFile.is_open()){
      int* arr = nullptr;
      arr = new int[size];
      for(int i=0; i<size; i++){
        inFile >> arr[i];
      }
      do {
        std::cout << "Make a Selection: \n";
        std::cout << "1) Insert\n";
        std::cout << "2) Remove\n";
        std::cout << "3) Count\n";
        std::cout << "4) Print\n";
        std::cout << "5) Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;
        if(choice < 0 && choice >5){
          std::cout << "Invalid choice.\n";
        }
        else if(choice ==1){
          std::cout << "What value do you want to insert: ";
          std::cin >> value;
          std::cout << "What position do you want to insert: ";
          std::cin >> position;
          if(position<0 || position>5){
            std::cout << "Invalid position.\n";
          }
          arr = insert(arr, size, value, position);
        }
        else if(choice ==2){
          std::cout << "What position do you want to remove: ";
          std::cin >> position;
          arr = remove(arr, size, position);
        }
        else if(choice ==3){
          std::cout << "What value do you want to count for: ";
          std::cin >> target;
          std::cout << "Your target number was found: " << count(arr, size, target) << "\n";
        }
        else if(choice == 4){
          print(arr, size);
        }
      } while(choice != 5);
      delete[] arr;
      inFile.close();
    }
    else{
      std::cout << "File cannot be opened.\n";
    }
  }
}
