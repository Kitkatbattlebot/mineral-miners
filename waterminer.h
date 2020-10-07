//
// Created by Tanisha Payne on 5/10/18.
//

#ifndef MINERALMINERS_WATERMINER_H
#define MINERALMINERS_WATERMINER_H

#include "Resource.h"

class waterminer: public Resource {

public:

    waterminer(const std::string &name, int index);

    void detect() ;

    void collect() ;

};


#endif //MINERALMINERS_WATERMINER_H
