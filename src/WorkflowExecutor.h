//
// Created by Darya on 23.12.2021.
//

#ifndef SUPER_POOPER_WORKFLOW_WORKFLOWEXECUTOR_H
#define SUPER_POOPER_WORKFLOW_WORKFLOWEXECUTOR_H
#include "blocks/Factory.h"
#include "ConReader.h"

class WorkflowExecutor{
private:
    IWorker* worker{};
    list<pair<string, string>> priority;
    string filename;
    vector<string> text;
    Factory fact;

    void parse_config();
public:
    explicit WorkflowExecutor(const string& file);

    void execute();

};


#endif //SUPER_POOPER_WORKFLOW_WORKFLOWEXECUTOR_H
