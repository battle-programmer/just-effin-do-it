#ifndef TASKLIST_H
#define TASKLIST_H
#include <list>
#include "task.h"

using namespace std;

class tasklist{

    list<task> tlist;

    public:
        tasklist(string fn = "list");
};

#endif // TASKLIST_H
