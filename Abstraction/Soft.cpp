#include "Soft.h"

Soft::Soft()
{
    name = "undefined";
    company = "undefined";
}

Soft::Soft(std::string name, std::string company)
{
    this->name = name;
    this->company = company;
}

Soft::~Soft()
{
    std::cout << "\n\033[34mcall destructor of base class\033[0m\n";
}

std::string Soft::getName() const
{
    return name;
}

void Soft::setName(std::string name)
{
    this->name = name;
}

std::string Soft::getCompany() const
{
    return company;
}

void Soft::setCompany(std::string company)
{
    this->company = company;
}

void Soft::showInfo() const
{
    std::cout << "\nName:\t\t" << name <<
        "\nCompany:\t" << company << "\n";
}
