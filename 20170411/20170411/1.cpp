#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include<string>
using namespace std;

int main() {
	string a = "Hello, world! I am here.";
	int len = a.size();
	string t;
	//char temp[100];
	int l = len-1;
	int r = len-1;
	int count = 0;
	while(l>=0){
		if(a[l]==' '){
			t.append(a.substr(l+1,r-l));
			r = l-1;
			t.append(1,' ');
		}
		l--;
	}
	t.append(a.substr(l+1,r-l));

	for(int i=0;i<len;i++){
		cout<<t[i];
	}
	cout<<endl;
}
