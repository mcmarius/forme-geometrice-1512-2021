//
// Created by marius on 2021-03-03.
//

#include "Cerc.h"
#include <numbers>
#include <iostream>

Cerc::~Cerc() {
    std::cout << "destructor cerc " << raza << "\n";
}


std::ostream &operator<<(std::ostream &os, const Cerc &cerc) {
    os << "raza: " << cerc.raza << ", aria: " << cerc.arie() << "\n";
    return os;
}

double Cerc::arie() const {
    return std::numbers::pi * raza * raza;
}

Cerc::Cerc(const Cerc &c) : raza(c.raza), Forma(c) {
    // raza = c.raza;
    std::cout << "cc cerc " << raza << "\n";
}

Cerc &Cerc::operator=(const Cerc &c) {
    if(this != &c) {
        raza = c.raza;
    }
    std::cout << "op= cerc " << raza << "\n";
    return *this;
}

Cerc::Cerc(int raza, const std::string &culoare) : Forma(culoare), raza(raza) {}
