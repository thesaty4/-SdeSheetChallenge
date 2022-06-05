#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
        int n=arr.size();
       int ans1=-1,ans2=-1,count1=0,count2=0;
       for(int i=0;i<arr.size();i++){
           if(arr[i]==ans1)
               count1++;
           else if(arr[i]==ans2) 
               count2++;
           else if(count1==0) {
               ans1=arr[i];
               count1=1;
           } else if(count2==0) {
               ans2=arr[i];
               count2=1;
           } else {
               count1--;
               count2--;
           }
       }

      
       vector<int>ans;
       count1=0,count2=0;
       for(int i=0;i<arr.size();i++) {
           if(arr[i]==ans1)
               count1++;

           else if(arr[i]==ans2)
               count2++;

       }

       if(count1>n/3)
           ans.push_back(ans1);
       if(count2>n/3)
           ans.push_back(ans2);
    
       return ans;
}