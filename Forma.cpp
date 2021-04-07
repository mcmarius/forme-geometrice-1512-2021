//
// Created by marius on 2021-03-24.
//

#include <algorithm>
#include <stdexcept>
#include "Forma.h"

const std::vector <std::string> Forma::culori{
{"rosie"},
{"galben"},
{"albastru"}
};

Forma::Forma(const std::string &culoare) : culoare(culoare) {
    if(std::find(culori.begin(), culori.end(), culoare) == culori.end()) {
        auto mesaj = "`" + culoare + "` nu este o culoare. Culori permise: [";
        for(auto &cul : culori)
            mesaj += cul + ", ";
        mesaj.erase(mesaj.size() - 2, 1);
        mesaj[mesaj.size() - 1] = ']';
        throw std::invalid_argument(mesaj);
    }
}

std::ostream &operator<<(std::ostream &os, const Forma &forma) {
    forma.afisare(os);
    return os;
}

void Forma::afisare(std::ostream &os) const {
    os << "culoare: " << culoare << "\n";
}
