/* Chapter#9 Q#9
Hassan Yaseen 44820 */
#include<iostream>
using namespace std;

class Date{
	private:
		int date,month,year;
	public:
		Date(): date(0),month(0),year(0){
			//Default Constructor
		}
		void getDate(){
			cout<<"Enter Publishing Date."<<endl;
			cout<<"Date: ";
			cin>>date;
			cout<<"Month: ";
			cin>>month;
			cout<<"Year: ";
			cin>>year;
		}
		void showDate(){
			cout<<"Published On: "<<date<<"-"<<month<<"-"<<year<<endl;
		}
};

class Publication{
private:
    string title;
    float price;
public:
    Publication(): title("\n"),price(0){

    }
    void getData(){
        cout<<"Please Enter the Title of Book: ";
        cin>>title;
        cout<<"Please Enter Price of the Book: ";
        cin>>price;
    }
    void putData(){
        cout<<"Title of Book: "<<title<<endl;
        cout<<"Price of Book: "<<price<<" $"<<endl;
    }
};

class Publication2: private Date, private Publication{
private:
	
public:
    Publication2(){
    }
    
    void getData(){
    	Publication::getData();
        Date::getDate();
    }
    void putData(){
        Publication::putData();
		Date::showDate();
    }
};

class Book: private Publication2{
private:
    int pageCount;
public:
    //Default Constructor:
    Book(): pageCount(0){
    }

    void getData(){
        Publication2::getData();
        cout<<"Please Enter Total Pages of Book: ";
        cin>>pageCount;
    }
    void putData(){
        Publication2::putData();
        cout<<"Total Pages of the Book: "<<pageCount<<" Pages"<<endl;
    }
};

class Tape: private Publication2{
private:
    float playingTime;
public:
    //Default Constructor:
    Tape(): playingTime(0){

    }

    void getData(){
        Publication2::getData();
        cout<<"Please Enter Playing Time of the Book: ";
        cin>>playingTime;
    }
    void putData(){
        Publication2::putData();
        cout<<"Playing Time of the Book: "<<playingTime<<" Minutes"<<endl;
    }
};
void putLine(){
    cout<<"\n-------------------------------\n"<<endl;
}
int main(){
	
    Book book1;
    Tape tape1;
    book1.getData();
    putLine();
    book1.putData();
    putLine();
    tape1.getData();
    putLine();
    tape1.putData();
    putLine();
	return 0;
}
