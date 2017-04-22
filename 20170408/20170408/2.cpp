#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool chkLegal(string A) {
        // write code here
        stack<char> s;
        for(int i=0;i<A.size();i++){
            if(A[i]=='{'||A[i]=='('||A[i]=='['){
                s.push(A[i]);
            }
            if(A[i]=='}'||A[i]==')'||A[i]==']'){
                if(s.empty()) return false;
                char temp = s.top();
                if(A[i]=='}'&&temp=='{'){
                    s.pop();
                }
                else if(A[i]==')'&&temp=='('){
                    s.pop();
                }
                else if(A[i]=='['&&temp==']'){
					s.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(!s.empty()) return false;
        return true;
    }
int main(){
	string s;
	cin>>s;
	if(chkLegal(s)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}