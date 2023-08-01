#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int age=19;

    public:

    Hero(){
        cout<<"hero"<<endl;
    }
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

    Hero* i=new Hero;
}