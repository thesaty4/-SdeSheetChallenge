int findMajorityElement(int arr[], int n) {
    // Write your code here.
    int element=arr[0],cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]==element) cnt++;
        else cnt--;
        
        if(cnt==0){element=arr[i]; cnt=1;}
    }
    cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element) cnt++;
    }
    
    if(cnt>n/2) return element;
    return -1;
    return cnt;
}