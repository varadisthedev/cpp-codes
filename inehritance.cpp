#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"flesh"<<endl;
    }

};
class Dog :public Animal {
    public: 
    void bark(){
        cout<<"barks barks";

    }
};


int main(){
    Dog obj;
    obj.eat();
    obj.bark();
    return 0;
}