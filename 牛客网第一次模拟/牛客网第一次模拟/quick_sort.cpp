#include<iostream>
using namespace std;
void quick_sort(int *a,int start, int end){
	if(start<end){
		int t = a[start];
		int l = start;
		int r = end;
		while(l<r){
			while(a[r]>=t&&l<r) r--;
			swap(a[r],a[l]);
			while(a[l]<=t&&l<r) l++;
			swap(a[l],a[r]);
		}
		quick_sort(a,start,l-1);
		quick_sort(a,l+1,end);
	}
}
int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}