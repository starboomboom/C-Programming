//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(){
//	int minSize,maxSize;
//	cin>>minSize>>maxSize;
//	int n;
//	cin>>n;
//	vector<int> fishSize;
//	int t;
//	for(int i=0;i<n;i++){
//		cin>>t;
//		fishSize.push_back(t);	
//	}
//	int count = 0;
//	for(int i=minSize;i<=maxSize;i++){
//		int j=0;
//		for(;j<fishSize.size();j++){
//			if((i>=2*fishSize[j])&&(i<=10*fishSize[j])) break;
//			if((fishSize[j]>=2*i)&&(fishSize[j]<=10*i)) break;
//
//		}
//		if(j==fishSize.size()){
//			cout<<i<<" ";
//			count++;
//			fishSize.push_back(i);
//		}
//	}
//	cout<<endl;
//	cout<<count<<endl;
//	return 0;
//}