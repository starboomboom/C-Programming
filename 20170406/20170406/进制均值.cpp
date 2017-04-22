//#include<iostream>
//using namespace std;
//int sum(int x,int k){
//	int s = 0;
//	while(x>0){
//		int t = x%k;
//		s+=t;
//		x = x/k;
//	}
//	return s;
//
//}
//int gcd(int x,int y){
//	if(y%x==0) return x;
//	int d = y%x;
//	return gcd(d,x);
//}
//int main(){
//	int A;
//	while(cin>>A){
//		int s = 0;
//		for(int i=2;i<=A-1;i++){
//			s = s+sum(A,i);
//		}
//		int d=0;
//		if(A-2<s) d = gcd(A-2,s);
//		else
//			d = gcd(s,A-2);
//		cout<<s/d<<"/"<<(A-2)/d<<endl;
//
//	}
//
//}