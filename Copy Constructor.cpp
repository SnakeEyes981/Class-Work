#include<iostream>
using namespace std;
class DateAndTime{
	private:
		int hr, min, sec;
		int date, month, year;
	public:
		DateAndTime():hr(0),min(0),sec(0),date(0),month(0),year(0){
			
		}
		DateAndTime(int _hr, int _min, int _sec, int _date, int _month, int _year):hr(_hr),min(_min),sec(_sec),date(_date),month(_month),year(_year){
			
		}
		DateAndTime(const DateAndTime& d):hr(d.hr),min(d.min),sec(d.sec),date(d.date),month(d.month),year(d.year){
			
		}
		
		void showTime(){
			cout<<"Time:\n";
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}
		void showDate(){
			cout<<"Date:\n";
			cout<<date<<"-"<<month<<"-"<<year<<endl;
		}

};
int main(){
	DateAndTime d2(7,43,21,22,7,2000);
	DateAndTime d1 = d2;
//	cout<<"----------------------\n";
//	d1.showDate();
//	d1.showTime();
	cout<<"----------------------\n";
	d2.showDate();
	d2.showTime();
	cout<<"----------------------\n";
	d1 = d2;
	d1.showDate();
	d1.showTime();
	cout<<"----------------------\n";
}
