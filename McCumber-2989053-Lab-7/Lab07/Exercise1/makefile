Exercise1: main.o DriversLicenseRecord.o DMV.o
	g++ -std=c++11 -g -Wall main.o DriversLicenseRecord.o DMV.o -o Exercise1

main.o: main.cpp DriversLicenseRecord.h DMV.h
	g++ -std=c++11 -g -Wall -c main.cpp

DriversLicenseRecord.o: DriversLicenseRecord.h DriversLicenseRecord.cpp
	g++ -std=c++11 -g -Wall -c DriversLicenseRecord.cpp

DMV.o: DMV.h DMV.cpp
	g++ -std=c++11 -g -Wall -c DMV.cpp
clean:
	rm *.o Exercise1
