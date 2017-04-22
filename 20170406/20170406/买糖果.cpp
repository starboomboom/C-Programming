//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//	int n,v;
//	while(cin>>n>>v){
//		vector<pair<int,int> > A;
//		vector<int> bian;
//		int x,y;
//		for(int i=0;i<n;i++){
//			cin>>x>>y;
//			A.push_back(make_pair(x,y));
//		}
//
//		int *dp = new int[v+1]();
//		for(int i=0;i<n;i++){
//			for(int j=v;j>=A[i].first;j--){
//				if(dp[j]<dp[j-A[i].first]+A[i].second){
//					dp[j]=dp[j-A[i].first]+A[i].second;
//				}
//			}
//		}
//		if(dp[v]==0){
//			cout<<0<<endl;
//			cout<<"No"<<endl;
//		}
//		else{
//			cout<<dp[v]<<endl;
//			for(int i=0;i<bian.size();i++){
//				cout<<bian[i]<<" ";
//			}
//		}
//
//	}
//	return 0;
//}