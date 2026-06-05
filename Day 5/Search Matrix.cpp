#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size(),col=matrix[0].size();
    bool res=false;
        int l1=0,l2=0,h1=row-1,h2=col-1;
        while(l1<=h1&&l2<=h2){
            int m1=(l1+h1)/2,m2=(l2+h2)/2;
            if(matrix[m1][m2]==target){
                res=true;
                break;
            }
            else if(matrix[m1][m2]>target){
                if(m2==0){
                    h2=col-1;
                    h1--;
                }
                else{
                h2--;
                
                }
            }
            else{
                if(m2==col-1)
                {
                    l2=0;
                    l1++;
                }
                else{
                    
                    l2++;
                }
                
            }
        }
        return res;
    }
int main() {
  vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int target=3;
  cout<<searchMatrix(matrix,target);
  
  
    return 0;
}