/*-----------------------------------------------------------------------------
*
*File Name: main.cpp
*Author: Luke McCumber
*Assignment: EECS-168 Lab7
*Description: This program will use Classes and array objects for a DMV.
*Date: 7/27/2021
*
-----------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <string>
#include "DriversLicenseRecord.h"
#include "DMV.h"

int main(int argc, char** argv){
  if(argc < 2){
    exit(0);
  }
  else{
    std::string fileName = argv[1];
    DMV myDMV(fileName);
    myDMV.run();
  }
}
