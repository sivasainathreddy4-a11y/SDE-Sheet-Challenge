#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&nums1,vector<int>&nums2,int m,int n){
    int i,j=0;
        for( i=m;i<m+n;i++){
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
}
int main() {
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    int m=3,n=3;
    merge(nums1,nums2,m,n);
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }
    
    return 0;
}