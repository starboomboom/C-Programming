//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int *a = new int[n];
//	for(int i=0;i<n;i++)
//		cin>>a[i];
//	int first = 0;
//	int second = 0;
//	int third = 0;
//	for(int i=0;i<n;i++){
//		if(a[i]>=first){
//			third = second;
//			second = first;
//			first = a[i];
//		}
//		else if(a[i]<first&&a[i]>=second){
//			third = second;
//			second = a[i];
//		}
//		else if(a[i]<second&&a[i]>=third){
//			third = a[i];
//		}
//	}
//	cout<<third<<endl;
//	return 0;
//}