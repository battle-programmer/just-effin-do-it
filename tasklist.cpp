#include <iostream>
#include <fstream>
#include <list>
#include <array>
#include "task.h"

using namespace std;

class tasklist {

    list<task> tlist;

    tasklist(string fn){
        tlist = {};
        string n, d;
        array <int, 5> a;
        ifstream fin(fn);
        if (!fin.is_open()) return;
        while (getline(fin, n)){
            fin >> d >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
            //task tt(n, d, a);
            tlist.push_back(task(n, d, a));
        }
    }

    /*void add(){
        string n, d;
        int y, m, dd, hh, mm;
        cout << "enter task name\n";    cin >> n;
        cout << "enter task description\n";    cin >> d;
        cout << "enter date like: YYYY MM DD HH MM";
        cin >> y >> m >> dd >> hh >> mm;
        task tt(n, d, {y, m, dd, hh, mm})
        tasklist.push_back(tt);
        return;
    }*/

    /*
    void complete(){
        int last = tasklist.size()-1;
        int t = tasklist[last], n;
        cin >> n;
        for (int i = taskgcc
        list.size()-2; i >= 0; i--){
            if (i >= n-1) {
                swap(tasklist[i], t);
            }
        }
        tasklist.resize(tasklist.size() - 1);
        return;
    }

    void printlist(){
        if (tasklist.size() == 0) {
            cout << empty;
        } else {
            for (int i = 0; i < tasklist.size; i++){
                string s = tasklist[i].name; s.resize(nw); s += '|';
                s += tasklist[i].desc; s.resize(nw+dw+1); s += '|';
                int a[] = tasklist[i].deadline;
                cout << s << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << ' ' << a[4] <<  '\n';
            }
        }
    }*/

};
