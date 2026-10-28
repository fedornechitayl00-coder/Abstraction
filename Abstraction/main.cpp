#include "FreeSoft.h"
#include "Shareware.h"

int main() {
	FreeSoft paint_soft("Paint", "Microsoft");
	paint_soft.showInfo();

	std::cout << "\n___________________________\n";

	Shareware photoshop("Photoshop", "Adobe", Date(2019, 8, 12), 7);
	photoshop.showInfo();
}