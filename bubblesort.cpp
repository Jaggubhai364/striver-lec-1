#include<bits/stdc++.h>
using namespace std;
    // void swap(vector<int> &v,int i,int j){
    //     int temp =v[j];
    //     v[j]=v[i];
    //     v[i]=temp;
    // }
  void merge(vector<int>&v,int low,int mid,int high){
            int left=low;
            int right=mid+1;
            vector<int>temp;
            while(left<=mid && right<=high){
                if(v[left]<v[right]){
                    temp.push_back(v[left]);
                    left++;
                }else{
                    temp.push_back(v[right]);
                    right++;
                }
            }
            while(left<=mid){
                temp.push_back(v[left]);
                left++;
            }
             while(right<=high){
                temp.push_back(v[right]);
                right++;
            }
            for(int i=low;i<=high;i++){
                v[i]=temp[i-low];
            }
         
    }

   void mergesort(vector<int>&v,int low,int high){
        if(low>=high){
            return;
        }
            int mid = (low+high)/2;
            mergesort(v,low,mid);
            mergesort(v,mid+1,high);
            merge(v,low,mid,high);
          
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
    // for(int i=0;i<v.size();i++){
    //     int j=i;
    //     while(j>0 && v[j-1]>v[j]){
    //         swap(v,j,j-1);
    //         j--;
    //     }
    // }
    int low=0;
    int high =v.size()-1;
    mergesort(v,low,high);
    for(auto it:v){
     
        cout<<it<<" ";
    }
}