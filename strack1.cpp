#include <iostream>
using namespace std;

struct Date{
		int mm;
		int dd;
		int yy;
};
struct data{
	char name[25];
	int age;
	struct Date hireDate;
};

int main()
{
	data d[20];
	int i , j;
	char ch,y,n;

    for(i=0;i<3;i++)
    {
		cout << "Please enter Name of the employee" << endl;
		cin.get(d[i].name,20) ;

		cout << "Please enter age" << endl;
		cin >> d[i].age ;
			cout << "Please enter date (dd,mm,yyyy)" << endl;
		cin >> d[i].hireDate.dd;
		cin >> d[i].hireDate.mm;
		cin >> d[i].hireDate.yy;
		cout << "Would like to enter more data? (y/n)" << endl;
		cin >> ch;
		if(ch == y)
		{
            continue;
		}
		if(ch == n)
            {
            break;
		}
	}
	for (int j=0; j < i; j++)
	{
		cout << endl << d[j].name;
	}
}
