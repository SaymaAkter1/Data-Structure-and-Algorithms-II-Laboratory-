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
    // primitive data type
    int *ptr;
    ptr=new int;
    *ptr=1000;
    cout<<"The address of the pointer is "<<&ptr<<endl;
    cout<<"The address pointed to by the pointer is "<<ptr<<endl;
    cout<<"The value stored at the pointed location "<<*ptr<<endl;

    cout<<"The value "<<ptr<<endl;
    delete ptr;
    // primitive data type array
    int *ptr2;
    ptr2 = new int[4];
    for(int i=0;i<4;i++){
        cout<<"address at i="<<i<<" is "<<(ptr2+i)<<endl;
    }

    for(int i=0;i<4;i++){
        //*(ptr2+i)=i*10;
        //ptr2[i] is the same as *(ptr2+i)
        ptr2[i]=i*10;
    }

    for(int i=0;i<4;i++){
        //cout<<"value at i="<<i<<" is "<<*(ptr2+i)<<endl;
        cout<<"value at i="<<i<<" is "<<ptr2[i]<<endl;
    }

    delete [] ptr2;
}
