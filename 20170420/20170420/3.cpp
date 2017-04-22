#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
void Permutation(vector<string> &res,vector<string> &result,int n,map<string,int> h){
	if(n==res.size()){
		string temp = "";
		for(int i = 0;i<res.size();i++){
			temp+=res[i];
		}
		if(h[temp]==0){
			h[temp] = 1;
			result.push_back(temp);
		}
	}
	else{
		for(int i=n;i<res.size();i++){
			swap(res[i],res[n]);
			Permutation(res,result,n+1,h);
			swap(res[i],res[n]);
		}
	}
}
int getRank(string s){
	int i = 0;
	int count = 0;
	string temp = s;
	int n = s.size();
	for(int i=0;i<s.size();i++){
		if(s[0]==s[i]){
			int j = 1;
			for(j=1;j<s.size();j++){
				if(s[j]!=s[(j+i)%n]){
					break;
				}
			}
			if(j==s.size()){
				count++;
			}
		}
	}
	return count;
}
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	vector<string> res;
	for(int i=0;i<n;i++){
		cin>>s;
		res.push_back(s);
	}
	map<string,int> h;
	vector<string> result;
	Permutation(res,result,0,h);
	int count = 0;
	for(int i=0;i<result.size();i++){
		if(getRank(result[i])==k) 
			count++;
	}
	cout<<count<<endl;
	return 0;
}