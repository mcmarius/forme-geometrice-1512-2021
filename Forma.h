//
// Created by marius on 2021-03-24.
//

#ifndef FORME_GEOMETRICE_1512_2021_FORMA_H
#define FORME_GEOMETRICE_1512_2021_FORMA_H

#include <string>

class Forma {
    std::string culoare;
public:
    Forma(const std::string &culoare);
    virtual double arie() const = 0;
};

#endif //FORME_GEOMETRICE_1512_2021_FORMA_H
