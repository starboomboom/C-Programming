//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//bool is_reapYear(int year){
//	return (((year%4==0)&&(year%100!=0))||year%400==0);
//}
//int string_to_int(const string &s){
//	int sum = 0;
//	for(int i=0;i<s.size();i++){
//		sum*=10;
//		sum+=s[i]-'0';
//	}
//	return sum;
//}
//
//int max_day(int i,bool flag){
//	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) return 31;
//	if(i==4||i==6||i==9||i==11) return 30;
//	if(i==2&&flag){
//		return 29;
//	}
//	return 28;
//
//}
//int main(){
//	string s;
//	int year=0;
//	int month = 0;
//	int day = 0;
//	vector<string> res;
//	while(cin>>s){
//		int l = 0;
//		string temp="";
//		for(int i=0;i<s.size();i++){
//			if(s[i]=='-'){
//				temp = s.substr(l,i-l);
//				res.push_back(temp);
//				l = i+1;
//			}
//		}
//		temp = s.substr(l);
//		res.push_back(temp);
//		year = string_to_int(res[0]);
//		month = string_to_int(res[1]);
//		day = string_to_int(res[2]);
//		int sum_day = 0;
//		bool flag = is_reapYear(year);
//		for(int i =1;i<month;i++){
//			sum_day+=max_day(i,flag);
//		}
//		if(day>max_day(month,flag)||day<=0||(month>12)||year>=10000){
//			cout<<"invalid input"<<endl;
//		}
//		else{
//			sum_day+=day;
//			cout<<s<<" is the No."<<sum_day<< " day of "<<year<<"."<<endl;
//			
//		}
//		res.clear();
//
//	}
//	return 0;
//}