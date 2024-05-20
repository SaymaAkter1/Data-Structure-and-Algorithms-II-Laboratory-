#include<iostream>
using namespace std;
class Person{
    public:
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
    Person *ptr;
    ptr = new Person();

    ptr-> id = 10;
    ptr-> name = "Clark Kent";

    ptr->greet();

    cout<<"The address of the pointer is "<<&ptr<<endl;
    cout<<"The address pointed to by the pointer is "<<ptr<<endl;
    cout<<"The value stored at the pointed location (id)"<<ptr->id<<endl;
    cout<<"The value stored at the pointed location  (name)"<<ptr->name<<endl;

    delete ptr; // destructor

    cout<<"The program has ended"<<endl;
}

