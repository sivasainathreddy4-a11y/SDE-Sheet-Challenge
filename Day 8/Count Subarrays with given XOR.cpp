#include <bits/stdc++.h>
using namespace std;
long subarrayXor(vector<int> &arr, int k) {
      
        int cnt=0;
        int xr=0;
        map<int,int>mpp;
        mpp[xr]++;
        for(int i=0;i<arr.size();i++){
             xr^=arr[i];
             int x=xr^k;
             cnt+=mpp[x];
             mpp[xr]++;
        }
        return cnt;
int main() {
   vector<int>arr={4, 2, 2, 6, 4};
   int k=6;
   cout<<subarrayXor(arr,k);
   

    return 0;
}