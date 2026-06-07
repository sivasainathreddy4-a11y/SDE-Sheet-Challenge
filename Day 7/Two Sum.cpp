#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> track;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            track[nums[i]]=i;
            if(track.find(target-(nums[i+1]))!=track.end())
            return{i+1,track[target-(nums[i+1])]};
        }
        return {-1,-1};

    }
int main() {
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> res=twoSum(nums,target);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}