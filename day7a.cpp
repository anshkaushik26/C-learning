#include <iostream>
using namespace std;
int main() {
   

    int marks [4] = {6,7,8,9};

   
   //cout<<marks[0]<<endl;
   //cout<<marks[1]<<endl;
   //cout<<marks[2]<<endl;
   //cout<<marks[3]<<endl;
   //cout<<marks[4]<<endl;
   

  // int engmarks [4];
   // engmarks[0] = 36;
   // engmarks[1] = 99;
   // engmarks[2] = 88;
   // engmarks[3] = 99;

   //cout<<engmarks[0]<<endl;
   //cout<<engmarks[1]<<endl;
   //cout<<engmarks[2]<<endl;
   //cout<<engmarks[3]<<endl;

   //for (int i=0;i<4;i++){
   //   cout<<"marks of students"<<i<<"is"<<marks[i]<<endl;

   //}

   //int i=0;
  // while (i<4){
   // i++;
   //}

  //int i=0;
  // do{
   // cout<<"the marks of student"<<i<<"is"<<marks[i]<<endl;
   // i++;
  //}while(i<4);

   

   int *p= marks;
  cout<<*p<<endl;
  
  cout<<*(p+1)<<endl;
   

   return 0;
}