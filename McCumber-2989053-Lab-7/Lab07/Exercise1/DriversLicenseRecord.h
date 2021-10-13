#ifndef DRIVERS_LICENSE_RECORD_H
#define DRIVERS_LICENSE_RECORD_H
#include <string>

class DriversLicenseRecord{
  private:
    std::string firstName;
    std::string lastName;
    int age;
    int license;
    char voterStatus;

  public:
    DriversLicenseRecord(std::string f_Name, std::string l_Name, int new_Age, int new_License, int new_Voter);
    std::string getLastName();
    std::string getFirstName();
    int getAge();
    int getLicense();
    char getVoterStatus();
    void setLastName(std::string newLastName);
    void setFirstName(std::string newFirstName);
    void setAge(int newAge);
    void setLicense(int newLicense);
    void setVoterStatus(char newVoter);
};
#endif
