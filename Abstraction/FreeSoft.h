#pragma once
#include "Soft.h"


class FreeSoft :
    public Soft
{
public:
    FreeSoft();
    FreeSoft(const std::string &name, const std::string &company);
    ~FreeSoft();

    bool isAvailable() const override;
    void saveToFile(ofstream& file) const override;
};

