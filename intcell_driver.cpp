#include <iostream>
#include "intcell.h"

using namespace std;

int main() {
    IntCell t;

    cout << "t: " << t.read() << endl;

    t.write(10);
    cout << "after write, t: " << t.read() << endl;

    return(EXIT_SUCCESS);
}
