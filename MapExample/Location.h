#pragma once
#include <string>
class Location
{
private:
	std::string _name;
	int _x;
	int _y;
	
public:
	Location(std::string name, int x, int y);
	~Location();
	std::string DisplayLocationInfo();

	Location *North = nullptr;
	Location *South = nullptr;
	Location *East = nullptr;
	Location *West = nullptr;

	int getx() { return _x; }
	int gety() { return _y; }
};

