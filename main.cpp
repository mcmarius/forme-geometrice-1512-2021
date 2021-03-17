//
// Created by marius on 2021-03-03.
//

#include <iostream>
#include "Cerc.h"
#include "Plansa.h"
#include "Toolbar.h"

class vec {
    int *v;
    int n;
public:
    vec(int n) : n(n) {
        v = new int[n];
    }
    vec(const vec& v2) : n(v2.n) {
        v = new int[n];
    }
    vec& operator=(const vec& v2) {
        if(this != &v2) {
            delete[] v;
            n = v2.n;
            v = new int[n];
            std::copy(v2.v, v2.v + v2.n, v);
        }

        if(this != &v2) {
            int *aux = v;
            if(n < v2.n) {
                v = new int[v2.n];
            }
            std::copy(v2.v, v2.v + v2.n, v);
            if(n < v2.n) {
                delete[] aux;
            }
            n = v2.n;
        }
        return *this;
    }
    ~vec() {
        delete[] v;
    }
};

void f(int c) {

    std::cout << "f int\n";
}

void f(Cerc c) {
    std::cout << "f cerc\n";
}

int main() {

    Toolbar toolbar;
    Plansa p("scratchpad");
    Cerc c(4), c2(5);
    p.add(c);
    std::cout << c;
    p.add(c2);
    operator<<(std::cout, c2);
    std::cout << p;

    p.remove(0);


    f(c);
    Cerc c10(10);
    std::cout << "dupa c10\n";
    Cerc c11 = Cerc(11);
    std::cout << "dupa c11\n";
//    Cerc c12 = 12;
    Cerc c13;
    std::cout << "dupa c13\n";
    c13 = Cerc(13);
    std::cout << "dupa c13 op=\n";

    Cerc c3 = (c = c2);
    c.operator=(c2);
    std::cout << ">>>> op=: " << c;
    p.rename("plansa v2");
    std::cout << p;

    // std::cout << std::boolalpha;
    std::cout << toolbar.isHidden() << " ";
    toolbar.toggle();
    std::cout << toolbar.isHidden() << "\n";
    return 0;
}

