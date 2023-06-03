/* Assignment # 1
Hassan Yaseen 44820 */
#include<iostream>
#include<string>
using namespace std;

//------------------------------------* Cricketer *-------------------------------------
class Cricketer{
	private:
		string name, dateOfBirth;
		int shirtNo, odiRating, testRating, t20Rating, startYear;
		
	public:
		//Default Constructor.
		Cricketer() : name("\0"), dateOfBirth("\0"), shirtNo(0), odiRating(0), testRating(0), t20Rating(0), startYear(0){
			cout<<"Cricketer Default Constructor Has Been Initialized!"<<endl;
		}
		
		//Parameterized constructor.
		Cricketer(string n, int sNumber, string dob, int oRate, int tRate, int t20Rate, int sYear) : name(n), dateOfBirth(dob), shirtNo(sNumber), odiRating(oRate), testRating(tRate), t20Rating(t20Rate), startYear(sYear){
			cout<<"Cricketer Parameterized Constructor Has Been Initialized!"<<endl;
		}
		
		//Member Functions
		int calculateAge(){
			//Note: dateOfBirth Must Be Taken in Following Format for this Function to Work Properly ==> [YYYY-MM-DD]
			int birthYear = stoi(dateOfBirth);
			int age = 2023-birthYear;
			return age;
		}		
		int calculateExperience(){
			int experience = 2023-startYear;
			return experience;
		}
		void changeODIRating(int temp){
			odiRating = temp;
			cout<<"ODI Rating has been Updated to : "<<odiRating<<endl;
		}
		void changeTestRating(int temp){
			testRating = temp;
			cout<<"Test Rating has been Updated to : "<<testRating<<endl;
		}
		void changeT20Rating(int temp){
			t20Rating = temp;
			cout<<"T20 Rating has been Updated to : "<<t20Rating<<endl;
		}
		
		~Cricketer(){
			cout<<"Cricketer Object has been Destroyed!"<<endl;
		}
};
//-------------------------------------*  Bowler *--------------------------------------
class Bowler: public Cricketer{
	private:
		string type;
		int totalWickets , matchesPlayed;
	
	public:
		Bowler() : type("\0"), totalWickets(0), matchesPlayed(0){
			cout<<"Bowler Default Constructor Has Been Initialized!"<<endl;
		}
		Bowler(string tempType, int tempWickets, int tempMatchesPlayed, string n, int sNumber, string dob, int oRate, int tRate, int t20Rate, int sYear):Cricketer(n, sNumber, dob, oRate, tRate, t20Rate, sYear), type(tempType), totalWickets(tempWickets), matchesPlayed(tempMatchesPlayed){
			cout<<"Bowler Parameterized Constructor Has Been Initialized!"<<endl;
		}
		int calculateBowlAverage(){
			int avg = totalWickets/matchesPlayed;
			return avg;
		}
		void updateMatches(int temp){
			matchesPlayed += temp;
			cout<<"Total Matches Played : "<<matchesPlayed<<endl;
		}
		void updateWickets(int temp){
			totalWickets += temp;
			cout<<"Total Wickets Taken : "<<totalWickets<<endl;
		}
		~Bowler(){
			cout<<"Bowler Object Has Been Destroyed!"<<endl;
		}
};
//------------------------------------*  Batsman  *-------------------------------------
class Batsman: public Cricketer{
	private:
		string type;
		int totalRuns , bestScore , matchesPlayed;
	public:
		Batsman() : type("\0"), totalRuns(0), bestScore(0), matchesPlayed(0){
			cout<<"Batsman Default Constructor Has Been Initialized!"<<endl;
		}
		Batsman (string tempType, int tempRuns, int tempBestScore, int tempMatchesPlayed, string tempName, int tempShirtNumber, string tempDob, int tempOdiRate, int tempTestRate, int tempT20Rate, int tempStartYear):Cricketer(tempName, tempShirtNumber, tempDob, tempOdiRate, tempTestRate, tempT20Rate, tempStartYear), type(tempType), bestScore(tempBestScore), totalRuns(tempRuns), matchesPlayed(tempMatchesPlayed){
			cout<<"Batsman Parameterized Constructor Has Been Initialized!"<<endl;
		}
		
