//queue attack
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<long,long> > Q;
	int R,C;
	map<long,int> row;
	map<long,int> col;
	map<long,int> dia1;
	map<long,int> dia2;
	int max_r = 0;
	int max_c = 0;
	int count1 = 0;
	int count2 = 0;
	for(int i=0;i<n;i++){
		cin>>R>>C;
		Q.push_back(make_pair(R,C));
		row[R]++;
		col[C]++;
		dia1[R-C]++;
		dia2[R+C]++;
	}

	int sum = 0;
	for(map<long,int>::iterator it = row.begin();it!=row.end();++it){
		sum+=it->second*(it->second-1)/2;
	}

	for(map<long,int>::iterator it = col.begin();it!=col.end();++it){
		sum+=it->second*(it->second-1)/2;
	}
	for(map<long,int>::iterator it = dia1.begin();it!=dia1.end();++it){
		sum+=it->second*(it->second-1)/2;
	}

	for(map<long,int>::iterator it = dia2.begin();it!=dia2.end();++it){
		sum+=it->second*(it->second-1)/2;
	}
	cout<<sum<<endl;
	return 0;
}