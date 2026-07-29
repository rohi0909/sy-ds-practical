#include<iostream>
#include<string>
using namespace std;
struct student
{
	string studentName;
	int studentAge;
	long int sudentPrn;
	long int mobileNo;
};
void  addstudent(student s[100],int n)
{
for(int i=0;i<n;i++)
{
	cout<<"\nEnter details of student"<<i+1<<endl;
	cout<<"student name is:";
	cin>>s[i]. studentName;
	cout<<"student age is:";
	cin>>s[i]. studentAge;
	cout<<"student prn is:";
	cin>>s[i]. sudentPrn;
	cout<<"student mobile no is:";
	cin>>s[i]. mobileNo;
	}	
}
void displaystudent( student*s,int n)
{
	cout<<"\n------student record-----\n";
	for( int i=0;i<n;i++)
	{
		cout<<"\nstudent"<<i+1<<endl;
		cout<< " \nstudent name:"<< s[i].studentName<< endl;
		cout<< "\nstudent age:"<<s[i].studentAge<<endl;
		cout<< "\nstudent prn:"<<s[i].sudentPrn<<endl;
		cout<< "\nstudent mobile:"<<s[i].mobileNo<<endl;
	}
}
int main()
{
	student s[100];
	int n;
	cout<<"Enter number of student:";
	cin>>n;
	addstudent(s,n);
	displaystudent(s,n);
	return 0;
}