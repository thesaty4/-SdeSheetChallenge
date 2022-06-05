#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
	int c=0;
	unordered_map<int,int> visited;
	int cpx=0;
	for(int i=0;i<arr.size();i++){
		cpx^=arr[i];
		if(cpx==x) c++;
		int h=cpx^x;
		if(visited.find(h) != visited.end())
			c+=visited[h];
		visited[cpx]++;
	}
	
	return c;
}