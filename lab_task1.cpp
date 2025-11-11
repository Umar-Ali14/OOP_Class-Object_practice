#include<iostream>
using namespace std;

class student {
private: 
	string name;
	int age;
	float gpa;
	
public:
 
    void setName(string n){
    	name = n ;
    }
	void setAge(int a){
		age = a;
    }   
    void setGPA(float g){
    	
		gpa = g; 	
	}
	
	string getName()const{
	return name;
	}
	
    int getAge() const{
	return age;
	}
	
	float getGPA() const{
	return gpa;
	}
};	
	
int main(){
	student s1, s2;
	
	s1.setName("Ali Ahmad");
	s1.setAge(24);
	s1.setGPA(3.02);
	
	s2.setName("Awwab Ali");
	s2.setAge(23);
	s2.setGPA(2.9);
    
    
    cout<<"STUDENT 1"<<" "<<"NAME: "<<s1.getName()<<" AGE: "<<s1.getAge()<<" GPA: "<<s1.getGPA()<<endl;
    
    cout<<"STUDENT 2"<<" "<<"NAME: "<<s2.getName()<<" AGE: "<<s2.getAge()<<" GPA: "<<s2.getGPA()<<endl;
    
    student *ptr = new student ;
    
    ptr->setName("Umar Ali");
    ptr->setAge(22);
    ptr->setGPA(3.4);
    
    cout<<"STUDENT 3"<< " NAME: "<<ptr->getName()<<" AGE: "<<ptr->getAge()<<" GPA: "<<ptr->getGPA()<<endl;
    
    delete ptr ;
    return 0 ;
}
    
	
	
	

