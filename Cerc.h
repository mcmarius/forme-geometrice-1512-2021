//
// Created by marius on 2021-03-03.
//

#ifndef FORME_GEOMETRICE_1512_2021_CERC_H
#define FORME_GEOMETRICE_1512_2021_CERC_H

#include <ostream>
#include <iostream>

class Cerc {
    int raza;
    int x, y;
public:
    explicit Cerc(int raza = 1);
    Cerc(const Cerc& c);
    operator int() {
        std::cout << "op conversie cerc->int\n";
        return raza;
    }

    ~Cerc();
    Cerc& operator=(const Cerc& c);
    friend std::ostream &operator<<(std::ostream &os, const Cerc &cerc);
    double arie() const;
};

#endif //FORME_GEOMETRICE_1512_2021_CERC_H
