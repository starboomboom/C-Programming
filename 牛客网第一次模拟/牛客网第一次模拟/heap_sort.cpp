//#include<iostream>
//#include<algorithm>
//using namespace std;
////¶ÑµÄµ÷Õû
//void HeapAdjust(int *a,int i,int size){
//	int lchild = 2*i+1;
//	int rchild = 2*i+2;
//	int max  = i;
//	if(i<size/2){
//		if(lchild<=size&&a[lchild]>a[max]){
//			max = lchild;
//		}
//		if(rchild<=size&&a[rchild]>a[max]){
//			max = rchild;
//		}
//		if(max!=i){
//			swap(a[i],a[max]);
//			HeapAdjust(a,max,size);
//		}
//	}
//}
//void buildHeap(int *a,int size){
//	int i= 0;
//	for(i = size/2-1;i>=0;i--){
//		HeapAdjust(a,i,size);
//	}
//
//}
//void HeapSort(int *a,int size){
//	int i;
//	buildHeap(a,size);
//	for(i = size-1;i>=0;i--){
//		swap(a[i],a[0]);
//		HeapAdjust(a,0,i-1);
//	}
//}
//int main(){
//	int n;
//	cin>>n;
//	int *a = new int[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	HeapSort(a,n);
//	for(int i =0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	return 0;
//}