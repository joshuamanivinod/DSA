#include <bits/stdc++.h>
using namespace std;

class animal{
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"speaking..."<<endl;
    }
};

class dog: public animal{

};

class germanshepherd: public dog{

};

int main(){
    germanshepherd g;
    g.speak();

}