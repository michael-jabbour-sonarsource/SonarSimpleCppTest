#include "clamped_add.h"
#include <iostream>


void f() {
    int x = 0;
    #include "someheader.h"
}


int main() {
    f();
    // just a dummy executable for now
    return clamped_add(0u, 0u, 10u);
    /* C comment */
}

class Lines {
    int moreLines() {
        int evenMoreLines = 0;
        return evenMoreLines;
    }
};
