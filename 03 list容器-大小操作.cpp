#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{

		cout << *it << " ";


	}

	cout << endl;

}

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);
	//�ж������Ƿ�Ϊ��
	if (L1.empty())
	{
		cout << "����Ϊ��" << endl;

	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "Ԫ�ظ���Ϊ:" << L1.size() << endl;
	}
	//����ָ����С
	/*L1.resize(11);*/
	printList(L1);
	L1.resize(11, 1);
	printList(L1);
}
int main()
{
	test01();


	system("pause");
	return 0;
}