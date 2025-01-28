 #include<iostream>
 using namespace std;
 int multi=0;
  
 int sumOfSeries(int n) {

       if(n>=1){
           multi=multi+(n*n*n);
           sumOfSeries(n-1);
       }
        return multi;
    }

    int  main(){
        int x=0;
        x = sumOfSeries(3);
        
        cout<<x;
    }