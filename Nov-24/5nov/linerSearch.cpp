function bool search(int arr, int n, int x){
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			return true;
		}
	}
	
	return false;
}
