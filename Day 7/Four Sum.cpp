#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
           if(i>0&&nums[i]==nums[i-1]) continue;
           for(int j=i+1;j<n;j++){
               if(j!=(i+1)&&nums[j]==nums[j-1]) continue;
               int k=j+1,l=n-1;
               while(k<l){
               long long sum =(long long)nums[i]+nums[j];
               sum+=nums[k];
               sum+=nums[l];
               if(target==sum){
                   ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                   k++; l--;
                   while(k<l&& nums[k]==nums[k-1]) k++;
                   while(k<l&&nums[l]==nums[l+1]) l--;
               }
               else if(target<sum){
                   l--;
               }
               else
               k++;
               }
           }
       }
       return ans;

    }
int main() {
    vector<int> nums={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> res=fourSum(nums,target);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
        cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}