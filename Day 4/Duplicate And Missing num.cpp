#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicateAndMissing(vector<int>& nums) {
    int n=nums.size();
      long long Sn=n*(n+1)/2;
      long long S2n=(1LL*n*(n+1)*(2*n+1))/6;
      long long S=0,S2=0;
      for(int i=0;i<n;i++){
          S=S+nums[i];
          S2=S2+(long long)nums[i]*(long long)nums[i];
      }
      long long res1=S-Sn;
      long long res2=S2-S2n;
      res2=res2/res1;
      long long X=(res1+res2)/2;
      long long Y=X-res1;
      return {(int)X,(int)Y};
    }
int main() {
   vector<int>nums={1,2,2,4};
   vector<int> ans =findDuplicateAndMissing(nums);
   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }
    return 0;
}