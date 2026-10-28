#pragma once
#include <algorithm>
#include <vector>
#include "Comercial.h"
#include "FreeSoft.h"

class Admin
{
	std::vector<Soft*> admin;
public:
	Admin();
	~Admin();

	void addSoft(Soft* obj);
	//void deleteSoft(int index);
	void showAllSofts() const;
	void findSoftByName(std::string title);
	void sortSoftByName();
	void sortSoftByType();
	void sortSoftByAvailable();
	void saveToFile() const;
};

