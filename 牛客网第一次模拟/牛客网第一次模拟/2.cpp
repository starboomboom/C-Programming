//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//bool is_circle(string s,string s2){
//	if(s.size()!=s2.size()) return false;
//	string temp = s+s;
//	for(int i=0;i<temp.size()-s2.size();i++){
//		int j = 0;
//		while(j<s2.size()&&temp[i]==s2[j]){
//			i++;
//			j++;
//		}
//		if(j==s2.size()) return true;
//	}
//	return false;
//}
//int main(){
//	int n;
//	cin>>n;
//	string s;
//	vector<string> res;
//	for(int i=0;i<n;i++){
//		cin>>s;
//		res.push_back(s);	
//	}
//	int count =0;
//	while(res.size()>0){
//		string temp = res[0];
//		count++;
//		vector<string> t;
//		for(int i=1;i<res.size();i++){
//			if(!is_circle(temp,res[i])){
//				t.push_back(res[i]);
//			}
//		}
//		res.clear();
//		for(int i=0;i<t.size();i++){
//			res.push_back(t[i]);
//		}
//
//	}
//	cout<<count<<endl;
//	return 0;
//}