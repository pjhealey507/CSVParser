#pragma once
#include <string>
#include <vector>

class Restaurant
{
	public:

	std::string InspectionID;
	std::string DBAName;
	std::string AKAName;
	std::string LicenseNum;
	std::string FacilityType;
	std::string Risk;
	std::string Address;
	std::string City;
	std::string State;
	std::string Zip;
	std::string InspectionDate;
	std::string InspectionType;
	std::string Results;
	std::string Violations;
	std::string Latitude;
	std::string Longitude;
	std::string Location;

	void GetData(std::string line);
	void SetAttributes(std::vector<std::string> values);
};
