#pragma once
#include "Date.h"

class Soft
{
protected:
	std::string name;
	std::string company;
public:
	Soft();
	Soft(std::string name, std::string company);
	virtual ~Soft();

	std::string getName() const;
	void setName(std::string name);
	std::string getCompany() const;
	void setCompany(std::string company);

	virtual void showInfo() const;
	virtual bool isAvailable() const = 0;
	virtual void saveToFile(ofstream& file) const = 0;
};

