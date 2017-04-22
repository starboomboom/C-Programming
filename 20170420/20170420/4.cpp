#include<iostream>
#include<bitset>
using namespace std;
int main(){
	long x,k;
	cin>>x>>k;
	bitset<64> bs(x);
	bitset<64> bk(k);
	int j = 0;
	for(int i=0;i<bs.size();i++){
			if(bs[i]==1){
				continue;
			}
			else{
				bs[i] = bk[j];
				j++;
			}
	}

	long long result = 0;
	for(int i=bs.size()-1;i>=0;i--){
		result = result<<1;
		result+=bs[i];
	}
	
	cout<<result-x<<endl;
	return 0;
}