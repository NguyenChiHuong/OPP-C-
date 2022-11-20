#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
using namespace std;

class PATIENT{
	public:
	char ProfileCode[10];//Ma ho so
	char Name[10];
	int DateOfBirth;//Ngay sinh
	char Diagnostic[10];//Chuan doan
	public:
		virtual void input(){
			cout<<"-Input profile code : ";
			fflush(stdin);
			cin.getline(ProfileCode,10);
			cout<<"-Input name: ";
			cin.getline(Name,10);
			cout<<"-input date of birth: ";
			cin>>DateOfBirth;
			cout<<"-Input diagnostic: ";
			fflush(stdin);
			cin.getline(Diagnostic,10);
		}
		
	    virtual void output()
		{
			cout<<"-----------------------------\n";
			cout<<"Profile code:"<<ProfileCode<<endl
			    <<"Name:"<<Name<<endl
			    <<"Date of birth:"<<DateOfBirth<<endl
			    <<"Diagnostic:"<<Diagnostic<<endl;
	    }
};
class INPATIENT:public PATIENT{
	private:
		int DayIn;
		int DayOut;
		char FacultyName[10];//Ten khoa
		int NumberOfBeds;//So giuong
	public:
	    void input()
		{
		    PATIENT::input();
			cout<<"+Input day in: ";
			cin>>DayIn;
			cout<<"+Input day out: ";
			cin>>DayOut;
			cout<<"+Input faculty name: ";
			fflush(stdin);
			cin.getline(FacultyName,10);
			cout<<"+Input number of beds: ";
		    cin>>NumberOfBeds;
		}
		
	    void output()
		{
			PATIENT::output();
			cout<<"Day in:"<<DayIn<<endl
			    <<"Day out:"<<DayOut<<endl
			    <<"Faculty name:"<<FacultyName<<endl
			    <<"Number of beds:"<<NumberOfBeds<<endl;
			cout<<"------------------------------\n";
		}
		void compare(INPATIENT PT[] ,int n){
			int b;
			cout<<"->Input date of birth: ";
			cin>>b;
			for(int i=0;i<n;i++){
				if(PT[i].DateOfBirth > b){
					cout<<"Profile: "<<PT[i].ProfileCode<<endl;
				}
			}
		}
};

class OUTPATIENT:public PATIENT{
	private:
		int MoveDay;//Ngay chuyen
		char PlaceOfTransfer[10];//Noi chuyen
	public:
	    void input()
	    {
	    	PATIENT::input();
			cout<<">Input move day: ";
			cin>>MoveDay;
			cout<<">Input place of tranfer: ";
			fflush(stdin);
			cin.getline(PlaceOfTransfer,10);
	   }
	    void output()
		{
			PATIENT::output();
			cout<<"Move day:"<<MoveDay<<endl
			    <<"Place of transfer:"<<PlaceOfTransfer<<endl;
			cout<<"-------------------------------\n";
	    }
	    void compares(OUTPATIENT PT[] ,int n){
			int b;
			cout<<"->Input date of birth: ";
			cin>>b;
			for(int i=0;i<n;i++){
				if(PT[i].DateOfBirth > b){
					cout<<"Profile: "<<PT[i].ProfileCode<<endl;
				}
			}
		}
};
int main(){
	PATIENT *PT[2];
	int n;
	PT[0] = new INPATIENT;
	PT[1] = new OUTPATIENT;
	for(int i=0;i<=1;i++){
		cout<<"PATIENT "<<i+1<<endl;
		PT[i]->input();
	}
	continues:int a;
	cout<<"\t1.In patient"<<endl;
	cout<<"\t2.Out patient"<<endl;
	cout<<"\t3.Compare date of birth";
	cout<<"Invite you input: ";
	do{
		cin>>a;
		if(a<0 || a>2)
			cout<<"!You import false,please input too:";
	}while(a<0 || a>2);
		switch(a){
		case 1:
			cout<<"\t -IN PATIENT-"<<endl;
			PT[0]->output();
			break;
		case 2:
			cout<<"\t -OUT PATIENT-"<<endl;
			PT[1]->output();
			break;
		case 3: 
			cout<<"-PROFILE AFTER COMPARISON-"<<endl;
			int n;
			compare(PT,a);
			break;
		stop:case 0: exit(0);
	    }
	char answer;
	cout<<"continue ?: ";
	cin>>answer;
	if((answer=='y') || (answer=='Y')) goto continues;
	if((answer=='n') || (answer=='N')) goto stop;
	system("pause");
	return 0;
}

