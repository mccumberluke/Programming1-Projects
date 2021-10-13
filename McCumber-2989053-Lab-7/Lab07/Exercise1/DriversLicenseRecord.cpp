#include "DriversLicenseRecord.h"

DriversLicenseRecord::DriversLicenseRecord(std::string f_Name, std::string l_Name, int new_Age, int new_License, int new_Voter){
  firstName = f_Name;
  lastName = l_Name;
  age = new_Age;
  license = new_License;
  voterStatus = new_Voter;
}
void DriversLicenseRecord::setFirstName(std::string newFirstName){
  firstName = newFirstName;
}
std::string DriversLicenseRecord::getFirstName(){
  return(firstName);
}

void DriversLicenseRecord::setLastName(std::string newLastName){
  lastName = newLastName;
}
std::string DriversLicenseRecord::getLastName(){
  return(lastName);
}

void DriversLicenseRecord::setAge(int newAge){
  age = newAge;
}
int DriversLicenseRecord::getAge(){
  return(age);
}

void DriversLicenseRecord::setLicense(int newLicense){
  license = newLicense;
}
int DriversLicenseRecord::getLicense(){
  return(license);
}

void DriversLicenseRecord::setVoterStatus(char newVoter){
  voterStatus = newVoter;
}
char DriversLicenseRecord::getVoterStatus(){
  return(voterStatus);
}
