#include<iostream>
using namespace std;
  
  int main(){
  //party permission
  int age;
  cout<<"Enter your Age"<<endl;
  cin>>age;


// SELECTION CONTROL STRUCTURE IF ELSE statement
//   if(age<18){
//   cout<<"you are not allowed in party"<<endl;
//   }

//   else if(age==18){
//    cout<<"you are allowed but do not drink"<<endl;

//   }

//  else{
//   cout<<"you are allowed to come to the party"<<endl;


//   }

  switch (age)
  {
  
  case 18:
    cout<<"you are allowed but do not drink"<<endl;
    break;
  case 19:
    cout<<"you are allowed to come to the party"<<endl;
    break;
  case 2: 
    cout<<"you are not allowed in party"<<endl;
    break;
  default:
    cout<<"no special case"<<endl;
  
  }

  return 0;
  
  }