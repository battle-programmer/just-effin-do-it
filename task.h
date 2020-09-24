#ifndef TASK_H
#define TASK_H
#include <array>

using namespace std;

class task{
    string name;
    string desc;
    array <int, 5> deadline;

    public:
        task(string, string, array <int, 5>);
};

#endif // TASK_H
