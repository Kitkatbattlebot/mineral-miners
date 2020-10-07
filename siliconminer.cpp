//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#include <iostream>
#include "siliconminer.h"

siliconminer::siliconminer(const std::string &name, int index) : Resource(name, index) {}

void siliconminer::detect() {
    std::cout << "== Command: detect \n"
            "Sample grinder activated.\n"
            "10 um seive applied.\n"
            "Infrared laser activated.\n"
            "Spectrophotometer activated and results analyzed.\n"
            "Silica vein located."<< std::endl;

}

