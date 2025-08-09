#include<bits/stdc++.h>
using namespace std;

class Upper{
    public:
    int c=0;
    void display(){
        cout<<"this is the display function from a upper class"<<endl;

    }
    void update(){
        cout<<"current value of c is: "<<c;
        c++;
        cout<<endl<<"updated value of interger c is: "<<c<<endl;
    }
};

class Lower : public Upper{
    public:
    void update(){
         
        c++;
        cout<<"lower class Lower updated the value of c to: "<<c<<endl;
    }
};
int main(){
    Lower l;
    cout<<"the initial value of c is: "<<l.Upper::c<<endl;
    l.update();
    l.Upper::update();
    //this calls the update method of upper
    return 0;
}