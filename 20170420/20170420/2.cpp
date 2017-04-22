#include<iostream>
#include<vector>
using namespace std;
bool can_be_duobianxing(const vector<int> &res){
	if(res.size()<3) return false;
	int max = 0;
	int i_max = 0;
	int sum = 0;
	for(int i=0;i<res.size();i++){
		if(res[i]>max){
			max = res[i];
			i_max = i;
		}
	}
	for(int i=0;i<res.size();i++){
		if(i!=i_max) sum+=res[i];
	}
	if(sum>max) return true;

	return false;

}
int main(){
	int n;
	cin>>n;
	int c,L;
	vector<int> res;
	for(int i=0;i<n;i++){
		cin>>c>>L;
		if(c==1){
			res.push_back(L);
			
		}
		else{
			int j = 0;
			for(;j<res.size();j++){
				if(res[j]==L) break;
			}
			res.erase(res.begin()+j);

		}

		if(can_be_duobianxing(res)) cout<<"Yes"<<endl;
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}