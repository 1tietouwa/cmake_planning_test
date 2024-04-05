#include<iostream>
#include "process.h"
using std::cout, std::endl;

void Process::planProcess()
{
    cout << "this is planing process" << endl;
    my_map.mapInfo();
    cout << "planing succcess!" << endl;
}