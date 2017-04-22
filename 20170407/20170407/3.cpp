#include<iostream>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
		int t = n;
		int count = 0;
		while(t-k>=0){
			t = t-k;
			//cout<<k<<" ";
			count++;
			if(count%2==1) k = k+1;
			else{
				k = k--;
			}
		}
		cout<<endl;
		cout<<count<<endl;

	}
	
	return 0;
}