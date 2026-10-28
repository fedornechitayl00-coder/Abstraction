#include "FreeSoft.h"
#include "Shareware.h"
#include "Comercial.h"

int main() {
	FreeSoft paint_soft("Paint", "Microsoft");
	paint_soft.showInfo();

	std::cout << "\n___________________________\n";

	Shareware photoshop("Photoshop", "Adobe", Date(2019, 8, 12), 7);
	photoshop.showInfo();

	std::cout << "\n___________________________\n";
	Comercial VisualStudio("Visual Studio", "Microsoft", Date(), 30, 100)
}