#include <array>

using namespace std;

class task{
    string name;
    string desc;
    array <int, 5> deadline;

    task(string n, string d, array <int, 5> t){
        name = n;
        desc = d;
        deadline = t;
    }
};
