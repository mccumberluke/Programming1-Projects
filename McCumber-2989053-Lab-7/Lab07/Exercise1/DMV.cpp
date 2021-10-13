#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "DMV.h"


DMV::DMV(std::string fileName){
  std::ifstream inFile;
  size = 0;
  inFile.open(fileName);
  inFile >> size;
  record = new DriversLicenseRecord* [size];
  std::string firstName = "";
  std::string lastName = "";
  int age = 0;
  int license = 0;
  char voterStatus = '\0';
  if(inFile.is_open()){
    for(int i=0; i<size; i++){
      inFile >> firstName;
      inFile >> lastName;
      inFile >> age;
      inFile >> voterStatus;
      inFile >> license;
      record[i] = new DriversLicenseRecord(firstName, lastName, age, license, voterStatus);
    }
  }
  else{
    std::cout << "File could not be opened\n";
  }
  inFile.close();
}

void DMV::run(){
  int choice = 0;
  do {
    std::cout << "Select an option: \n";
    std::cout << "1) Print all Drivers Info\n";
    std::cout << "2) Print all voters\n";
    std::cout << "3) Print drivers by last initial\n";
    std::cout << "4) Print drivers in age range\n";
    std::cout << "5) Quit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    while ( std::cin.fail() )
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> choice;
    }
    if(choice ==1){
      for(int i=0; i<size; i++){
        std::cout << record[i]->getLastName() << ", ";
        std::cout << record[i]->getFirstName();
        std::cout << "(" << record[i]->getAge();
        std::cout << "): " << record[i]->getLicense() << "\n";
      }
    }
    if(choice ==2){
      char voter = '\0';
      for(int i=0; i<size; i++){
        voter = record[i]->getVoterStatus();
        if(voter == 'y' || voter == 'Y'){
          std::cout << record[i]->getLastName() << ", ";
          std::cout << record[i]->getFirstName();
          std::cout << "(" << record[i]->getAge();
          std::cout << "): " << record[i]->getLicense() << "\n";
        }
      }
    }
    if(choice ==3){
      char single = '\0';
      bool checker = false;
      std::cout << "Enter Last initial: ";
      std::cin >> single;
      for(int i=0; i<size; i++){
        if(single == record[i]->getLastName().at(0) || tolower(single) == record[i]->getLastName().at(0)){
          std::cout << record[i]->getLastName() << ", ";
          std::cout << record[i]->getFirstName();
          std::cout << "(" << record[i]->getAge();
          std::cout << "): " << record[i]->getLicense() << "\n";
          checker = true;
        }
      }
      if(!(checker)){
        std::cout << "No record found.\n";
      }
    }
    if(choice ==4){
      int age = 0;
      bool checker = false;
      std::cout << "Enter age: ";
      std::cin >> age;
      for(int i=0; i<size; i++){
        if(age == record[i]->getAge()){
          std::cout << record[i]->getLastName() << ", ";
          std::cout << record[i]->getFirstName();
          std::cout << "(" << record[i]->getAge();
          std::cout << "): " << record[i]->getLicense() << "\n";
          checker = true;
        }
      }
      if(!(checker)){
        std::cout << "No record found.\n";
      }
    }
  } while(choice != 5);
}

DMV::~DMV(){
  delete[] record;
}
