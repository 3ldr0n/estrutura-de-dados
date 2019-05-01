#ifndef MONOMIO_H
#define MONOMIO_H

class Monomio {
private:
    double coef;
    int exp;
public:
    Monomio(double coef, int exp);
    Monomio();
    ~Monomio();
    double getCoef();
    int getExp();
};

#endif
