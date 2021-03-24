//
// Created by marius on 2021-03-03.
//

#ifndef FORME_GEOMETRICE_1512_2021_CERC_H
#define FORME_GEOMETRICE_1512_2021_CERC_H

#include <ostream>
#include <iostream>
#include "Forma.h"

class Cerc : public Forma {
    int raza;
    int x, y;
public:
    Cerc(int raza = 1, const std::string &culoare = "rosie");
    Cerc(const Cerc &c);

    operator int() {
        std::cout << "op conversie cerc->int\n";
        return raza;
    }

    ~Cerc();
    Cerc& operator=(const Cerc& c);
    friend std::ostream &operator<<(std::ostream &os, const Cerc &cerc);
    double arie() const override;
};

#endif //FORME_GEOMETRICE_1512_2021_CERC_H
