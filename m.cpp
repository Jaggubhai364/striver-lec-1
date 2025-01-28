#include<bits/stdc++.h>
using namespace std;
int x=1;
 vector<long long> v;
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here 0
        if(n == 0){
            return 1;
        }
        x=n * factorialNumbers(n-1);
        if(x>n){
            return v;
        }
        v.push_back(x);
        return x;
        
    }

    int main(){
        factorialNumbers(3);
    }