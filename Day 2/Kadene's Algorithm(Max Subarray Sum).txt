#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int n=nums.size();
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+nums[i];
        maxsum=max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxsum;
    

    return 0;
}