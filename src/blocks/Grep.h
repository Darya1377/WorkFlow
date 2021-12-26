//
// Created by Darya on 23.12.2021.
//

#ifndef SUPER_POOPER_WORKFLOW_GREP_H
#define SUPER_POOPER_WORKFLOW_GREP_H
#include "IWorker.h"
class Grep : public IWorker{
private:

    string word;
    void parse_args() override;
public:
    explicit Grep(const string& arguments);

    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};

#endif //SUPER_POOPER_WORKFLOW_GREP_H
