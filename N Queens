vector<vector<int>> ans;
bool check(vector<vector<int>> &ch, int row, int col, int n) {
   for(int i=0; i<row; i++) if(ch[i][col]) return false;
   int i=row-1, j=col-1;
   while(i>=0&&j>=0) {
       if(ch[i][j]) return false;
       i--; j--;
   }
   i=row-1; j=col+1;
   while(i>=0&&j<n) {
       if(ch[i][j]) return false;
       i--; j++;
   }
   return true;
}
void bt(vector<vector<int>> &ch, int row, int n, int q) {
   if(row==n&&q==n) {
       vector<int> ar;
       for(auto a : ch) for(int b : a) ar.push_back(b);
       ans.push_back(ar);
       return;
   }
   for(int col=0; col<n; col++) {
       if(check(ch, row, col, n)) {
           ch[row][col]=1;
           bt(ch, row+1, n, q+1);
           ch[row][col]=0;
       }
   }
}
vector<vector<int>> solveNQueens(int n) {
vector<vector<int>> ch(n, vector<int> (n, 0));
   bt(ch, 0, n, 0);
   return ans;
}
