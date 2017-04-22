#include<iostream>
using namespace std;
class A{
public:
	virtual void fun(int a){
		cout<<"A"<<endl;
	}
};

class B:public A{
public:
	void fun(double a){
		cout<<"B"<<endl;
	}
	void funB(){
		cout<<"hello,world"<<endl;
	}
};
int main(){
	B b;
	A *a = &b;
	double i = 1.1;
	a->fun(i);

}