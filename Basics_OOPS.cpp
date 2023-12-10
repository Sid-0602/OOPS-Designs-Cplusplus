#include <bits/stdc++.h>
using namespace std;

class Employee{
private:
    int age;
public: 
    string name;
    string company;

    Employee(string name, string company, int age){
        this->name = name;
        this->age = age;
        this->company = company;
    }

    void IntroduceYourself(){
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Age: " <<age<<endl;
    }
};

int main(){
    
    //this is object: 
    Employee employee1("Sharan","google",25);
    employee1.IntroduceYourself();

    Employee employee2("Sidd","Amazon",25);
    employee2.IntroduceYourself();
}
