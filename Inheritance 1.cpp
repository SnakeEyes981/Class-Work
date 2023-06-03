#include<iostream>
#include<string>
using namespace std;
class FirstClass{
	private:
		int age;
		string name;
		float height;
		char gender;
		const int x;
	public:
		FirstClass(int _age, string _name, float _height, char _sex): age(_age), name(_name), height(_height), gender(_sex), x(5){
			cout<<"Parent's Parameterized Constructor!"<<endl;
		}
		FirstClass(): age(0), name("\n"), height(0), gender('\n'), x(5){
			cout<<"Parent's Default Constructor!"<<endl;
			cout<<"No Data has Been Provided!"<<endl;
		}
		
		void getData(){
			cout<<"Please Enter Your Name: ";
			getline(cin, name, '\n');
			cout<<"Please Enter Your Height: ";
			cin>>height;
			cout<<"Please Enter Your Age: ";
			cin>>age;
			cout<<"Please Enter Your Gender: ";
			cin>>gender;
		}
		void getData(int _age, string _name, float _height, char _sex){
			age = _age;
			name = _name;
			height = _height;
			gender = _sex;
		}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		float getHeight(){
			return height;
		}
		char getSex(){
			return gender;
		}
		~FirstClass(){
			cout<<"Parent's Destructor!"<<endl;
		}
};
class DerivedClass:private FirstClass{
	public:
		DerivedClass():FirstClass(22, "Hassan Yaseen Kharal", 6.1, 'm'){
			cout<<"Child's Default Constructor!"<<endl;
		}
		DerivedClass(int _age, string _name, float _height, char _sex):FirstClass(_age, _name, _height, _sex){
			cout<<"Child's Parameterized Constructor!"<<endl;
		}
		void getData(int _age, string _name, float _height, char _sex){
			FirstClass::getData(_age, _name, _height, _sex);
		}
		void getData(){
			FirstClass::getData();
		}
		void showData(){
			cout<<"Name: "<<FirstClass::getName()<<endl;
			cout<<"Age: "<<FirstClass::getAge()<<endl;
			cout<<"Height: "<<FirstClass::getHeight()<<endl;
			if(FirstClass::getSex() == 'm' || FirstClass::getSex() == 'M')	cout<<"Gender: Male"<<endl;
			else	cout<<"Gender: Female"<<endl;
		}
		~DerivedClass(){
			cout<<"Child Destructor!"<<endl;
		}
};
int main(){
	DerivedClass objA(20, "Umar Yaseen", 6, 'm');
	objA.showData();
	DerivedClass objB;
	objB.showData();
	objA.getData(6, "Dawood Ahmed", 2.1, 'm');
	objA.showData();
}

