#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

long long pow(int k){
	long long res = 1;
	for(int i=0;i<k;i++){
		res = res*10;
	}
	return res;
}
int cmp(const pair<char,long long> &a,const pair<char,long long> &b){
	return a.second>b.second;
}
int main(){
	int n;
	cin>>n;
	string s;
	map<char,long long> h;
	bool *flag = new bool[10]();
	for(int i=0;i<n;i++){
		cin>>s;
		int t_s = s.size();
		flag[s[0]-'A'] = true;
		for(int i=0;i<s.size();i++){
			//cout<<pow(t_s-i-1)<<endl;
			h[s[i]]+=pow(t_s-i-1);
		}
	}

	vector<pair<char,long long> >res(h.begin(),h.end());
	sort(res.begin(),res.end(),cmp);
	long long sum = 0;
	int j = 9;
	if(res.size()<10){
		for(int i=0;i<res.size();i++){
			//cout<<res[i].first<<" "<<res[i].second<<" "<<j<<endl;
			sum+=res[i].second*j;
			j--;		
		}
	}
	else{
		if(flag[res[9].first-'A']){
			for(int i=9;i>=0;i--){
				if(!flag[res[i].first-'A']){
					res[i].second = 0;
					break;
				}
			}
			for(int i=0;i<res.size();i++){
				//cout<<res[i].first<<" "<<res[i].second<<" "<<j<<endl;
				if(res[i].second==0) continue;
				sum+=res[i].second*j;
				j--;		
			}

		}
		else{
			for(int i=0;i<res.size();i++){
				//cout<<res[i].first<<" "<<res[i].second<<" "<<j<<endl;
				sum+=res[i].second*j;
				j--;		
			}
		}
	}
	
	cout<<sum<<endl;
	return 0;
}