#include<iostream>
#include "math.h"
using namespace std;
int main(){
	int N,Q;
	cin>>N>>Q;
	long t = Log2(N);
	int mid = 0;
	for(int i=1;i<t;i++){
		mid = i*Q+1+N/(1<<i);
		int l = (i-1)*+1+N/(1<<(i-1));
		int r = (i+1)*+1+N/(1<<(i+1));
		if(mid<=l&&mid<=r)
			break;
	}
	cout<<mid<<endl;
	return 0;
}