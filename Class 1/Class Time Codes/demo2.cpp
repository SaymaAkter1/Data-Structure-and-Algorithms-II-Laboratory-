#include<iostream>
using namespace std;
class Person{
    private:
    int id;
    int age;

    public:
    void setID(int uid){
        id=uid;
    }
    void setAge(int uage){
        age=uage;
    }
    int getID(){
        return id;
    }
    int getAge(){
        return age;
    }
};
int main(){
    Person person1;
    Person person2;

    person1.setID(1); // person1.id=1
    person1.setAge(25);//person1.age=25

    cout<<"id of person 1 is "<<person1.getID()<<endl;


    return 0;
}
