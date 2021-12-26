//
// Created by Darya on 23.12.2021.
//

#ifndef SUPER_POOPER_WORKFLOW_SORT_H
#define SUPER_POOPER_WORKFLOW_SORT_H
#include "IWorker.h"
class Sort : public IWorker{
private:
    list<string> words;

    static bool size_comp(const string& first, const string& second);


    void get_words(const string& str);


    void parse_args() override;
public:
    explicit Sort(const string& args);
    void do_work(vector<string> txt) override;


    vector<string> get_result() override;
};

#endif //SUPER_POOPER_WORKFLOW_SORT_H
