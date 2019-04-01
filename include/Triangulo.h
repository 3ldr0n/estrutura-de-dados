#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>

class Triangulo {
private:
    float base, altura, c, area;
    float calcularArea();
public:
    Triangulo(float va, float vb, float vc);
    ~Triangulo();
    float getBase();
    float getAltura();
    float getC();
    float getArea();
    float operator+(Triangulo t);
    friend std::ostream &operator<<(std::ostream &out, Triangulo &t);
};

#endif
