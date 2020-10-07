//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#include <iostream>
#include "magPot.h"
magPot::magPot(const std::string &name, int index) : Resource(name, index ) {
    this -> name;
    this -> index;
}

void magPot::detect() {
    std::cout << "== Command: detect\n"
            "Releasing oxygen...\n"
            "Thermal detector activated.\n"
            "Flammable reaction detected."<<std::endl;

}
