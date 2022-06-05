#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans;
    ans.push_back({1});
    
    for(int i=0;i<n-1;i++){
        vector<long long int> subArr;
        subArr.push_back(1);
        for(int j=0;j<i;j++){
            long long int sum=ans[i][j]+ans[i][j+1];
            subArr.push_back(sum);
        }
        
        subArr.push_back(1);
        ans.push_back(subArr);
    }
    return ans;
}
