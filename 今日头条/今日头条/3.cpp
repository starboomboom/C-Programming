#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
using namespace std;
int to_int(const string &s){
	int sum = 0;
	for(int i=0;i<s.size();i++){
		sum*=10;
		sum+=s[i]-'0';
	}
	return sum;
}
string To_picture(char c){
	string s;
	switch(c){
	case '1':s = "11111";
			 break;
	case '2':s = "111001111100111";
			 break;
	case '3':s = "111001111001111";
		break;
	case '4':s = "101101111001001";
		break;
	case '5':s = "111100111001111";
		break;
	case '6':s = "111100111101111";
		break;
	case '7':s = "111001001001001";
		break;
	case '8':s = "111101111101111";
		break;
	case '9':s = "111101111001111";
		break;
	case '0':s = "111101101101111";
		break;
	case '+':s = "000010111010000";
		break;
	case '-':s = "000000111000000";
		break;
	case '*':s = "000101010101000";
		break;
	case '/':s = "000001010100000";
		break;
	case '=':s = "00001111000011110000";
		break;
	case '.':s = "000000000011011";
		break;

	}
	return s;
}
int main(){
	string s;
	cin>>s;
	int i = 0;
	for(;i<s.size();i++){
		if(s[i]<'0'||s[i]>'9')
			break;
	}
	string s1 = s.substr(0,i);
	string s2 = s.substr(i+1);
	float jieguo = 0;
	bool flag = false;
	if(s[i]=='+'){
		jieguo = to_int(s1)+to_int(s2);
	}
	else if(s[i]=='-'){
		jieguo = to_int(s1)-to_int(s2);
	}
	else if(s[i]=='*'){
		jieguo = to_int(s1)*to_int(s2);
	}
	else{
		jieguo = (float)to_int(s1)/(float)to_int(s2);
		flag = true;
	}
	string s3;
	char buffer[10000];
	if(flag){
		
		sprintf_s(buffer,"%.2f",jieguo);
		s3 = buffer;
	}
	else{
		
		s3 = to_string((long long)jieguo);
	}
	
	vector<string> res;
	for(int i=0;i<s1.size();i++){
		res.push_back(To_picture(s1[i]));
	}
	res.push_back(To_picture(s[i]));
	for(int i=0;i<s2.size();i++){
		res.push_back(To_picture(s2[i]));
	}
	res.push_back(To_picture('='));
	for(int i=0;i<s3.size();i++){
		res.push_back(To_picture(s3[i]));
	}
	for(int i=0;i<5;i++){
		for(int j = 0;j<res.size();j++){
			
			if(res[j].size()==20){
					for(int k=4*i;k<4*i+4;k++)
					{
						if(res[j][k]=='0') cout<<" ";
						else{
							cout<<"*";
						}
					}

				}
			else if(res[j].size()==5){
					cout<<"*";
				}
			else{
					for(int k=3*i;k<3*i+3;k++)
					{
						if(res[j][k]=='0') cout<<" ";
						else{
							cout<<"*";
						}
					}

			}
			
			
			cout<<" ";
			cout<<" ";
		}
		cout<<endl;
		cout<<endl;
	}

	
}
