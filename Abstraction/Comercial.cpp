#include "Comercial.h"

Comercial::Comercial()
{
    price = 0;
}

Comercial::Comercial(std::string name, std::string company, Date install, int days, float price)
    : Shareware(name, company, install, days)
{
    this->price = price;
}

Comercial::~Comercial()
{
    std::cout << "\n\033[34m~Comercial()\033[0m\n";
}

float Comercial::getPrice() const
{
    return price;
}

void Comercial::setPrice(float price)
{
    this->price = price;
}

void Comercial::showInfo() const
{
    Shareware::showInfo();
    std::cout << "\nprice:\t" << price << std::endl;
}

void Comercial::saveToFile(ofstream& file) const
{
    file << "\nComercial\n" <<
        name << company <<
        "\n" << install.getDay() << " " << install.getMonth() << " " << install.getYear()
        << "\n" << days << price << std::endl;
}
