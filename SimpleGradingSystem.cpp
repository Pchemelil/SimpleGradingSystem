#include <iostream>
using namespace std;

int main()
{
	string name;
	int grade;
	cout<<"please enter student name:\n";
	getline(cin,name);
	cout<<"Please enter student grade:\n";
	cin>>grade;
	if(grade>=70){
		cout<< name <<"'s grade is a: A";
	}
	else if(grade>=60&&grade<=69){
		cout<< name <<"'s grade is a: B";
	}
	else if(grade>=50&&grade<=59){
		cout<< name <<"'s grade is a: C";
	}
	else if(grade>=40&&grade<=49){
		cout<< name <<"'s grade is a: D";
	}
	else if(grade<40){
		cout<< name <<"'s grade is a: F";
	}
	
	return 0;
}
	
