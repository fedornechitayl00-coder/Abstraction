#include "Admin.h"

int main() {
	//FreeSoft paint_soft("Paint", "Microsoft");
	//paint_soft.showInfo();

	//std::cout << "\n___________________________\n";

	//Shareware photoshop("Photoshop", "Adobe", Date(2019, 8, 12), 7);
	//photoshop.showInfo();

	//std::cout << "\n___________________________\n";
	//Comercial VisualStudio("Visual Studio", "Microsoft", Date(), 30, 100);

	Admin user;

	user.addSoft(new FreeSoft("Notepad", "Noname"));

	user.sortSoftByName();
	user.findSoftByName("Paint");
	user.findSoftByName("CLine");
	
	user.saveToFile();
}