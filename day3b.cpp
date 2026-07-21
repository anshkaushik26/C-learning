#include <iostream>
using namespace std;
 int main()
 {
   //***********Refrence variables***********
   // Arahan-->Arahan scottish-->Gora 
    float x= 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
   
   //***********Type Casting***********
   int a =45;
   float b= 45.67;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of b is "<<(int)b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
   // cout<<"the value of a+b is "<<int(b)+a<<endl;

    

   return 0;
}