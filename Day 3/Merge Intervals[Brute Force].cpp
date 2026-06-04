#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge( vector<vector<int>> &intervals){
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    for(int i=0;i<intervals.size();i++){
        int start=intervals[i][0];
        int end=intervals[i][1];
        if(!ans.empty()&&end<=ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<intervals.size();j++){
            if(intervals[j][0]<=end){
                end=max(end,intervals[j][1]);
            }
            else
            break;
        }
        ans.push_back({start,end});
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