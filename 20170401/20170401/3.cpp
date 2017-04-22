#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
struct Node{
	string s;
	int step;
};
int count(string s1,string s2){
	int count = 0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]) count++;
	}
	return count;
}
void dfs(string start,string end,vector<string> &res,bool *flag,int step,int &min_step){
	for(int i=0;i<res.size();i++){
		if(!flag[i]&&count(res[i],start)==1){
			step++;
			if(res[i]==end){
				if(step<min_step)
					min_step = step;
			}
			else{
				flag[i] = true;
				dfs(res[i],end,res,flag,step,min_step);
				flag[i] = false;
			}
		}

	}
}
int main(){
	string s1;
	string s_end;
	string s_word;
	cin>>s1;
	cin>>s_end;
	cin.get();
	getline(cin,s_word);
	int start = 0;
	string substr;
	vector<string> res;
	int i = 0;
	for(i=0;i<s_word.size();i++){
		if(s_word[i]==' '){
			substr = s_word.substr(start,i-start);
			res.push_back(substr);
			start = i+1;
		}
	}
	res.push_back(s_word.substr(start));
	int n = res.size();

	bool *flag = new bool[n]();
	int min_step = res.size();
	dfs(s1,s_end,res,flag,0,min_step);
	cout<<min_step;
	return 0;
}