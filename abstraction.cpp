#include <bits/stdc++.h>
using namespace std;


//this is contract or abstract class: 
class AbstractEmployee{

    //this is pure virtual function which asks for promotion. 
    virtual void askPromotion()=0;
    virtual void askLeave()=0;
};

class Employee: AbstractEmployee{
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
    void setAge(int age){
        if(age>18){
            this->age = age;
            cout<<"Age is set successfully!"<<endl;
        }else{
            cout<<"Age is less than 18!"<<endl;
        }
        
    }

    int getAge(){
        return age;
    }

    void askPromotion(){
        if(age>30){
            cout<<name<<": got promoted"<<endl;
        }else{cout<<name<<": Promotion denied due to age"<<endl;}
    }

    void askLeave(){
        if(age>25){
            cout<<name<<": you can take a leave"<<endl;
        }else{
            cout<<"Leave denied for: "<<name<<endl;
        }
    }
};

int main(){
    
    //this is object: 
    Employee employee1("Sharan","google",25);

    Employee employee2("Sidd","Amazon",25);
    Employee employee3("Rajesh","Microsoft",31);

    employee1.askPromotion();
    employee3.askPromotion();
    employee2.askPromotion();

    employee1.askLeave();
}
