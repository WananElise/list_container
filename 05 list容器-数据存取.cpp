#include<iostream>
using namespace std;
#include<list>




void test01()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	cout << "��һ��Ԫ��Ϊ:" << L.front() << endl;
	cout << "���һ��Ԫ��Ϊ:" << L.back() << endl;
	
	//list������˫�������   ��֧���������
	list<int>::iterator it = L.begin();
	//it+1 ����
	it++;
	it--;
	cout << *it << endl;


}


int main()
{
	test01();

	system("pause");
	return 0;
}