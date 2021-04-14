//
// Created by marius on 2021-03-24.
//

#ifndef FORME_GEOMETRICE_1512_2021_FORMA_H
#define FORME_GEOMETRICE_1512_2021_FORMA_H

#include <string>
#include <vector>
#include <ostream>
#include <memory>

class Forma {
protected:
    std::string culoare;
    static const std::vector <std::string> culori;
public:
    explicit Forma(const std::string &culoare);
    virtual double arie() const = 0;
    virtual std::unique_ptr <Forma> clone() = 0;
    friend std::ostream &operator<<(std::ostream &os, const Forma &forma);
    virtual void afisare(std::ostream &os) const;
    virtual ~Forma() = default;
};

#endif //FORME_GEOMETRICE_1512_2021_FORMA_H
