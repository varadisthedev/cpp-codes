#include <bits/stdc++.h>
using namespace std;
int main(){
    //address of operator &
    // deferefernce operator *
    // what is a pointer? var that stores mem address of another var,
    // sometimes it is easier to work with a memory address
    string name="varad";
    string * ptr = &name;
    int age=19;
    int *page=&age;

    cout<<*ptr;
    cout<<"age is: "<<&page;
    return 0;
}
