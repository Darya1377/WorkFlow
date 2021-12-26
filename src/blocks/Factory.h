//
// Created by Darya on 23.12.2021.
//

#ifndef SUPER_POOPER_WORKFLOW_FACTORY_H
#define SUPER_POOPER_WORKFLOW_FACTORY_H
#include "IWorker.h"


class Factory {
public:
    IWorker* createWorker(const string& Worker_name, const string& arguments);
};
#endif //SUPER_POOPER_WORKFLOW_FACTORY_H
