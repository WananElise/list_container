#include<iostream>
using namespace std;
#include<list>




void test01()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	cout << "第一个元素为:" << L.front() << endl;
	cout << "最后一个元素为:" << L.back() << endl;
	
	//list容器是双向迭代器   不支持随机访问
	list<int>::iterator it = L.begin();
	//it+1 报错
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