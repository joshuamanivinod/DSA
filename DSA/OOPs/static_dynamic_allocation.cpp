#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int age=19;

    public:
    int health=5;
    char level='A';

    void print(){
        cout<<level<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age=a;
    }
};


int main(){
    Hero josh;

    // static
    cout<<"health: "<<josh.health<<endl;
    josh.setAge(69);
    cout<<"Set age: "<<josh.getAge()<<endl;

    // dynamic
    Hero* i=new Hero;
    cout<<"(*i).health: "<<(*i).health<<endl;

    cout<<"i->health: "<<i->health<<endl;
    cout<<"level: "<<i->level<<endl;
    cout<<"i->getAge(): "<<i->getAge()<<endl;
    i->setAge(0);
    cout<<"i->setAge(0): "<<i->getAge()<<endl;

}