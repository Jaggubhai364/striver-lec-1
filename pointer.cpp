#include<iostream>
using namespace std;
int main(){
    int a =10;
    int* ptr =&a;
    cout<<&a<<endl;
    cout<<ptr;  
    int** parentptr= &ptr;
     cout<<parentptr<<endl;
     cout<<*(&a);
     cout<<*ptr;
}