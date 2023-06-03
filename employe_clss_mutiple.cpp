#include<iostream>
using namespace std;

class Employee{
	private:
		string name;
		int emp_no;
	public:
		void get_data(){
			
				cout<<"Enter the name: ";
				cin>>name;
				cout<<"Enter emp no ";
				cin>>emp_no;
			}
		
};

class Student{
		private:
			string highest_degree;
			int date_of_completion;
		
		public:
			void get_data(){
				cout<<"Enter the highest degree: ";
				cin>>highest_degree;
				cout<<"Enter the completion date ";
				cin>>date_of_completion;
			}
		
};

class Scientist:private Employee, private Student{
		private:
		int publications;
	public:
		void get_data(){
			Employee::get_date();
				cout<<"Enter the publications: ";
				cin>>publications;
			Student::get_data();
			}
		
		
};

class Manager:private Employee, private Student{
		private:
		string title;
		int club_dues;
	public:
		void get_data(){
			Employee::get_data();
			cout<<"Enter title: ";
			cin>>title;
			cout<<"Enter club dues";
			cin>>club_dues;
			Student::get_data();
			
		}
};

class Labour: public Employee, public Student{
	
};
int main(){
	
	return 0;
}
