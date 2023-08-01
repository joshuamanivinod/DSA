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
    // creation of objects
    Hero josh;
    // cout<<"age: "<<josh.age<<endl;
    cout<<"Health: "<<josh.health<<endl;
    cout<<"lvl: "<<josh.level<<endl;
    cout<<"Get age: "<<josh.getAge()<<endl;             // Getter
    josh.setAge(50);                                    //Setter
    cout<<"Set age: "<<josh.getAge()<<endl;

}