//
// Created by Darya on 23.12.2021.
//

#ifndef SUPER_POOPER_WORKFLOW_CONREADER_H
#define SUPER_POOPER_WORKFLOW_CONREADER_H
#include <string>
#include <vector>
#include <fstream>
#include <list>
#include <map>
using namespace std;

class ConfigReader{
private:
    string workers, args;
    int id{};
    list<pair<string, string>> priority;
    map<int, pair<string, string>> jobs;
    ifstream file;

    void separate_ids(const string& str);


    void separate(const string& str);


    void read_desc();


    void read_csed();
public:
    explicit ConfigReader(const string& filename);


    list<pair<string, string>> read_config();

};

#endif //SUPER_POOPER_WORKFLOW_CONREADER_H
