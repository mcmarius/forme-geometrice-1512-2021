//
// Created by marius on 2021-03-03.
//

#ifndef FORME_GEOMETRICE_1512_2021_PLANSA_H
#define FORME_GEOMETRICE_1512_2021_PLANSA_H

#include <vector>
#include <ostream>
#include <memory>
#include "Cerc.h"

class Plansa {
    std::vector <std::unique_ptr <Forma>> forme;
    std::string nume;
public:
    explicit Plansa(std::string nume);
    void add(std::unique_ptr <Forma> forma);
    void remove(int i);
    void rename(const std::string &nume);
    std::unique_ptr <Forma> &operator[](int i);
    friend std::ostream &operator<<(std::ostream &os, const Plansa &plansa);
};

#endif //FORME_GEOMETRICE_1512_2021_PLANSA_H
