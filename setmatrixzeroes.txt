#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>&matrix){
    vector<pair<int,int>> findzeroes;
    int start=0;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
               findzeroes.push_back({i,j});
            }
        }
    }
    for(int i=0;i<findzeroes.size();i++){
        int row=findzeroes[i].first;
        int col=findzeroes[i].second;
        for(int m=0;m <matrix[row].size();m++){
            matrix[row][m]=0;
        }
        for(int n=0;n<matrix.size();n++){
            matrix[n][col]=0;
        }
    }
}
int main() {
    vector<vector<int>> matrix={{1,1,1,1},{1,0,1,1},{1,1,1,1}};
    setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}