#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=0,j=1,cnt=1;
       int maxcnt=1;
       
        while(j<arr.size()){
            
            while(j < arr.size() && arr[i] == arr[j]) {
                 j++;
}
            if(j>=arr.size())
            break;
            
            if(arr[j]==arr[i]+1){
                cnt++;
                i=j;
                j=j+1;
              
            }
            else{
                i = j;
                j = j + 1;
               cnt = 1;
            }
            maxcnt=max(cnt,maxcnt);
        }
        return maxcnt;
        
    }
int main() {
    vector<int> arr={1, 9 ,3, 10, 4, 20, 2};
    cout<<longestConsecutive(arr);

    return 0;
}