#include <iostream>
using namespace std;
int main() {

// what are pointers in C++? -- pointers are the variables which store the address of other variables in it.
    int a = 3;
    int * b= &a;

    cout<<b<<endl;
// * is dereference operator which gives the value of the address stored in the pointer variable.
// & is actual address of the variable.


//double pinters 
    cout<<"the address of b is"<<*b<<endl;

    int **c=&b;


return 0;
}