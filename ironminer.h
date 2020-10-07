//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#ifndef MINERALMINERS_IRONMINER_H
#define MINERALMINERS_IRONMINER_H

#include "Resource.h"

class ironminer: public Resource {

public:
    ironminer(const std::string &name, int index);
    void detect() ;

};
#endif //MINERALMINERS_IRONMINER_H
