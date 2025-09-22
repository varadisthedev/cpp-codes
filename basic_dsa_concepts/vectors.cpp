#include<bits/stdc++.h>
using namespace std;

void display(vector<int> v){
    cout<<"updated array is: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


main(){
    std::cout<< "hello by vectors"<<" ";
    //learning switch case

    vector<int>v;
    display(v);

    while(1){
    int choice;
    cout<<" [1]to append \n [2] to display the vector \n [3] to remove the last element "<<endl;
    cout<<"enter your choice:";
    cin>>choice;
    switch(choice){

        case 1:
        cout<<endl<<"enter the value you want to append:";
        int x;
        cin>>x;
        v.push_back(x);
        display(v);
        break;

        case 2:
        display(v);
        break;

        case 3:
        cout<<"removing element: " << v.back();

        v.pop_back();
        display(v);
        break;

        default:
        cout<<"wrong input.";
        break;

    }


    }
}