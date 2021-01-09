#ifndef MEMORYCELL_H
#define MEMORYCELL_H

template <typename T>
class MemoryCell {
 public:
    explicit MemoryCell(const T &iv = T{});
    T read() const;
    void write(const T & x);

 private:
    T storedValue;
};
// implementation goes here
#include "memorycell.hpp"
#endif
