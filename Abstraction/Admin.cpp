#include "Admin.h"
#include <typeinfo>

Admin::Admin()
{
	//FreeSoft paint_soft("Paint", "Microsoft");
	//Shareware photoshop("Photoshop", "Adobe", Date(2019, 8, 12), 7);
	//Comercial VisualStudio("Visual Studio", "Microsoft", Date(), 30, 100);

	admin.push_back(new FreeSoft("Paint", "Microsoft"));
	admin.push_back(new Shareware("Photoshop", "Adobe", Date(2019, 8, 12), 7));
	admin.push_back(new Comercial("Visual Studio", "Microsoft", Date(), 30, 100));

}

Admin::~Admin()
{
	for (auto item : admin) {
		delete item;
	}
	admin.clear();
}

void Admin::addSoft(Soft* obj)
{
	if (obj != nullptr) { admin.push_back(obj); }
}

//void Admin::deleteSoft(int index)
//{
//}

void Admin::showAllSofts() const
{
	for (auto item : admin) {
		item->showInfo();
		std::cout << "_________________________________\n";
	}
}

void Admin::findSoftByName(std::string title)
{
	auto result = std::find_if(admin.begin(), admin.end(), 
		[title](Soft* item) {return item->getName() == title; });
	if (result != admin.end()) {
		std::cout << "\nResults:" << std::endl;
		(*result)->showInfo();
	}
	else {
		std::cout << "\nnot found\n";
	}
}

void Admin::sortSoftByName()
{
	std::cout << "\nsort by name:\n";
	std::sort(admin.begin(), admin.end(), 
		[](Soft* left, Soft* right) {return left->getName() > right->getName(); });
	showAllSofts();
}

void Admin::sortSoftByType()
{
	std::sort(admin.begin(), admin.end(), 
		[](Soft* left, Soft* right) {return strcmp(typeid(left).name(), typeid(right).name()); });
	std::cout << "\nsort by type:\n";
	showAllSofts();
}

void Admin::sortSoftByAvailable()
{
	std::cout << "\nsort by available:\n";
	std::sort(admin.begin(), admin.end(),
		[](Soft* left, Soft* right) {return left->isAvailable() > right->isAvailable(); });
	showAllSofts();
}

void Admin::saveToFile() const
{
	std::ofstream file("admin.txt");
	if (file.is_open()) {
		for (auto item : admin) {
			item->saveToFile(file);
		}
		file.close();
		std::cout << "\nSaved to file.\n";
	}
}
