#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
	
	for(int i=0;i<m;i++){
		int low=i;
		int high= (m*n)-1;
		while(low<=high){
			int mid=low+(high-low)/2;
			if(mat[mid/n][mid%n]==target){
				return true;
			}else if(mat[mid/n][mid%n]>target){
				high=mid-1;
			}else if(mat[mid/n][mid%n]<target){
				low=mid+1;
			}
		}
	}
	
	return false;
}