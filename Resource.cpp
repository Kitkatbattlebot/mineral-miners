//
// Author: Tanisha Payne
// CRN: 20690
// Parent class of all resources
//

#include <iostream>
#include "Resource.h"

Resource::Resource(std::string name, int index){
    this->name = name;
    this->index= index;
}

Resource::~Resource(){}

void Resource::start() {
    std::cout << "======= \n== Command: start\n"
            "Miner # "<<index<<" ("<< name<< ") is starting." << std::endl;
}

void Resource::end() {
    std::cout << "== Command: stop\n"
            "Miner # "<<index<<" ("<< name << ") is going to standby" << std::endl;
}

void Resource::collect(){
    std::cout <<"== Command: collect\n"
            "Impact hammer positioned.\n"
            "Impact hammer activated for 15 seconds.\n"
            "Debris scoop activated.\n"
            "Debris elevator activated.\n"
            "Debris collection complete." <<std::endl;
}