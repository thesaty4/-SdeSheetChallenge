vector<vector<int>> pairSum(vector<int> &arr, int s){
	sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    int size = arr.size();
    for(int index = 0; index < size; index++) {
        for(int inner = index + 1; inner < size; inner++)
            if(arr[index] + arr[inner] == s) {
                vector<int> ans;
                ans.push_back(arr[index]);
                ans.push_back(arr[inner]);
                res.push_back(ans);
            }
    }
    return res;
}