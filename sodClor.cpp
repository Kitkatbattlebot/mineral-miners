//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#include "sodClor.h"
#include <iostream>

sodClor::sodClor(const std::string &name, int index) : Resource(name, index ) {
    this -> name;
    this -> index;
}

void sodClor::detect() {
    std::cout << "== Command: detect\n"
            "Steam blasting...\n"
            "Salinity detector activated.\n"
            "Concentration vector of NaCl detected."<< std::endl;
}