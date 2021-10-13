/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab4
*Description: This program will run a Rook Path.
*Date: 7/6/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
int main(){
  int board = 0;
  const int SIZE = 2;
  int position [SIZE];

  std::cout << "Pick the size of your chess board: ";
  std::cin >> board;
  if (board < 0) {
    std::cout << "This is not a valid number for the board.\n";
    return(0);
  }

  std::cout << "Pick two numbers for position of Rook: ";
  for(int i=0; i<SIZE; i++){
    std::cin >> position[i];
  }

  for (int i=0; i<board; i++) {
    for(int j=0; j<board; j++){
      if (position[0] == i && position[1] == j) {
        std::cout << "R";
      }
      if (position[0] == i && position[1] != j) {
        std::cout << "-";
      }
      if(position[0] != i && position[1] == j){
        std::cout << "|";
      }
      if(position[0] != i && position[1] != j){
        std::cout << "*";
      }
    }
    std::cout << "\n";
  }
}
