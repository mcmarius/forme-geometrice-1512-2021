//
// Created by marius on 2021-03-03.
//

#include "Plansa.h"

void Plansa::add(Cerc &cerc) {
    forme.push_back(cerc);
}

void Plansa::remove(int i) {
    forme.erase(forme.begin()+i);
}

Plansa::Plansa(const std::string &nume) : nume(nume) {}

std::ostream &operator<<(std::ostream &os, const Plansa &plansa) {
    os << "forme: {\n";
    for(auto& forma : plansa.forme)
        os << "\t" << forma;
    os << "}, nume: " << plansa.nume << "\n";
    return os;
}

void Plansa::rename(const std::string &nume) {
    Plansa::nume = nume;
}
