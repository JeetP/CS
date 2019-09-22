#include"heapsort.cpp"
int heap_maximum(int arr[],int n){
	if(n>=0)
	return arr[0];
}
int heap_extract_max(int arr[],int n){
	assert(n<0);
	int max = arr[0];
	arr[0] = arr[n];
	n--;
	max_heapify(arr,n,0);
}
int main(){
	return 0;
}
