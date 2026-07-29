#include<iostream>
using namespace std;

int main()

{
	int marks;
int*ptr;
ptr=&marks;
cout<<"enter student marks:";
cin>>*ptr;
cout<<"student marks are:"<<*ptr<<endl;
}
