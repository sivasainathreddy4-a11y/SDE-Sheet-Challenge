#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> prices={6,1,3,2,4,7};
    int n=prices.size();
    int maxprofit=0;
    int i=0,j=1;
    while(j<n){
        if(prices[j]-prices[i]>maxprofit){
            maxprofit=prices[j]-prices[i];
        }
        if(prices[j]<prices[i]){
            i=j;
        }
        j++;
    }
cout<<maxprofit;
    return 0;
}