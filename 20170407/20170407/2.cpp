//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	string s1;
//	string s2;
//	cin>>s1>>s2;
//	char *res = new char[n+1];
//	res[n] = '\0';
//	for(int i=0;i<n;i++){
//		if((s1[i]=='0'&&s2[i]=='0')||(s1[i]=='1'&&s2[i]=='1')){
//			res[i] = '0';
//		}
//		else
//		{
//
//			res[i] = '1';
//		}
//	}
//	int sum = 0;
//	for(int i=0;i<n;i++){
//		sum = sum*2;
//		sum+=(res[i]-'0');
//	}
//	cout<<sum<<endl;
//}