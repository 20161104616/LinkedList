#include<iostream>
using namespace std;

struct student
{
	char name[50];
	char num[12];
	int age;
	struct student *next;
};


int main()
{
	struct student *p,*q,*head;
	char s=1;
	head=new student;
	q=head;
	p=q;
	cout<<"name:";
	cin>>head->name;
	cout<<"num:";
	cin>>head->num;
	cout<<"age:";
	cin>>head->age;
	while(cout<<"Òª¼ÌÐøÂð£¿\nYES(Y)orNO(N)?",cin>>s,s=='y'&&'Y')
	{
		p=new student;
		q->next=p;
		q=p;
		cout<<"name:";
		cin>>p->name;
		cout<<"num:";
		cin>>p->num;
		cout<<"age:";
		cin>>p->age;
		p->next=NULL;
	}
	p=head;
	while(p!=NULL)
	{
		cout<<"name:"<<p->name<<" "<<"num:"<<p->num<<" "<<"age:"<<p->age<<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}
	while(q);
	return 0;
}

