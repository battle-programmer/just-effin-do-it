#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "tasklist.h"

using namespace std;

const string def = "Type 'help' to see the list of availible actions\n",
            tip = "type \"exit\" to exit\n",
            tlempty = "Your tasklist is empty! Looks like it's a high time to add some tasks using 'add' command.\n";
const int nw = 20, dw = 50;

tasklist tlist();

void response(string s){
    if (s == "help") {
        cout << tip;
        return;
    } else if (s == "exit"){ //timely
        exit(0);
    }/*else if (s == "add"){
        tlist.add();
        return;
    } else if (s == "complete"){
        tlist.complete();
        return;
    }*/ cout << def;
}

void read(){
    string s;
    cin >> s;
    response(s);
    return;
}

int main() {
    while(1){
        read();
    }
    return 0;
}
