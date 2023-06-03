#include<iostream>
#include<iomanip>

using namespace std;
class Time{
	private:
		int hour, min, sec;
		char mode;
	public:
		//Default Constructor
		Time(): hour(0), min(0), sec(0), mode('\0'){
		}
		// Param. Constructor
		Time(int _hour, int _min, int _sec, char _mode): hour(_hour), min(_min), sec(_sec), mode(_mode){
		}
		// Param. Constructor
		Time(int _hour, int _min, int _sec): hour(_hour), min(_min), sec(_sec), mode('a'){
			if(_sec > 60){
				_min += (_sec / 60);
				min = _min;
				sec = _sec % 60;
			}
			if(_min > 60){
				_hour += (_min / 60);
				hour = _hour;
				min = _min % 60;
			}
			if(_hour > 12){
				if(_hour < 24){
					hour = _hour - 12;
					mode = 'p';
				}
				if(_hour >= 24){
					hour = _hour / 24;
					mode = 'a';
				}
			}
		}
		void showTime(){
			cout<<"Hours"<<"|"<<"Minutes"<<"|"<<"Seconds"<<endl;
			cout<<setw(3)<<hour<<":"<<setw(7)<<min<<":"<<setw(7)<<sec<<" "<<mode;
		}
		// Param. Constructor
		Time (const Time& t1): hour(t1.hour), min(t1.min), sec(t1.sec), mode(t1.mode){
		}
		int getHours(){
			return hour;
		}
		int getMinutes(){
			return min;
		}
		int getSeconds(){
			return sec;
		}
		char getMode(){
			return mode;
		}
		void setHours(int _hour){
			if(_hour > 12){
				mode = 'a';
			}
		}
		void setMinutes(int _min){
		}
		void setSeconds(int _sec){
		}
		void setMode(char _mode){
		}
		void displayTime (){
		}
		double convertToSeconds(){
		}
		double convertToMinutes(){
		}
		double convertToHours(){
		}
		void convertTo24HourFormat(){
		}
		void incrementSeconds(int){
		}
		void incrementMinutes(int){
		} 
};
int main(){
	Time t1(10,190,170);
	t1.showTime();
}
