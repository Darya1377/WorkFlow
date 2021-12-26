//
// Created by Darya on 23.12.2021.
//

#ifndef SUPER_POOPER_WORKFLOW_WRITE_H
#define SUPER_POOPER_WORKFLOW_WRITE_H
#include "IWorker.h"

class WriteFile : public IWorker{
private:
    vector<string> get_result() override;

    void parse_args() override;
public:
    ofstream file;
    explicit WriteFile(const string& arguments);




    void do_work(vector<string> txt) override;


};

#endif //SUPER_POOPER_WORKFLOW_WRITE_H
