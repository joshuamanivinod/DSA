#include <bits/stdc++.h>
using namespace std;

class animal{
    public:
    int weight;
    int age;

    public:
    void bark(){
        cout<<"barking..."<<endl;
    }
};

class human{
    public:
    int age;
    public:
    void speak(){
        cout<<"speaking..."<<endl;
    }
};

class Hybrid: public animal, public human{

};

int main(){
    Hybrid obj;
    obj.bark();
    obj.speak();
}