#include<iostream>
#include<string>
#include<vector>
using namespace std;
int to_int(const string &s){
	int sum = 0;
	for(int i=0;i<s.size();i++){
		sum = sum*10;
		sum+=s[i]-'0';
	}
	return sum;
}
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	vector<int> A;
	vector<int> B;
	int l = 0;
	int r = 0;
	string temp;
	while(r<s1.size()){
		if(s1[r]==' '){
			temp = s1.substr(l,r-l);
			A.push_back(to_int(temp));
			l = r+1;
		}
		r++;
	}
	temp = s1.substr(l,r-l);
	A.push_back(to_int(temp));

	l = 0;
    r = 0;
	while(r<s2.size()){
		if(s2[r]==' '){
			temp = s2.substr(l,r-l);
			if(temp=="1") B.push_back(1);
			else
			{
				B.push_back(-1);
			}
			l = r+1;
		}
		r++;
	}
	if(r-l==1) B.push_back(1);
	else
	{
		B.push_back(-1);
	}
	bool flag = true;
	while(flag){
		flag = false;
		for(int i=0;i<A.size()-1;i++){
			if(B[i]==1&&B[i+1]==-1){
				if(A[i]>A[i+1]){
					A.erase(A.begin()+i+1);
					B.erase(B.begin()+i+1);
				}
				else{
					A.erase(A.begin()+i);
					B.erase(B.begin()+i);
				}
				flag = true;
			}
		}
	}

	cout<<A.size()<<endl;
	return 0;
}