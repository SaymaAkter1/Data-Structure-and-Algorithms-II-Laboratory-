#include<iostream>

using namespace std;

class Person{
    private:
    int id;
    string name;

    public:
    Person(int id,string name){
        this->id=id;
        this->name=name;
        cout<<"Created a person object with id="<<id<<" and name="<<name<<endl;
    }
    Person (){
        cout<<"Created a person object"<<endl;
    }

    void greet(){
        cout<<"Hello I am "<<name<<" and my id is "<<id<<endl;
    }

    ~Person(){// destructor
        cout<<"The person with name"<<name<<" object has been destroyed"<<endl;
    }
};

int main(){
    Person x(10,"John"); //cons
    x.greet(); // greet message
    Person y; //def con
    y.greet(); // greet message
}
