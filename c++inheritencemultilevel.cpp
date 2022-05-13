#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	protected:
		int roll;
		public:
		void getroll()
		{
			cout<<"roll\n";
			cin>>roll;
		}
		void putroll()
		{
			cout<<"roll"<<roll;
		}
};
class b:public a
{   protected:
	int sub1,sub2;
	public:
		void getmarks()
		{
			cout<<"enter marks of subject1\n";
			cout<<"enter marks of subject2\n";
			cin>>sub1>>sub2;
		}
		void putmarks()
		{
			cout<<"marks1"<<sub1;
			cout<<"marks2"<<sub2;
		}
		
};
class c:public b
{ 
protected:
	int sports;
	public:
		void getsports()
		{
			cout<<"enter sports marks\n";
			cin>>sports;
		}
		void total()
		{
			putroll();
			putmarks();
			cout<<"total marks"<<sub1+sub2+sports;
			
		}
};
int main()
{
	c aa;
	aa.getroll();
	aa.getmarks();
	aa.getsports();
	aa.total();
	getch;
	return 0;
}
