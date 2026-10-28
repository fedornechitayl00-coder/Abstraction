#pragma once
#include "Shareware.h"

class Comercial :
    public Shareware
{
protected:
    float price;
public:
    Comercial();
    Comercial(std::string name, std::string company, Date install, int days, float price);
    ~Comercial();

    float getPrice() const;
    void setPrice(float price);

    void showInfo() const override;
    void saveToFile(ofstream& file) const override;
};

