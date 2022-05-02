#include<iostream>
using namespace std;
#include<list>
#include<string>
//list容器 排序案例 对自定义数据类型进行排序
//按照年龄进行升序排列 如果年龄相同按照身高进行排序

class person
{
public:

	person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;


	}



	string m_name;//姓名
	int m_age;//年龄
	int m_height;//身高


};

//指定成员函数sort排序规则  //高级排序
bool mycomparePerson(const person& p1, const  person& p2)
{
	if (p1.m_age == p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	else
	{
	  return p1.m_age < p2.m_age;
	}
}
void test01()
{
	list<person>L;//创建容器
	//准备数据
	person p1("张三", 18, 170);
	person p2("李四", 19, 175);
	person p3("王五", 18, 160);
	person p4("赵六", 17, 180);
	person p5("闰土", 17, 165);
	person p6("鲁迅", 17, 160);
	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	cout << "排序前" << endl;
	for (list<person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << " 身高：" << it->m_height << endl;

	}
	printf("-------------------------------------\n");
	cout << "排序后" << endl;
	L.sort(mycomparePerson);
	for (list<person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << " 身高：" << it->m_height << endl;

	}



}



int main()
{
	test01();

	system("pause");
	return 0;
}