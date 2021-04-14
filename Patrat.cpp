//
// Created by marius on 2021-04-14.
//

#include "Patrat.h"

Patrat::Patrat(float latura, const std::string &culoare) : Forma(culoare), latura(latura) {}

double Patrat::arie() const {
    return latura * latura;
}

std::unique_ptr <Forma> Patrat::clone() {
    return std::make_unique <Patrat>(*this);
}

void Patrat::afisare(std::ostream &os) const {
    os << "Patrat: ";
    Forma::afisare(os);
    os << "\tlatura: " << latura << "\n";
}
