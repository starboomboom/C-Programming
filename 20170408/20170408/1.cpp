//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string s;
//	while(cin>>s){
//		int begin=0,l=0;
//		int m[26]={0};
//		int max = 0;
//		int l_max=0;
//		int b_max = 0;
//		while(l<s.size()){
//			m[s[l]-'a']++;
//			if(m[s[l]-'a']==1){
//				if(l-begin>max){
//					max = l-begin;
//					l_max = l;
//					b_max = begin;
//				}
//			}
//			else{
//				while(m[s[l]-'a']>1){
//					m[s[begin]-'a']--;
//					begin++;
//				}
//
//			}
//			l++;
//		}
//		cout<<s.substr(b_max,l_max-b_max+1);
//	}
//}