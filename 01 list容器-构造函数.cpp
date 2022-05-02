#include <iostream>
using namespace std;
#include<list>

//list容器构造函数


void printList(const list<int>&L)
{
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {

        cout << *it << " ";


    }

    cout << endl;

}

void test01()
{
    //默认构造
list<int>L1;
L1.push_back(10);
L1.push_back(20);
L1.push_back(30);
L1.push_back(40);
printList(L1);

//区间方式构造
list<int>L2(L1.begin(), L1.end());
printList(L2);

//n个elem方式构造
list<int>L3(3, 100);
printList(L3);

//拷贝构造
list<int>L4(L3);
printList(L4);


}



int main()
{
    test01();

    system("pause");
    return 0;


}
