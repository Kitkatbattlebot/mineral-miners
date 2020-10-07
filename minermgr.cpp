//
// Author: Tanisha Payne
// CRN: 20690
// Program 2: Miners
//

#include "minermgr.h"
#include "waterminer.h"
#include "ironminer.h"
#include "sodiumminer.h"
#include "chloride.h"
#include "potasiumminer.h"
#include "magnesiumminer.h"
#include "siliconminer.h"

minermgr::minermgr() {
    cout << "== Boston Station Miner Manager ==\n"
            "\n"
            "Authenticating with Van Halen facilities...\n"
            "Connected and registered.\n"
            "=======" << endl;
}

minermgr::~minermgr() {}

void minermgr::addMiner(int number, std::string resource) {


    if (resource.compare("water") == 0) {
        resources.push_back(new waterminer("water", number));
    }

    if (resource.compare("iron") == 0) {
        resources.push_back(new ironminer("iron", number));
    }
    if (resource.compare("sodium") == 0) {
        resources.push_back(new sodiumminer("sodium", number));
    }

    if (resource.compare("chloride") == 0) {
        resources.push_back(new chlorideminer("chloride", number));
    }

    if (resource.compare("potassium") == 0) {
        resources.push_back(new potasiumminer("potassium", number));
    }

    if (resource.compare("magnesium") == 0) {
        resources.push_back(new magnesiumminer("magnesium", number));
    }

    if (resource.compare("silicon") == 0) {
        resources.push_back(new siliconminer("silicon", number));
    }

}

void minermgr::runMiners() {
    cout << "Run Miners" << endl;
    for (int i = 0; i < resources.size(); ++i) {
        resources[i]->start();
        resources.at(i)->detect();
        resources.at(i)->collect();
        resources.at(i)->end();
    }
}