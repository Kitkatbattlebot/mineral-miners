//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#ifndef MINERALMINERS_SILCONMINER_H
#define MINERALMINERS_SILCONMINER_H

#include "Resource.h"

class siliconminer: public Resource {

public:
    siliconminer(const std::string &name, int index);

    void detect();

};
#endif //MINERALMINERS_SILCONMINER_H
