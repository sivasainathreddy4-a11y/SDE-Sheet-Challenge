#include <bits/stdc++.h>
using namespace std;
 double myPow(double x, int n) {
     double ans=1.00000;
     long long p=n;
     if(p<0) p=-1*p;
     while(p){
         if(p%2==0){
             x=x*x;
             p=p/2;
         }
         else
         {
             ans=ans*x;
             p=p-1;
         }
     }
     if(n<0) ans=(double)1.0/(double)ans;
     return ans;
     }
int main() {
    double x=2.0000;
    int n=-3;
    cout<<myPow(x,n);

    return 0;
}