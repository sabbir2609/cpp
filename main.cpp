#include <iostream>

void nameFunc(std::string fname) {
    std::cout << fname << " Hello! \n";
}

void addFunc(std::int32_t a, std::int32_t b) {
    std::int32_t c;
    c = a+b;
    std::cout << c ;
}

int main() {
    nameFunc("Sabbir");
    addFunc(2,3);
    return 0;
}