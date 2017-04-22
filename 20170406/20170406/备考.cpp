//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//	int d,sumTime;
//	while(cin>>d>>sumTime){
//		int minTime,maxTime;
//		vector<pair<int,int> > T;
//		int min_sum = 0;
//		int max_sum = 0;
//		for(int i=0;i<d;i++){
//			cin>>minTime>>maxTime;
//			min_sum = min_sum+minTime;
//			max_sum = max_sum+maxTime;
//			T.push_back(make_pair(minTime,maxTime));
//		}
//		if(min_sum>sumTime||max_sum<sumTime) cout<<"No"<<endl;
//		else{
//			cout<<"Yes"<<endl;
//			int left = sumTime - min_sum;
//			for(int i=0;i<T.size();i++){
//				if(left+T[i].first<=T[i].second){
//					cout<<T[i].first+left<<" ";
//					left = 0;
//				}
//				else{
//					left = left-(T[i].second-T[i].first);
//					cout<<T[i].second<<" ";
//				}
//			}
//		}
//	}
//	return 0;
//}