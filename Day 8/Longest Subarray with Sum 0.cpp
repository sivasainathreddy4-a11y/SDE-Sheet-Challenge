#include <bits/stdc++.h>
using namespace std;
int maxLength(vector<int>& arr) {
        long long sum=0;
        int maxlen=0;
        map<long long,int>prefix;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==0)
            maxlen=max(maxlen,i+1);
            int rem =sum-0;
            if(prefix.find(rem)!=prefix.end()){
                int len =i-prefix[rem];
                maxlen=max(len,maxlen);
            }
            if(prefix.find(sum)==prefix.end()){
                prefix[sum]=i;
            }
        }
        return maxlen;
    }
int main() {
   vector<int>arr={-42 ,12, 20, 15, 31, -4, 0, 15};
   cout<<maxLength(arr);

    return 0;
}