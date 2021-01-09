#ifndef INTCELL_H
#define INTCELL_H

class IntCell {
 public:
    explicit IntCell(int iv = 0);
    int read() const;
    void write(int x);

 private:
    int storedValue;
};
#endif
