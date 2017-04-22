#include<iostream>
#include<algorithm>
using namespace std;
void Merge(int *a,int start,int mid,int end){
	if(start<end){
		int *t  = new int[end-start+1];
		int k = 0;
		int l1 = start;
		int l2 = mid+1;
		while(l1<=mid&&l2<=end){
			if(a[l1]<=a[l2]){
				t[k++] = a[l1++]; 
			}
			else{
				t[k++] = a[l2++];
			}
		}
		while(l1<=mid) t[k++] = a[l1++];
		while(l2<=end) t[k++] = a[l2++];
		for(int i=0;i<end-start+1;i++){
			a[start+i] = t[i];
		}
		delete []t;
	}
}
void Merge_sort(int *a,int start,int end){
	if(start<end){
		int mid = (start+end)/2;
		Merge_sort(a,start,mid);
		Merge_sort(a,mid+1,end);
		Merge(a,start,mid,end);
	}

}


void heap_adujst(int *a,int i,int size){
	if(i<size/2){
		int left = 2*i+1;
		int right = 2*i+2;
		int max = i;
		if(left<size&&a[left]>a[max]){
			max = left;
		}
		if(right<size&&a[right]>a[max]){
			max = right;
		}
		if(a[i]!=a[max]){
			swap(a[max],a[i]);
			heap_adujst(a,max,size);
		}
		
	}
}

void buildHeap(int *a,int size){
	int i=0;
	for(i = size/2-1;i>=0;i--){
		heap_adujst(a,i,size);
	}
}

void heap_sort(int *a,int size){
	buildHeap(a,size);
	for(int i=size-1;i>=1;i--){
		swap(a[0],a[i]);
		heap_adujst(a,0,i);
	}
}

void shell_sort(int *a,int n){
	int gap;
	for(gap = n/2;gap>=1;gap/=2){
		for(int i= gap;i<n;i++){
			for(int j = i-gap;j>=0&&a[j]>a[j+gap];j=j-gap){
					swap(a[j+gap],a[j]);
				
			}
		}
	}
}
int main(){
	int n;
	while(cin>>n){
		int *a = new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<"ÅÅÐòÇ°:"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		//Merge_sort(a,0,n-1);
		//buildHeap(a,n);
		//heap_sort(a,n);
		shell_sort(a,n);
		cout<<"ÅÅÐòºó:"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}