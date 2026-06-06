#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement2(vector<int>& nums) {
        int n=nums.size();
       int cnt1=0,cnt2=0,ele1=INT_MIN,ele2=INT_MIN;
       for(int i=0;i<n;i++){
        if(cnt1==0&&nums[i]!=ele2){
            cnt1++;
            ele1=nums[i];
        }
        else if(cnt2==0&&nums[i]!=ele1){
            cnt2++;
            ele2=nums[i];
        }
        else if(ele1==nums[i]){
            cnt1++;
        }
        else if(ele2==nums[i])
        cnt2++;
        else{
        cnt1--;
        cnt2--;
        }
       }
       vector<int>res;
       cnt1=0,cnt2=0;
       for(int i=0;i<n;i++){
        if(ele1==nums[i]) cnt1++;
        if(ele2==nums[i]) cnt2++;
       }
       int mini=(int)(n/3)+1;
       if(cnt1>=mini)
       res.push_back(ele1);
       if(cnt2>=mini)
       res.push_back(ele2);
        return res;
    }
int main() {
    vector<int> nums={3,2,3};
    vector<int> ans=majorityElement2(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}