//
// Created by marius on 2021-03-03.
//

#include "Cerc.h"

#include <iostream>

Cerc::~Cerc() {
    std::cout << "destructor cerc " << raza << "\n";
}
//
//
//std::ostream &operator<<(std::ostream &os, const Cerc &cerc) {
//    os << "raza: " << cerc.raza << ", aria: " << cerc.arie() << "\n";
//    return os;
//}

double Cerc::arie() const {
    // todo get better accuracy
    const double pi = 3.14159;
    return pi * raza * raza;
}

Cerc::Cerc(const Cerc &c) : Forma(c), raza(c.raza) {
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

Cerc::Cerc(int raza, const std::string &culoare) : Forma(culoare), raza(raza) {
    if(raza <= 0) {
        throw std::domain_error("raza trebuie sa fie numar natural nenul");
    }
}

void Cerc::afisare(std::ostream &os) const {
    Forma::afisare(os);
    os << "\traza: " << raza << ", aria: " << arie() << "\n";
}

std::unique_ptr <Forma> Cerc::clone() {
    return std::make_unique <Cerc>(*this);
}

void Cerc::setRaza(int raza) {
    Cerc::raza = raza;
}

std::ostream &operator<<(std::ostream &os, const Cerc &cerc) {
    os << static_cast<const Forma &>(cerc) << " raza: " << cerc.raza << " x: " << cerc.x << " y: " << cerc.y;
    return os;
}
