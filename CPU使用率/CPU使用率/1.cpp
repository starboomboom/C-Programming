#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *len = new int[n];
	int sum = 0;
	for(int i=0;i<n;i++){
		cin>>len[i];
		len[i]/=1024;
		sum+=len[i];
	}

	int v = sum/2;
	
	int *dp = new int[v+1]();
	for(int i=0;i<n;i++){
		for(int j=v;j>=len[i];j--){
			dp[j] = max(dp[j],dp[j-len[i]]+len[i]);
		}
	}

	int res = max(dp[v],sum-dp[v])*1024;
	cout<<res<<endl;
	return 0;
}