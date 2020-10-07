//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#ifndef MINERALMINERS_MINERMGR_H
#define MINERALMINERS_MINERMGR_H

#include <iostream>
#include <vector>
#include "Resource.h"

using namespace std;

class minermgr {
public:
    minermgr();
    
    ~minermgr();
    
    void addMiner(int number, std::string);

    void runMiners();

private:
    std::vector<Resource*> resources;

};


#endif //MINERALMINERS_MINERMGR_H
