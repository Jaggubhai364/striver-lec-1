#include<iostream>
using namespace std;
int main(){
    int age ;
    cin>>age;
    if(age >0 && age <=18){
        cout<<"eligible for vote";
        
    }else if (age >18 && age <=70)
    {
        cout<<"job karo bhai";
    }else if (age >70 && age <=100)
    {
        cout<<"retirment mubark bhai";
    }
    
    
}
