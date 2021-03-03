//
// Created by marius on 2021-03-03.
//

#ifndef FORME_GEOMETRICE_1512_2021_CERC_H
#define FORME_GEOMETRICE_1512_2021_CERC_H

#include <ostream>

class Cerc {
    int raza;
public:
    Cerc(int raza);
    ~Cerc();
    friend std::ostream &operator<<(std::ostream &os, const Cerc &cerc);
    double arie() const;
};

#endif //FORME_GEOMETRICE_1512_2021_CERC_H
