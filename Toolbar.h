//
// Created by marius on 2021-03-10.
//

#ifndef FORME_GEOMETRICE_1512_2021_TOOLBAR_H
#define FORME_GEOMETRICE_1512_2021_TOOLBAR_H

class Toolbar {
    bool hidden = false;
public:
    Toolbar(); // = default;
    bool isHidden() const;
    void toggle();
};

#endif //FORME_GEOMETRICE_1512_2021_TOOLBAR_H
