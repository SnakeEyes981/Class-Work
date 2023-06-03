#include<iostream>
using namespace;

class Employee{
   private:
   	string name;
   	int emp_no;
   public:
   	void get_data(){
   		cout<<"enter name";
		cin>>name;
   		cout<<"enter emp_no";
   		cin>>emp_no;
	   }
	void print_data(){
		
	}
};
class Student{
	private:
		string highest_degree;
		int year;
	public:
		
		void get_data(){
		
	  cout<<"enter hishest degree";
		cin>>highest_degree;
   		cout<<"enter year of completion";
   		cin>>year;	
   		
		}
};
class Scientist:public Student, public Employee{
	private:
		int publication;
	public:
		void get_data(){
		Employee::get_data();
		
   		cout<<"enter publicaton: ";
		cin>>publication;
		Student::get_data();
	   }
		
};
class Manager:private Student, private Employee{
	private:
		string title;
		int club_dues;
	public:
		void get_data(){
		Employee::get_data();
   		cout<<"enter title ";
		cin>>title;
		cout<<"enter club dues: ";
		cin>>club_dues;
		Student::get_data();
	   }
		
};
class Labour:public Student, public Employee{
	
};


int main(){
	
}
