#include <bits/stdc++.h>
using namespace std;

class human{
    public:
    int height=180;
    int weight=63;
    int age=19;
    
    public:
    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age=age;
    }
};

class man: public human{
    public:
    string name="Joshua";
    void print(){
        cout<<"["<<"height: "<<height<<" ,";
        cout<<"weight: "<<weight<<" ,";
        cout<<"age: "<<age<<"]"<<endl;
    }
};

int main(){
    man josh;
    human aman;
    josh.print();
    josh.height=0;
    cout<<"human: "<<aman.height<<endl;
    cout<<"man: "<<josh.height<<endl;

}