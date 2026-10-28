#include "Shareware.h"

Shareware::Shareware()
{
    //install = Date(0, 0, 0);
    days = 0;
}

Shareware::Shareware(std::string name, std::string company, Date install, int days)
    :Soft(name, company)
{
    this->install = install;
    this->days = days;
}

Shareware::~Shareware()
{
    std::cout << "\n\033[34m~Shareware()\033[0m\n";
}

Date Shareware::getInstall() const
{
    return install;
}

int Shareware::gatDays() const
{
    return days;
}

void Shareware::showInfo() const
{
    Soft::showInfo();
    std::cout << "\nInstall date:\t\t" << install << 
        "\nTrial period for:\t" << days <<
        "\nTrial period expiring date:\t" << (install + days) << "\n";
}

bool Shareware::isAvailable() const
{
    return (install + days) >= Date();
}

void Shareware::saveToFile(ofstream& file) const
{
    file << "\nShareware" <<
        name << company <<
        "\n" << install.getDay() << " " << install.getMonth() << " " << install.getYear() 
        << "\n" << days << std::endl;
}
