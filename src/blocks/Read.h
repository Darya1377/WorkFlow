//
// Created by Darya on 23.12.2021.
//

#ifndef SUPER_POOPER_WORKFLOW_READ_H
#define SUPER_POOPER_WORKFLOW_READ_H
#include "IWorker.h"

class ReadFile : public IWorker{
private:
    ifstream file;
    void parse_args() override;
public:
    explicit ReadFile(const string& arguments);


    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};

#endif //SUPER_POOPER_WORKFLOW_READ_H
