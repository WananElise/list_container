#include<iostream>
using namespace std;
#include<list>
#include<string>
//list���� ������ ���Զ����������ͽ�������
//������������������� ���������ͬ������߽�������

class person
{
public:

	person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;


	}



	string m_name;//����
	int m_age;//����
	int m_height;//���


};

//ָ����Ա����sort�������  //�߼�����
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
	list<person>L;//��������
	//׼������
	person p1("����", 18, 170);
	person p2("����", 19, 175);
	person p3("����", 18, 160);
	person p4("����", 17, 180);
	person p5("����", 17, 165);
	person p6("³Ѹ", 17, 160);
	//��������
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	cout << "����ǰ" << endl;
	for (list<person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << it->m_name << " ���䣺" << it->m_age << " ��ߣ�" << it->m_height << endl;

	}
	printf("-------------------------------------\n");
	cout << "�����" << endl;
	L.sort(mycomparePerson);
	for (list<person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << it->m_name << " ���䣺" << it->m_age << " ��ߣ�" << it->m_height << endl;

	}



}



int main()
{
	test01();

	system("pause");
	return 0;
}