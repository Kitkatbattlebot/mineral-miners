//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#ifndef PROJ2_SODCLOR_H
#define PROJ2_SODCLOR_H
#include "Resource.h"

class sodClor : public Resource {

public:
    sodClor(const std::string &name, int index);
    void detect();

protected:
    std::string name;
    int index;
};

#endif //PROJ2_SODCLOR_H
