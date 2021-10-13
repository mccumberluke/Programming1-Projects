/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab3
*Description: This program will be used for a number guessing game.
*Date: 6/24/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
int main(){
  int userGuess = 0;
  int secretNum = 0;
  char userQuit = '\0';
  int count = 0;
  int closest = 0;

  while (userQuit != 'n') {
    srand(time(NULL));
    for(int i=0; i<=100; i++){
      secretNum = rand() % 100 + 1;
    }
    std::cout << "Welcome to the number guessing game.\n";
    do {
      std::cout << "Guess a number: ";
      std::cin >> userGuess;
      if(userGuess < 1 || userGuess > 100){
        std::cout << "Please enter a number between 1 and 100.\n";
      }
      else if(userGuess < secretNum){
        std::cout << "Sorry, your guess is too low.\n";
        count++;
        closest = userGuess;
      }
      else if(userGuess > secretNum){
        std::cout << "Sorry, your guess is too high.\n";
        count++;
        closest = userGuess;
      }
    } while(userGuess != secretNum);

    if(userGuess == secretNum){
      count++;
      std::cout << "You win!\n";
    }
    std::cout << "You guessed the secret number after " << count << " guess(es).\n";

    std::cout << "Your closest guess was " << closest << " .\n";
    std::cout << "Would you like to play again? (y/n): ";
    std::cin >> userQuit;
    if(userQuit == 'y'){
      count = 0;
    }
    if(userQuit != 'y' && userQuit != 'n'){
        std::cout << "You must give a y or n.\n";
      }
  }
  return(0);
}
