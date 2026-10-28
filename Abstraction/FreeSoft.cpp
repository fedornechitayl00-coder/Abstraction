#include "FreeSoft.h"

FreeSoft::FreeSoft()
{
}

FreeSoft::FreeSoft(const std::string& name, const std::string& company)
    : Soft(name, company)
{
}

FreeSoft::~FreeSoft()
{
    std::cout << "\n~FreeSoft()\n";
}

bool FreeSoft::isAvailable() const
{
    return true;
}

void FreeSoft::saveToFile(ofstream& file) const
{
    file << "FreeSoft" << std::endl <<
        name << std::endl <<
        company << std::endl;
}
