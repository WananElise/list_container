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
	list<int>L;
		//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	//ͷ��
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);
	printList(L);

	//βɾ
	L.pop_back();
	printList(L);
	//ͷɾ
	L.pop_front();
	printList(L);

	//insert����
	L.insert(++L.begin(), 1000);
	printList(L);

	//ɾ��
	L.erase(L.begin());
	printList(L);

	//�Ƴ�
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);

	//���
	L.clear();
	printList(L);

}

int main()
{
	test01();

	system("pause");
	return 0;
}