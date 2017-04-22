//#include<iostream>
//#include<map>
//#include<vector>
//#include<string>
//using namespace std;
//
//void count_eN(int P,int Q,int N,int count,vector<int> &res,double &sum,int x,int P_o){
//	if(N==0){
//		double temp = 1.0;
//		for(int i=0;i<res.size();i++){
//			cout<<res[i]<<" ";
//			temp = (temp*res[i])/100;
//		}
//		cout<<count<<" "<<temp<<endl;
//		sum+=count*temp;
//		return ;
//	}
//	//p的概率取到一个数
//	if(P!=0){
//		
//		res.push_back(P);
//		int t =1;
//		for(int k = 0;k<=x;k++){
//			t = t*2;
//		}
//		count_eN(P_o/t,Q,N-1,count+1,res,sum,x+1,P_o);
//		//1-p的概率没取到
//		res.pop_back();
//	}
//	
//	if(100-P!=0){
//		res.push_back(100-P);
//		if(P+Q>=100)
//			count_eN(100,Q,N,count+1,res,sum,x,P_o);
//		else
//			count_eN(P+Q,Q,N,count+1,res,sum,x,P_o);
//
//		res.pop_back();
//	}
//}
//int main(){
//	int count = 0;
//	int N,P,Q;
//	cin>>P>>Q>>N;
//	double sum = 0;
//	vector<int> res;
//	count_eN(P,Q,N,count,res,sum,0,P);
//	cout<<sum<<endl;
//	return 0;
//}