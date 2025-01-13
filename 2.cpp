#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x<=25){
        cout<<"fail";
    }else if (x>25 && x<50){
        cout<<"moj";

    }else if (x>50 && x<100){
        cout<<"moj";
        
    }else{
        cout<<"kisis";
    }
}