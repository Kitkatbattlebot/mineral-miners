//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#ifndef PROJ2_MAGPOT_H
#define PROJ2_MAGPOT_H
#include "Resource.h"

class magPot : public Resource {

public:
    magPot(const std::string &name, int index);

    void detect();

protected:
    std::string name;
    int index;
};
#endif //PROJ2_MAGPOT_H
