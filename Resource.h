//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#ifndef MINERALMINERS_RESOURCE_H
#define MINERALMINERS_RESOURCE_H

#include <string>

class Resource {

public:

    Resource(std::string name, int index);

    ~Resource();

    void start();

    void end();

    virtual void detect()=0;

    virtual void collect();

protected:
    std::string name;
    int index;
};

#endif //MINERALMINERS_RESOURCE_H
