#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge( vector<vector<int>> &intervals){
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    for(int i=0;i<intervals.size();i++){
        if(ans.empty()||intervals[i][0]>ans.back()[1]){
            ans.push_back(intervals[i]);
        }
        else{
            ans.back()[1]=max(intervals[i][1],ans.back()[1]);
        }
    }
    return ans;
}
int main() {
 vector<vector<int>> intervals ={{1,3},{2,6},{8,10},{10,11},{15,18}};
vector<vector<int>> res=merge(intervals);
for(int i=0;i<res.size();i++){
    for(int j=0;j<res[0].size();j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}