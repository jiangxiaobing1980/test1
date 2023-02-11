#include <iostream>

#include <string>
#include <list>
#include <set>
#include <vector>



#include "Shape.h"
using namespace std;



int main(int argc, char *argv[])
{
	cout << "Hello world!" << endl;

        // 在标准输出中打印 "Hello, world!"
    // std::cout << "Hello, world!" << std::endl;   
    cout << to_string(56) << endl;

    //计划做一下vector的输入输出
    vector<int> v;

    v.push_back(34);
    v.push_back(35);

    cout << v.size() << endl;

    vector<int>::iterator it = v.begin();
    while (it != v.end())
    {
        cout << *it << endl;
        it++;
    }

    while (!v.empty())
    {
        v.erase(v.begin());
    }

    cout << v.size() << endl;

    int a[3] = {3, -2, 12};
    int b[3] = {2, 1, 1};

    int k = (b[0] / a[0]);

    int c1 = b[1] - k * a[1];

    cout << c1 << endl;

    //计划做一下set的输入输出
    set<int> s;
    s.insert(25);
    s.insert(28);
    s.insert(20);

    set<int>::iterator sit;
    sit = s.begin();
    while (sit != s.end())
    {
        cout << *sit << endl;
        ++sit;
    }

    //取得第一个数值
    int s1 = *(s.begin());
    cout << s1 << endl;

    //取得最后一个数值
    int e1 = *(--s.end());
    cout << e1 << endl;

    //删除清空
    while (!s.empty())
    {
        s.erase(s.begin());
    }
    s.clear();

    //计划做一下list的输入输出
    list<int> l;

    l.push_back(5);
    l.push_back(8);

    list<int>::iterator lit = l.begin();
    while (lit != l.end())
    {
        cout << *lit << endl;
        lit++;
    }
    while (!l.empty())
    {
        l.erase(l.begin());
    }

    cout << "all ok !...!!" << endl;


	Shape ms ;
    ms.setlenth(150);
    cout << "class oprator is " << ms.getlenth() <<endl;
}