#include <bits/stdc++.h>
using namespace std;
 int majorityElement(vector<int>& nums) {
        int ele,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                ele=nums[i];
            }
            if(nums[i]==ele){
                cnt++;
            }
            if(nums[i]!=ele){
                cnt--;
            }
        }
        return ele;
    }
int main() {
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<majorityElement(nums);

    return 0;
}