//
// Created by marius on 2021-04-14.
//

#ifndef FORME_GEOMETRICE_1512_2021_PATRAT_H
#define FORME_GEOMETRICE_1512_2021_PATRAT_H

#include "Forma.h"

class Patrat : public Forma {
    float latura;
public:
    explicit Patrat(float latura = 1, const std::string &culoare = "galben");
    double arie() const override;
    std::unique_ptr <Forma> clone() override;
    void afisare(std::ostream &os) const override;
};

#endif //FORME_GEOMETRICE_1512_2021_PATRAT_H
