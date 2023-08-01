#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int age=19;

    public:
    Hero(int a){
        cout<<"this: "<<this<<endl;
        this->age=a;
    }

    Hero(){
        cout<<"hero"<<endl;
    }
    int health=5;
    char level='A';

    void print(){
        cout<<"print level: "<<level<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age=a;
    }
};


int main(){
    Hero josh(30);
    cout<<"Address of josh: "<<&josh<<endl;
    cout<<"this age: "<<josh.getAge()<<endl;

    Hero* i=new Hero;
    i->print();
}