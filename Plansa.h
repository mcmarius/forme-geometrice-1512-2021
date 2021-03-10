//
// Created by marius on 2021-03-03.
//

#ifndef FORME_GEOMETRICE_1512_2021_PLANSA_H
#define FORME_GEOMETRICE_1512_2021_PLANSA_H

#include <vector>
#include <ostream>
#include "Cerc.h"

class Plansa {
    std::vector<Cerc> forme;
    std::string nume;
public:
    Plansa(const std::string &nume);
    void add(Cerc &cerc);
    void remove(int i);
    void rename(const std::string &nume);
    friend std::ostream &operator<<(std::ostream &os, const Plansa &plansa);
};

#endif //FORME_GEOMETRICE_1512_2021_PLANSA_H
