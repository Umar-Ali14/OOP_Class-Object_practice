#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    string department;

public:
    Teacher() {
	    cout<<"Default Constructor"<<endl;
	}

    Teacher(string name, string department){
        this->name = name;
        this->department = department;
    }
    void displayTeacherInfo() {
        cout << "Teacher Name    : " << name << endl;
        cout << "Department      : " << department << endl;
    }
};
class Course {
private:
    string courseName;
    string courseCode;

public:
    Course(){
    	cout<<"Default Constructor"<<endl;
	}

    Course(string courseName, string courseCode) {
        this->courseName = courseName;
        this->courseCode = courseCode;
    }

    void displayCourseInfo() {
        cout << "Course Name     : " << courseName << endl;
        cout << "Course Code     : " << courseCode << endl;
    }
};
class University {
private:
    string universityName;
    Teacher teacher;   
    Course course;     

public:
    
    University(string uniName, Teacher t, Course c) {
        universityName = uniName;
        teacher = t;
        course = c;
    }
    
    void displayUniversityInfo() {
        cout << "University Name : " << universityName << endl << endl;
        teacher.displayTeacherInfo();
        course.displayCourseInfo();
        }
};

int main(){
	Teacher t("Ali", "IT");
    Course c("OOP", "CS101");
    
    University u("Punjab University",t,c);
    
    u.displayUniversityInfo();
	
}












