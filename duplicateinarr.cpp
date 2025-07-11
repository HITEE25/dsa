int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return 0;
}
