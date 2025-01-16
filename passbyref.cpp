#include<iostream>
using namespace std;
// only a copy of num is passed not the num adress where actually it is stored so in output it will output only 10 in main
void dosome(int num){
    cout << num <<endl;
    num +=5;
        cout << num <<endl;

}
int main(){
    int num=10;
    dosome(num);
    cout<<num;
}
// void dosome(int &num){
//     cout << num <<endl;
//     num +=5;
    
// }
// int main(){
//     int num=10;
//     dosome(num);
//     cout<<num;
// }