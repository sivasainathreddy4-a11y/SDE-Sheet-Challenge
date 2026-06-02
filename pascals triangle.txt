
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>  generate(int numRows){
    vector<vector<int>> res;
    res.push_back({1});
if(numRows==1){
    return res;
}
res.push_back({1,1});
if(numRows==2){
    return res;
}
 for(int i=2;i<numRows;i++){
        vector<int> row;

        row.push_back(1);

        for(int j=1;j<i;j++){
            row.push_back(res[i-1][j-1] + res[i-1][j]);
        }
        row.push_back(1);
        res.push_back(row);
    }
return res;
}
int main() {
int numRows=5;
vector<vector<int>> ans=generate(numRows);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}