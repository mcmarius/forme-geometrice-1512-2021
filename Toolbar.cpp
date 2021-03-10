//
// Created by marius on 2021-03-10.
//

#include "Toolbar.h"

Toolbar::Toolbar() = default; // : hidden() {}

bool Toolbar::isHidden() const {
    return hidden;
}

void Toolbar::toggle() {
    hidden = !hidden;
}
