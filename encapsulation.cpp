#include <bits/stdc++.h>
using namespace std;

class Employee{
    //encapsulated private members: 
private:
    int age;
    string name;
    string company;
public:
    //parameterized constructor: 
    Employee(string name, string company){
        this->name = name;
        this->company = company;
    }

    void IntroduceYourself(){
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
    }

    void setAge(int age, string pass){
        if(pass== "password" && age>18){
            this->age = age;
            cout<<"Age is set successfully!"<<endl;
        }else{
            cout<<"Passkey is invalid or age is less than 18"<<endl;
        }
        
    }

    int getAge(string pass){
        if(pass == "password"){
            return age;
        }else{
            cout<<"UnAuthorized!"<<endl;
        }
    }
};

int main(){
    
    //this is object: 
    Employee employee1("Sharan","google");

    //encapsulation by setting password:
    string pass="";
    cout<<"Please enter password for setters and getters"<<endl;
    cin>>pass;
    employee1.setAge(26,pass);
    employee1.IntroduceYourself();

    Employee employee2("Sidd","Amazon");
    employee2.setAge(24,pass);
    employee2.IntroduceYourself();

    Employee employee3("Samaira","Microsoft");
    employee3.setAge(14,pass);
}
