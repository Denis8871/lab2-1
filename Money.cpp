#include "Money.h"
#include<string>

void Money::Init(long long hryvnias, unsigned int kopecks)
{
	this->hryvnias = hryvnias;
	this->kopecks = kopecks;
}

void Money::Read()
{
	std::cout << "¬вед≥ть суму(гривн≥ коп≥йки): ";
	std::cin >> hryvnias >> kopecks;
}

void Money::Display()
{
	std::cout << "—ума: " << hryvnias << "," << static_cast<int>(kopecks) << " UAH" << std::endl;
}

std::string Money::toString() const
{
	return std::to_string(hryvnias) + "," + std::to_string(kopecks) + " UAH";
}
