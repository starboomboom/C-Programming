//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//bool cmp(const int&a,const int &b){
//	return a>b;
//}
//int main(){
//	int n;
//	while(cin>>n){
//		int t;
//		vector<int> res;
//		int dong = 0;
//		for(int i=0;i<n;i++){
//			cin>>t;
//			if(i==0) dong = t;
//			else res.push_back(t);
//		}
//		sort(res.begin(),res.end(),cmp);
//		if(dong>res[0]) cout<<"0"<<endl;
//		else if(dong==res[0]) cout<<"1"<<endl;
//		else{
//	
//			int t = dong;
//			while(dong<=res[0]){
//				res[0]--;
//				dong++;
//				sort(res.begin(),res.end(),cmp);
//			}
//			cout<<dong-t<<endl;
//		}
//	}
//	return 0;
//}