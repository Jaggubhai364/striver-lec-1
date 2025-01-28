#include<iostream>
using namespace std;
// void prnt(int t){
//     for(int i=1;i<=t;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// void prnt1(int t){
//     for(int i=1;i<=t;i++){
//         for(int j=5;j>=i;j--){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// void prnt3(int n){
//       for(int i=1;i<=4;i++){
//         //right angle triangle
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         //for space
//       for(int j=1;j<=n-i;j++){
//         cout<<" "<<" ";
//       }
//       //for space
//       for(int j=1;j<=n-i;j++){
//                 cout<<" "<<" ";
//       }
//       for(int j=i;j>=1;j--){
//         cout<<j<<" " ;
//       }
//       cout<<endl;

//       }
     
// }
void prnt5(int n){
  for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        int top=i;
        int btm = (2*n-2)-i;
        int lft=j;
        int rht= (2*n-2)-j;
        cout<<(n-min(min(top,btm),min(lft,rht)))<<" ";
    }
    cout<< endl;
  }
}
int main(){
    int t;
    cin>>t;
    prnt5(t);
}