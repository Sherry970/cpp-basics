#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<8){
        cout<<"Person is a child.";
    }
    else if(age>=8 and age<=20){
        cout<<"Person is a teenager.";
    }
    else if(age>21 and age<=60){
        cout<<"Person is an adult";
    }
    else{
        cout<<"Person is old";
    }
    return 0;
}