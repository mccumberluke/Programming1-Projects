#ifndef DMV_H
#define DMV_H
#include "DriversLicenseRecord.h"

class DMV{
  private:
    DriversLicenseRecord** record;
    int size;
  public:
    DMV(std::string fileName);
    ~DMV();
    void run();
};
#endif
