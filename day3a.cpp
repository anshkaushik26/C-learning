#include <iostream>
using namespace std;

 int main(){
 //operaters in c++
    int a=10,b=5;
    cout<<"sum is +\n"<<a+b;
    cout<<"subtraction is\n "<<a-b;
    cout<<"multiply is *\n "<<a*b;
    cout<<"division is /\n"<<a/b;
    cout<<"remainder is given by /\n"<<a%b;
    cout<<"the value of a++\n"<<a++;
    cout<<"the value of a--\n"<<a--;
    cout<<"the value of --a\n"<<--a;
 

//comprison operators
   cout<<"the value of a==b"<<(a==b)<<endl;
   cout<<"the value of a!=b"<<(a!=b)<<endl;
   cout<<"the value of a>=b"<<(a>=b)<<endl;
   cout<<"the value of a<=b"<<(a<=b)<<endl;
   cout<<"the value of a>b"<<(a>b)<<endl;
   cout<<"the value of a<b"<<(a<b)<<endl;

//logical operators

  cout<<"the value of logical operator (a==b) && (a<b)"<<((a==b) && (a<b))<<endl;
  cout<<"the value of logical operator (a==b) || (a<b)"<<((a==b) || (a<b))<<endl;
  cout<<"the value of logical operator !(a==b)"<<(!(a==b))<<endl;

   



    


return 0;
}