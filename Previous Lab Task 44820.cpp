#include<iostream>
using namespace std;

class Rectangle{
	double length, width;
	public:
		Rectangle():length(0), width(0){
			
		}
		Rectangle(double _tLength, double _tWidth):length(_tLength), width(_tWidth){
			
		}
		void Display(){
			cout<<"Length of Rectangle ="<<length<<endl;
			cout<<"Width of Rectangle ="<<width<<endl;
		}
		double calculateArea(){
			return length*width;
		}
		Rectangle operator +(const Rectangle& _obj){
			double rLength = length + _obj.length;
			double rWidth = width + _obj.width;
			return Rectangle(rLength, rWidth);
		}
		Rectangle operator -(const Rectangle& _obj){
			double rLength = length - _obj.length;
			double rWidth = width - _obj.width;
			return Rectangle(rLength, rWidth);
		}
		Rectangle operator *(const Rectangle& _obj){
			double rLength = length * _obj.length;
			double rWidth = width * _obj.width;
			return Rectangle(rLength, rWidth);
		}
		Rectangle operator /(const Rectangle& _obj){
			double rLength = length / _obj.length;
			double rWidth = width / _obj.width;
			return Rectangle(rLength, rWidth);
		}
		void operator =(const Rectangle& _obj){
			length = _obj.length;
			width = _obj.width;
		}
		bool operator ==(const Rectangle& _obj){
			if(length == _obj.length && width == _obj.width)	return true;
			else	return false;
		}


};
int main(){
	Rectangle r1(5.6, 5.4), r2(4.3, 4.7), r3;
	r3 = r2 + r2;
	r3.Display();
	r1.Display();
	r1 = r2;
	r1.Display();
	if(r2 == r1){
		cout<<"Equal"<<endl;
	}
	else
		cout<<"Not Equal"<<endl;
}
