class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int ans=0;
        vector<int>colcount(row,0);
        vector<int>rowcount(col,0);
        for(int i=0;i<row;i++){

            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    rowcount[j]++;
                    colcount[i]++;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1 && rowcount[j]==1 && colcount[i]==1){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};