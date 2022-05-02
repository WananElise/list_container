#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

void printList(list<int>& L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

bool mycompare(int v1, int v2)
{
	return  v1>v2;
}

//listÈİÆ÷·´×ªºÍÅÅĞò
void test01()
{
	list<int>L;
	L.push_back(30);
	L.push_back(90);
	L.push_back(60);
	L.push_back(40);
	L.push_back(70);
	printList(L);
	L.reverse();
	printList(L);

	L.sort(mycompare);
	printList(L);

}





int main()
{

	test01();


	system("pause");
	return 0;
}