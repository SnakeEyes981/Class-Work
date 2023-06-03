#include<iostream>
using namespace std;
class Cube{
	double length, width, height;
	public:
		Cube(): length(0), width(0), height(0){
		}
		Cube(double _length, double _width, double _height): length(_length), width(_width), height(_height){
		}
		void Display(){
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
			cout << "Height: " << height << endl;
		}
		Cube operator + (const Cube &obj){
			double tLength = length + obj.length;
			double tWidth = width + obj.width;
			double tHeight = height + obj.height;
			return Cube(tLength, tWidth, tHeight);
		}
		Cube operator - (const Cube &obj){
			double tLength = length - obj.length;
			double tWidth = width - obj.width;
			double tHeight = height - obj.height;
			return Cube(tLength, tWidth, tHeight);
		}
		Cube operator * (const Cube &obj){
			double tLength = length * obj.length;
			double tWidth = width * obj.width;
			double tHeight = height * obj.height;
			return Cube(tLength, tWidth, tHeight);			
		}
		Cube operator / (const Cube &obj){
			double tLength = length / obj.length;
			double tWidth = width / obj.width;
			double tHeight = height / obj.height;
			return Cube(tLength, tWidth, tHeight);
		}
		Cube operator = (const Cube &obj){
			length = obj.length;
			width = obj.width;
			height = obj.height;
		}
		bool operator == (const Cube &obj){
			if(length == obj.length && width == obj.width && height == obj.height)	return true;
			else	return false;
		}
};
using namespace std;
int main(){
	Cube c1(5.6, 2.4, 4.7), c2(4.4, 2.6, 5.3), c3;
	c3 = c1 + c2;
	c3.Display();
	c3 = c1 - c2;
	c3.Display();
	c3 = c1 * c2;
	c3.Display();
	c3 = c1 / c2;
	c3.Display();
	c3 = c1;
	if(c3 == c1) cout << "Equal" << endl;
	else cout << "Not Equal" << endl;
	
}

