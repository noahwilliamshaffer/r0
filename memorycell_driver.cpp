#include <iostream>
#include "memorycell.h"

using namespace std;

int main() {
    MemoryCell<int> t;
    MemoryCell<string> t1;

    cout << "t: " << t.read() << endl;

    t.write(10);
    cout << "after write, t: " << t.read() << endl;


    cout << "t1: " << t1.read() << endl;

    t1.write("test");
    cout << "after write, t: " << t1.read() << endl;


    return(EXIT_SUCCESS);
}
