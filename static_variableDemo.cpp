#include<iostream>
using namespace std;
class student{
	private:
		string name;
	public:
		static int total;
		student(string n){
			name=n;
			total++;
		}
		void showname(){
			cout<<"STUDENT NAME : "<<name<<endl;
	}
		
};
int student::total=0;
int main(){
	student s1(" Umar ");
	student s2(" Saqlain ");
	student s3(" Ali ");
	s1.showname();
	cout<<student::total;
	return 0;
}
