//
// Created by marius on 2021-03-03.
//

#include "Cerc.h"
#include <cmath>

Cerc::Cerc(int raza) : raza(raza) {}

Cerc::~Cerc() {
}

std::ostream &operator<<(std::ostream &os, const Cerc &cerc) {
    os << "raza: " << cerc.raza << ", aria: " << cerc.arie();
    return os;
}

float Cerc::arie() const {
    return M_PI * raza * raza;
}
