//
// Created by marius on 2021-03-03.
//

#include <iostream>
#include "Cerc.h"
#include "Plansa.h"
#include "Toolbar.h"

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

