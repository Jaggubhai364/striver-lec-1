#include<bits/stdc++.h>
using namespace std;
void priority(){
  int a[4]={5,3,8,2}; 
    sort(a,a+4, greater<int>()); 

  for(int i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
       // 
} 
int main(){
    priority();
}