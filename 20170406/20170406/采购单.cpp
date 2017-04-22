//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//bool cmp(const pair<string,int> &a,const pair<string,int> &b){
//	return a.second>b.second;
//}
//int main(){
//	int n,m;
//	int t;
//	string s;
//	while(cin>>n>>m){
//		vector<int> price;
//		map<string,int> goods;
//		for(int i=0;i<n;i++){
//			cin>>t;
//			price.push_back(t);
//		}
//
//		for(int i=0;i<m;i++){
//			cin>>s;
//			goods[s]++;
//		}
//
//		vector<pair<string,int> > g(goods.begin(),goods.end());
//		sort(price.begin(),price.end());
//		sort(g.begin(),g.end(),cmp);
//
//		int max = 0;
//		int min = 0;
//		for(size_t i=0;i<g.size();i++){
//			min+=g[i].second*price[i];
//			max+=g[i].second*price[n-i-1];
//		}
//		cout<<min<<" "<<max<<endl;
//
//	
//
//
//
//	}
//	return 0;
//}