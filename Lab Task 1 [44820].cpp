/* Chapter#9 Q#1
Hassan Yaseen 44820 */
#include<iostream>
using namespace std;

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

class Book: public Publication{
private:
    int pageCount;
public:
    //Default Constructor:
    Book(): pageCount(0){
    }

    void getData(){
        Publication::getData();
        cout<<"Please Enter Total Pages of Book: ";
        cin>>pageCount;
    }
    void putData(){
        Publication::putData();
        cout<<"Total Pages of the Book: "<<pageCount<<" Pages"<<endl;
    }
};

class Tape: public Publication{
private:
    float playingTime;
public:
    //Default Constructor:
    Tape(): playingTime(0){

    }

    void getData(){
        Publication::getData();
        cout<<"Please Enter Playing Time of the Book: ";
        cin>>playingTime;
    }
    void putData(){
        Publication::putData();
        cout<<"Playing Time of the Book: "<<playingTime<<" Hours"<<endl;
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
