//#include<iostream>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//bool cmp(const pair<int,int> &a,const pair<int,int> &b){
//	return a.first>b.first;
//}
//int main(){
//	int n,s;
//	while(cin>>n>>s){
//		map<int,int> B;
//		map<int,int> S;
//		
//		char c;
//		int p,q;
//		for(int i=0;i<n;i++){
//			cin>>c>>p>>q;
//			if(c=='B') B[p] = B[p]+q;
//			else{
//				S[p] = S[p]+q;
//			}
//		}
//		vector<pair<int,int> > Buy(B.begin(),B.end());
//		vector<pair<int,int> > Sell(S.begin(),S.end());
//		sort(Buy.begin(),Buy.end(),cmp);
//		sort(Sell.begin(),Sell.end(),cmp);
//		for(int i=0;i<Sell.size()&&i<s;i++){
//			cout<<"S "<<Sell[i].first<<" "<<Sell[i].second<<endl;
//		}
//		for(int i=0;i<Buy.size()&&i<s;i++){
//			cout<<"B "<<Buy[i].first<<" "<<Buy[i].second<<endl;
//		}
//
//		
//	}
//	return 0;
//}