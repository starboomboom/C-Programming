#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <map>
#include <stack>
#include<vector>
using namespace std;

char strRelation[] =
	"A B 同学 同事 同乡\n"
	"C D 同乡\n"
	"E F 同学\n"
	"G H 同姓\n"
	"I J 同事\n"
	"H I 同学 同乡\n"
	"B J 同乡\n";
/*
输入：A,B,1
输出：true //A和B是同学、同事、同乡，维度为1；

输入：A,B,2
输出：true //A和B是同学、同事、同乡，维度为1，当然也在维度2空间内；

输入：A,D,2
输出：false //A和D没有任何关系；

输入：A,J,2
输出：true //A 和B是同学，B和J是同乡，A和J的关系维度是2；

输入：A,I,2
输出：false //A 和B是同学，B和J是同乡，J和I是同事，A和I的关系维度是3；维度参数限制为2，不满足；

输入：A,I,3
输出：true //A 和B是同学，B和J是同乡，J和I是同事，A和I的关系维度是3；维度参数限制为3，满足；
*/

bool IsRelationSpace(const char * H1, const char * H2, int DimensionDistance)
{
	return false;
}
int main(int argc, char* argv[])
{
	char name1[100] = "";
	char name2[100] = "";
	int RelationDistance = 0;
	string s  = strRelation;
	vector<string> res;
	cout<<s<<endl;
	std::cin >> name1 >> name2 >> RelationDistance;
	bool bRet = IsRelationSpace(name1, name2, RelationDistance);

	//printf("true");
	//printf("false");

	return 0;
}