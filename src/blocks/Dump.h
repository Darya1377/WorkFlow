//
// Created by Darya on 23.12.2021.
//

#ifndef SUPER_POOPER_WORKFLOW_DUMP_H
#define SUPER_POOPER_WORKFLOW_DUMP_H
#include "IWorker.h"

class Dump : public IWorker{
private:
    ofstream file;

    void parse_args() override;
public:
    explicit Dump(const string& arguments);





    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};



#endif //SUPER_POOPER_WORKFLOW_DUMP_H
