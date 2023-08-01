#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int age=19;

    public:
    int health=5;
    char level='A';
    // copy constructor
    Hero(Hero& temp){ // pass by refersence
        cout<<"copy constructor called"<<endl;
        this->health=9999999;
        this->level=temp.level;
    }

    Hero(int a,char c){
        cout<<"this: "<<this<<endl;
        this->age=a;
        this->level=c;
    }

    void print(){
        cout<<"age: "<<this->age<<endl;   // agar confussion hota hai tho "this" use kardo
        cout<<"level: "<<level<<endl;
        cout<<"health: "<<this->health<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age=a;
    }
};


int main(){
    Hero josh(100,'C');
    josh.print();

    Hero copy(josh);
    copy.print();
}