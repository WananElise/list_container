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







//list容器赋值与交换操作

//赋值
void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);
	//operator=赋值操作
	list<int>L2 = L1;
	printList(L2);

	//assign赋值操作
	list<int>L3;
	L3.assign(L2.begin(), L2.end()); 
	printList(L3);
	//n个elem赋值
	list<int>L4;
	L4.assign(4, 100);
	printList(L4);

}
//交换
void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);


	list<int>L2;
	L2.assign(10, 100);
	//交换前
	cout << "交换前：" << endl;
	printList(L1);
	printList(L2);
	cout << "交换后：" << endl;
	L1.swap(L2);
	printList(L1);
	printList(L2);
	cout << "-----------------" << endl;
	//收缩内存
	

}

int main()
{
	test02();
	/*test01();*/
	system("pause");
	return 0;
}