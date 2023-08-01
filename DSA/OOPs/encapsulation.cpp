#include <bits/stdc++.h>
using namespace std;

class human{
    private:
    int height=180;
    int weight=63;
    int age=19;
    
    public:
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age=age;
    }
};

int main(){
    // encapsulation - data members are private and functions are public
    human josh;
    josh.setAge(20);
    cout<<"updated age: "<<josh.getAge()<<endl;
}