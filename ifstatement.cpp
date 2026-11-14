/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int a;
    int b;
    cout<<"enter the first value";
    cin>>a;
    cout<<"enter the second value";
    cin>>b;
    if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is not less than b" << endl;
    }
    return 0;
}