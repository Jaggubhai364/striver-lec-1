#include<bits/stdc++.h>
using namespace std;
    void swap(vector<int> &v,int i,int j){
        int temp =v[j];
        v[j]=v[i];
        v[i]=temp;
    }


int main(){
    vector<int>v={9,8,7,6,5,4,3,2,1,2,5,2};
    // for(int i= v.size()-1;i>=1;i--){
    //     for(int j=0;j<=i;j++){
    //         if(v[j]>v[j+1]){
    //             swap(v,i,j);
    //         }
    //     }
    // }

    //insertion sort
    for(int i=0;i<v.size();i++){
        int j=i;
        while(j>0 && v[j-1]>v[j]){
            swap(v,j,j-1);
            j--;
        }
    }
    for(auto it:v){
     
        cout<<it<<" ";
    }
}