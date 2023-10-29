int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int res = 1;
	for(int i = 1; i < arr.size(); i++){
		if(arr[i] != arr[res - 1]){
			arr[res] = arr[i];
			res++;
		}
	}
	return res;
}