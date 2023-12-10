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
    string name;
    string company;
public: 

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

    string getName(){
        return name;
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

    //this function acts polymorphic inside derived classes:
    //by making this function virtual, the most derived version of this function is executed!
    virtual void work(){
        cout<<"Employee Works!"<<endl;
    }
};

//this is derived class of employees. 
class Developer : public Employee{

    public: 
    string FavProgrammingLanguage;

    //this is how we initialize constructors for derived class's constructor: 
    Developer(string name, string company, int age, string FavProgrammingLanguage):Employee(name,company,age)
    {
        this->FavProgrammingLanguage = FavProgrammingLanguage; 
    }

    void Fixbug(){
        cout<<getName()<<" fixes bugs using c++ and JS"<<endl;
    }
    void develop(){
        cout<<getName()<<" develops applications using JavaScript"<<endl;
    }

    void work(){
        cout<<getName()<<" writes code and designs applications"<<endl;
    }

};

class Teacher: public Employee{

public: 
    string Subject;
    Teacher(string name, string company, int age,string Subject):Employee(name,company,age){
        this->Subject = Subject;
    }
    void preparedLesson(){
        cout<<getName()<<" is preparing for Lessons in subject: "<<Subject<<endl;
    }

    void work(){
        cout<<getName()<<" teaches and takes Quizzes"<<endl;
    }
};


int main(){
    
    //this is object: 
    Employee employee1("Sharan","google",25);
    Employee employee2("Rajesh","Microsoft",31);
    employee1.work();
    //child class developers objects: 
    Developer developer1("Sid","JPMC",24,"C++/JS");

    Developer developer2("Sam","MS",33,"Java/GO");
    developer1.work();

    //child class for teacher: 
    Teacher teacher1("Uma","FIITJEE",31,"Science");
    teacher1.work();

    Developer d = Developer("Ankit","JPMC",28,"C++/JS");
    Teacher t = Teacher("Usha","NVPS",33,"Maths");

    //polymorphism using pointer reference by referencing base class pointer to derived classes.

    Employee *e1 = &d;
    e1->work();
    Employee *e2 = &t;
    e2->work();

}
