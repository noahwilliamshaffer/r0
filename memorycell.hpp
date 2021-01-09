// do not include header file here, 
// why?
//#include "intcell.h"

template <typename T>
MemoryCell<T>::MemoryCell(const T & iv): storedValue{iv} {}

template <typename T>
T MemoryCell<T>::read() const {
    return storedValue;
}

template <typename T>
void MemoryCell<T>::write(const T & x) {
    storedValue = x;
}
