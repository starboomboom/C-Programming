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
	"A B ͬѧ ͬ�� ͬ��\n"
	"C D ͬ��\n"
	"E F ͬѧ\n"
	"G H ͬ��\n"
	"I J ͬ��\n"
	"H I ͬѧ ͬ��\n"
	"B J ͬ��\n";
/*
���룺A,B,1
�����true //A��B��ͬѧ��ͬ�¡�ͬ�磬ά��Ϊ1��

���룺A,B,2
�����true //A��B��ͬѧ��ͬ�¡�ͬ�磬ά��Ϊ1����ȻҲ��ά��2�ռ��ڣ�

���룺A,D,2
�����false //A��Dû���κι�ϵ��

���룺A,J,2
�����true //A ��B��ͬѧ��B��J��ͬ�磬A��J�Ĺ�ϵά����2��

���룺A,I,2
�����false //A ��B��ͬѧ��B��J��ͬ�磬J��I��ͬ�£�A��I�Ĺ�ϵά����3��ά�Ȳ�������Ϊ2�������㣻

���룺A,I,3
�����true //A ��B��ͬѧ��B��J��ͬ�磬J��I��ͬ�£�A��I�Ĺ�ϵά����3��ά�Ȳ�������Ϊ3�����㣻
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