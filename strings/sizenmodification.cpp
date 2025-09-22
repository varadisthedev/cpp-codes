#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "varad";
    cout << s.size() << endl;

    s.push_back('e');
    cout << s;

    s += " raut";
    cout << s << endl;

    string s2 = "hello there varad abc";
    cout << "found at index: " << s2.find("abc") << endl;

    int a = 123532;
    cout << a << endl;
    cout << typeid(a).name() << endl;

    string b = "hello world ";
    cout << "type of var b is: " << typeid(b).name() << endl;

    auto xy = 123;
    decltype(xy) bam = 12;
    cout << bam;
    return 0;
}