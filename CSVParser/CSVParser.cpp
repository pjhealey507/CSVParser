// CSVParser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Restaurant.h"
#include <vector>

int main()
{
    std::string line;
    std::ifstream in("Food_Inspections.csv");

    std::vector<Restaurant> restaurants;

    if (in.is_open())
    {
        std::cout << "Reading file..." << std::endl;

        while (getline(in, line))
        {
            Restaurant r;
            r.GetData(line);

            restaurants.push_back(r);
        }

        std::cout << "File read!" << std::endl;

        in.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }

    int x;
    std::cin >> x;
}
