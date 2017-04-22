//#include<iostream>
//#include<vector>
//#include<set>
//#include<string>
//using namespace std;
//void Per(string str,int n,set<string> &res){
//	if(n==str.size()){
//		res.insert(str);
//		cout<<str<<endl;
//	}
//	else{
//		for(int i=n;i<str.size();i++){
//			swap(str[n],str[i]);
//			Per(str,n+1,res);
//			swap(str[n],str[i]);
//		}
//	}
//}
//vector<string> Permutation(string str) {
//	if(str.size()==0) return vector<string>();
//	set<string> res;
//	Per(str,0,res);
//	vector<string> r(res.begin(),res.end());
//	return r;
//}
//int main(){
//	string s;
//	cin>>s;
//	vector<string> a;
//	a = Permutation(s);
//	for(int i=0;i<a.size();i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//
//	return 0;
//}