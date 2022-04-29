#include "Restaurant.h"
#include <vector>
#include <sstream>

//takes in the line from the ifstream and puts each value into a vector
void Restaurant::GetData(std::string line)
{
	std::vector<std::string> values;
	std::stringstream ss(line);

	while (ss.good())
	{
		std::string substring;
		getline(ss, substring, ',');
		values.push_back(substring);
	}

	SetAttributes(values);
}

//takes in the vector and assigns all of the class attrbutes
void Restaurant::SetAttributes(std::vector<std::string> values)
{
	InspectionID = values[0];
	DBAName = values[1];
	AKAName = values[2];
	LicenseNum = values[3];
	FacilityType = values[4];
	Risk = values[5];
	Address = values[6];
	City = values[7];
	State = values[8];
	Zip = values[9];
	InspectionDate = values[10];
	InspectionType = values[11];
	Results = values[12];
	Violations = values[13];
	Latitude = values[14];
	Longitude = values[15];
	Location = values[16];
}