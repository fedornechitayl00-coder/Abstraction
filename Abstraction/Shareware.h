#pragma once
#include "Soft.h"

class Shareware :
    public Soft
{
protected:
    Date install;
    int days;
public:
    Shareware();
    Shareware(std::string name, std::string company, Date install, int days);
    ~Shareware();

    Date getInstall() const;
    int gatDays() const;

    void showInfo() const override;
    bool isAvailable() const override;
    void saveToFile(ofstream& file) const override;
};

