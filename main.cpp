#include <iostream>
#include "src/WorkflowExecutor.h"

using namespace std;


int main() {
    WorkflowExecutor w1("configuration_1.txt");
    w1.execute();
    return 0;
}