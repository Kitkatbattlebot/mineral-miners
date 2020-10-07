//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#include <iostream>
#include "waterminer.h"

waterminer::waterminer(const std::string &name, int index) : Resource(name, index) { }

void waterminer::detect() {
    std::cout << "== Command: detect \n "
                 "Initiating heat blast.\n"
                 "Directional humidity detector activated.\n"
                 "Ice located." << std::endl;
}

void waterminer::collect() {
    std::cout << "== Command: collect \n"
                 "Water vacuums and hoses deployed.\n"
                 "Heater turned on. Waiting for the ice to melt.\n"
                 "Liquid water moved to collection chamber.\n"
                 "Surface pump activated." << std::endl;
}
