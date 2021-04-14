//
// Created by marius on 2021-03-03.
//

#include <iostream>
#include <memory>
#include "Cerc.h"
#include "Plansa.h"
#include "Toolbar.h"
#include "Forma.h"
#include "Patrat.h"

class my_exception_base : public std::runtime_error {
public:
    my_exception_base(const std::string &arg) : runtime_error(arg) {}

    my_exception_base(const char *string) : runtime_error(string) {}
};

class vec {
    int *v;
    int n;
public:
    vec(int n) : n(n) {
        v = new int[n];
    }

    vec(const vec &v2) : n(v2.n) {
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
                aux = new int[v2.n];
            }
            std::copy(v2.v, v2.v + v2.n, aux);
            if(n < v2.n) {
                delete[] v;
                v = aux;
            }
            n = v2.n;
        }
        return *this;
    }

    ~vec() {
        delete[] v;
    }
};

void cercuri();

//void f(int c) {
//
//    std::cout << "f int\n";
//}

//void f(Cerc c) {
//    std::cout << "f cerc\n";
//}


//void func(Forma* f) {
//
//}

class C {
    Plansa *p;
    Forma *f;
public:
    C(Plansa *p, Forma *f) : p(p), f(f) {}
};

int main() {
    std::vector <std::reference_wrapper <Forma>> vec;
    std::vector <Forma *> vec1;
    vec1.push_back(new Cerc);
    for(auto &elem : vec1)
        delete elem;
    std::vector <C> vec2;
//    vec2.push_back(C(new Plansa("test"), new Cerc));
    std::vector <std::unique_ptr <Forma>> vec3;
    vec3.push_back(std::make_unique <Cerc>(1, "galben"));
    std::vector <std::shared_ptr <Forma>> vec4;

    std::vector <std::weak_ptr <Forma>> vec5;
//    Forma **vec2 = new Forma*[5];

    /*ret = f1(obj);
    if(ret != 0)
        ??? eventual return;
    ret = f2(obj);
    if(ret != 0)
        return;
    ret = f3(obj);
    if(ret != 0)
        return ;

    f1();
    f2();
    f3();

    try {
        f1();
        f2();
        f3();
    } catch (ceva ) {

    }*/


//throw my_exception_base("hopa...");
    std::cout << "inainte de try/catch\n";
    try {
        std::cout << "inainte de constr\n";
        cercuri();
        Cerc cerc_rau(0);
        std::cout << cerc_rau << "dupa constr\n";
    }
    catch(const std::domain_error &) {
    }
    catch(const std::logic_error &ex) {
        //ex.what();
        std::cout << ex.what() << "\n";
    }
    std::cout << "dupa try/catch\n";

    Toolbar toolbar;
    Plansa p("scratchpad");
    Cerc c(4), c2(5);
    {
        p.add(std::make_unique <Cerc>(4.5));
    }
    std::cout << c;
    p.add(std::make_unique <Cerc>(5.5));
    operator<<(std::cout, c2);
    std::cout << p;

    p.remove(0);
    std::cout << "op[] " << *p[0] << "\n";
    p.add(std::make_unique <Patrat>(12));

    std::cout << typeid(p[0]).name();

    Forma *pf = new Cerc;
    Forma *pf2 = new Patrat;
    Patrat pat;
    Forma &ref1 = c2;
    Forma &ref2 = pat;
    std::cout
    << "\ntypeid pf: " << typeid(pf).name() << "\n"
    << "typeid pf2: " << typeid(pf2).name() << "\n"
    << "typeid *pf: " << typeid(*pf).name() << "\n"
    << "typeid *pf2: " << typeid(*pf2).name() << "\n"
    << "typeid Cerc: " << typeid(Cerc).name() << "\n"
    << "typeid Cerc*: " << typeid(Cerc *).name() << "\n"
    << "typeid Cerc&: " << typeid(Cerc &).name() << "\n"
    << "typeid c2: " << typeid(c2).name() << "\n"
    << "typeid pat: " << typeid(pat).name() << "\n"
    << "typeid ref1: " << typeid(ref1).name() << "\n"
    << "typeid ref2: " << typeid(ref2).name() << "\n";

    try {
        /// reflection
        if(typeid(*p[1]).name() == typeid(Cerc &).name())
            std::cout << "typeid cerc ==\n";
        else if(typeid(*p[1]).name() == typeid(Patrat &).name())
            std::cout << "typeid patrat ==\n";
        auto &cerc = dynamic_cast<Cerc &>(*p[1]);
        cerc.setRaza(123);
        std::cout << cerc;
    }
    catch(std::bad_cast &e) {
        std::cout << "cast nereusit: " << e.what() << "\n";
    }

    p.add(std::make_unique <Patrat>(13, "albastru"));

//    Forma &f1 = c;
//    f(c);
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

void cercuri() {
    Cerc cerc_bun(3);
    std::cout << cerc_bun << "\n";
    Cerc cerc_transparent(2, "abstracta");
}

