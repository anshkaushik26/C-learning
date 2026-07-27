#include<iostream>
using namespace std;

struct employees{

     int eId;
     char favchar;
     int salary;
};
 enum Meal{ breakfast,lunch, dinner};

union money{

    int rice;
    char car;
    float pounds;
};
     
 int main(){

  //struct employees ansh;

 // ansh.eId = 9999;
 // ansh.favchar = 'a';
 // ansh.salary = 12000;

// cout<<"the employee id is "<<ansh.eId<<endl;
// cout<<"the employee favchar is "<<ansh.favchar<<endl;   
 //cout<<"the employee salary is "<<ansh.salary<<endl;


// union money nakul;
//nakul.rice=5000;
//nakul.pounds =90;
//cout<<"the value of nakul's rice is "<<nakul.rice<<endl;
//cout<<"the value of nakul's weight is "<<nakul.pounds<<endl;

enum Meal{ breakfast, lunch, dinner };
Meal m1 = lunch;
cout<<m1<<endl;




 return 0;

}
