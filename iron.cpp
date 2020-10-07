//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#include <iostream>
#include "ironminer.h"

ironminer::ironminer(const std::string &name, int index) : Resource(name, index) {}

void ironminer::detect() {
    std::cout << "== Command: detect\n"
            "Magnetometer activated.\n"
            "Searching for magnetic field deviations.\n"
            "Iron deposits located."<< std::endl;

}

