#include <iostream>
#include "first.h"
using namespace std;

int main(int argc, char **argv)
{
    cout << "Hello world" << endl;

    cout << "cl1 line/n";
    cout<<"second line\n";
    cout<<"first line\n";
    cout<<"third line\n";

    A obj;
    cout<<obj.getCount()<<endl;
}
