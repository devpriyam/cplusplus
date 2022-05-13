#include<iostream.>
#include<conio.h>
using namespace std;
class a
{
	protected:
		int x;
		public:
			void putdata()
			{
				cout<<"enter data\n";
			}
			void getdata()
			{
				cin>>x;
			}
};
class b:public a
{
	protected:
		int y;
		public:
			void showdata()
			{
				cout<<"enter y\n";
			}
			void gety()
			{
				cin>>y;
			}
			void adddata()
			{
				cout<<"after addition:\n"<<x+y;
			}
};
int main()
{
b aa;
aa.getdata();
aa.gety();
aa.adddata();
getch();
return 0;
}

