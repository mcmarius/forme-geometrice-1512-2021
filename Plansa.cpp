//
// Created by marius on 2021-03-03.
//

#include "Plansa.h"

#include <utility>

void Plansa::add(std::unique_ptr <Forma> forma) {
//    forme.push_back(forma->clone());
//    forme.emplace_back(forma->clone());
    forme.emplace_back(std::move(forma));
}

void Plansa::remove(int i) {
    forme.erase(forme.begin() + i);
}

Plansa::Plansa(std::string nume) : nume(std::move(nume)) {}

std::ostream &operator<<(std::ostream &os, const Plansa &plansa) {
    os << "forme: {\n";
    for(auto &forma : plansa.forme)
        os << "\t" << *forma;
    os << "}, nume: " << plansa.nume << "\n";
    return os;
}

void Plansa::rename(const std::string &nume) {
    Plansa::nume = nume;
}

std::unique_ptr <Forma> &Plansa::operator[](int i) {
    return forme[i];
}
