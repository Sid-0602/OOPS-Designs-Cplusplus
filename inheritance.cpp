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
};


int main(){
    
    //this is object: 
    Employee employee1("Sharan","google",25);
    Employee employee2("Rajesh","Microsoft",31);

    //child class developers objects: 
    Developer developer1("Sid","JPMC",24,"C++/JS");
    developer1.develop();
    developer1.Fixbug();

    Developer developer2("Sam","MS",33,"Java/GO");
    developer2.develop();
    developer2.Fixbug();

    developer1.askPromotion();

    //child class for teacher: 
    Teacher teacher1("Uma","FIITJEE",31,"Science");
    teacher1.preparedLesson();
    teacher1.askPromotion();

}