		int calculateBatAverage(){
			int avg = totalRuns/matchesPlayed;
			return avg;
		}
		void  updateMatches(int temp){
			matchesPlayed += temp;
			cout<<"Total Matches Played : "<<matchesPlayed<<endl;
		}
		void  updateRuns(int temp){
			totalRuns += temp;
			cout<<"Total Runs Scored : "<<totalRuns<<endl;
		}
		~Batsman(){
			cout<<"Batsman Object Has Been Destroyed!"<<endl;
		}
};
//-----------------------------------* All Rounder *------------------------------------
class AllRounder: public Bowler, public Batsman{
	public:
		AllRounder(){
			cout<<"AllRounder Default Constructor Has Been Inititalized!"<<endl;
		}
		~AllRounder(){
			cout<<"AllRounder Object Has Been Destroyed!"<<endl;
		}
};
//--------------------------------------------------------------------------------------

int main(){
//	Code Written Below ==> For Testing Purpose Only. You can also test using your own code.
//	string name, dob, type;
//	int shirtNumber, odiRate, testRate, t20Rate, stYear, totalRuns, totalMatches, totalWickets, bestScore, ATB;
//	cout<<"Please Select Player Type:\n1. Bowler\n2. Batsman\n3. All Rounder\n"<<endl;
//		type = "Bowler";
//		cout<<"Enter Player Name: ";
//		cin>>name;
//		cout<<"Enter Player's Shirt Number: ";
//		cin>>shirtNumber;
//		cout<<"Enter Date of Birth [Format => YYYY-MM-DD]: ";
//		cin>>dob;
//		cout<<"Enter ODI Rating: ";
//		cin>>odiRate;
//		cout<<"Enter Test Rating: ";
//		cin>>testRate;
//		cout<<"Enter T20 Rating: ";
//		cin>>t20Rate;
//		cout<<"Starting Year [Format => YYYY]: ";
//		cin>>stYear;
//		cout<<"Enter Total Matches Played: ";
//		cin>>totalMatches;
//		cout<<"Enter Total Wickets Taken: ";
//		cin>>totalWickets;
//		Bowler b1(type, totalWickets, totalMatches, name, shirtNumber, dob, odiRate, testRate, t20Rate, stYear);
//		cout<<"Age == "<<b1.calculateAge()<<endl;
//		cout<<"Experience == "<<b1.calculateExperience()<<endl;
//		b1.changeODIRating(129);
//		b1.changeTestRating(31);
//		b1.changeT20Rating(211);
//		cout<<"Bowl Average: "<<b1.calculateBowlAverage()<<endl;
//		b1.updateMatches(31);
//		b1.updateWickets(41);
//		cout<<"Bowl Average: "<<b1.calculateBowlAverage()<<endl;
//		
//		type = "Bowler";
//		cout<<"Enter Player Name: ";
//		cin>>name;
//		cout<<"Enter Player's Shirt Number: ";
//		cin>>shirtNumber;
//		cout<<"Enter Date of Birth [Format => YYYY-MM-DD]: ";
//		cin>>dob;
//		cout<<"Enter ODI Rating: ";
//		cin>>odiRate;
//		cout<<"Enter Test Rating: ";
//		cin>>testRate;
//		cout<<"Enter T20 Rating: ";
//		cin>>t20Rate;
//		cout<<"Starting Year [Format => YYYY]: ";
//		cin>>stYear;
//		cout<<"Enter Total Matches Played: ";
//		cin>>totalMatches;
//		cout<<"Enter Total Runs: ";
//		cin>>totalRuns;
//		cout<<"Enter All Time Best: ";
//		cin>>ATB;
//		
//		Batsman bt1(type, totalRuns, ATB, totalMatches, name, shirtNumber, dob, odiRate, testRate, t20Rate, stYear);
//		
//		cout<<"Age == "<<bt1.calculateAge()<<endl;
//		cout<<"Experience == "<<bt1.calculateExperience()<<endl;
//		bt1.calculateBatAverage();
//		cout<<"Bat Average: "<<bt1.calculateBatAverage()<<endl;
//		bt1.updateMatches(31);
//		bt1.updateRuns(42113);
//		cout<<"Bat Average: "<<bt1.calculateBatAverage()<<endl;
//		
//		AllRounder a1;
}
