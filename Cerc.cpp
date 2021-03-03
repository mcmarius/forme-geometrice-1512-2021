//
// Created by marius on 2021-03-03.
//

#include "Cerc.h"
#include <numbers>

Cerc::Cerc(int raza) : raza(raza) {}

Cerc::~Cerc() {
}

std::ostream &operator<<(std::ostream &os, const Cerc &cerc) {
    os << "raza: " << cerc.raza << ", aria: " << cerc.arie();
    return os;
}

double Cerc::arie() const {
    return std::numbers::pi * raza * raza;
}
