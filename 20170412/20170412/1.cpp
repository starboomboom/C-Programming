#include<iostream>
using namespace std;
class Sinleton
{
public:
	static Sinleton *GetInstance(){
		if(m_Instance==NULL)
		{
			m_Instance = new Sinleton();
		}
		else
		{
			return m_Instance;
		}

	}
	void destroy(){
		if(m_Instance!=NULL){
			delete m_Instance;
			m_Instance = NULL;
		}
	}
	int GetTest(){
		return m_Test;
	}
private:
	Sinleton() {m_Test = 10;}
	static Sinleton *m_Instance;
	int m_Test;
};
Sinleton *Sinleton::m_Instance = NULL;
int main(){
	Sinleton *a = Sinleton::GetInstance();
	return 0;
}