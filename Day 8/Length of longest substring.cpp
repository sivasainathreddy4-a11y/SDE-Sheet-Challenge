#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
    int len=0,maxlen=0;
    int n=s.length();
    unordered_map<int,int>mp;
    while(r<n){
        mp[s[r]]++;
        len=r-l+1;
        if(mp.size()==len){
            maxlen=max(maxlen,len);
        }
        while(mp.size()!=len){
            mp[s[l]]--;
            if(mp[s[l]]==0)
            mp.erase(s[l]);
            l++;
            len=r-l+1;
        }
        r++;
    }
    return maxlen;
    }
int main() {
   string s="abcabcbb";
   
   cout<<lengthOfLongestSubstring(s);
   

    return 0;
}