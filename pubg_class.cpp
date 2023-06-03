#include<iostream>

using namespace std;


class Player{
	private:
		int health;
		string name;
	public:
		Player():health(0), name("\0"){
		}
		Player(int h, string n):health(h),name(n){
			
		}
		
		void display_details(){
			cout<<"Name is: "<<name<<endl;
			cout<<"Health is: "<<health<<endl;
		}
		
};

class Shooter:public Player{
	private:
		int ammo;
	public:
//		Shooter():ammo(0){
//		}
		Shooter(int h, string n, int a):Player(h,n),ammo(a){

		}
		
		void display_details(){
			Player::display_details();
			cout<<"Value of ammo is: "<<ammo<<endl;
			
		}
		
};


int main(){
	Shooter s1(100, "ali", 200);
	s1.display_details();

}