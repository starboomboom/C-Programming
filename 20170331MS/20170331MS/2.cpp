#include<iostream>
#include<vector>
using namespace std;
int main(){
	int N,M,K;
	//N node number
	//M depth
	//K leaves
	cin>>N>>M>>K;
	int *a =new int[M];
	for(int i=0;i<M;i++)
		cin>>a[i];
	//a[i] no of nodes of depth i;
	vector<vector<int> > tree_v;
	int x;
	for(int i=0;i<M;i++){
		vector<int> temp;
		for(int j=0;j<a[i];j++){	
			cin>>x;
			temp.push_back(x);
		}
		tree_v.push_back(temp);
		temp.clear();
	}
	int *L = new int[K];
	for(int i=0;i<K;i++){
		cin>>L[K];
	}
	int **D = new int*[K];
	for(int i=0;i<K;i++){
		D[i] = new int[K]();
	}

	for(int i=0;i<K;i++){
		for(int j=0;j<K;j++){
			cin>>D[i][j];
		}
	}

	for(int i=0;i<tree_v.size();i++){
		for(int j=0;j<tree_v[i].size();j++){
			if(i==0) cout<<"0"<<" ";
			if(i==1) cout<<"1"<<" ";
			else{
			}
		}
	}
	cout<<endl;

	return 0;

}