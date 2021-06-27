#include<iostream>
#include<string.h>
using namespace std;
class Bhuvi 
{
    //public :
    int num;
    public :
    string Name;
    //int Name;
    //cout << "Enter Two Integer numbers : " << endl;


};
class Rahul{
public :
int num1,num2;
int sum;
//sum = num1 + num2;

};
int main ()
{
    Bhuvi b;
    Rahul r;
    //r.sum = r.num1 + r.num2;
    //cout << "Enter a num :  "<< endl;
    //cin >> b.num;
//cout << b.num << endl;
cout << "Enter your Name : "<<endl;
//b.Name = getchar();
cin >> b.Name;
//fgets(b.Name,sizeof(b.Name),stdin);
cout << b.Name;
cout << " \t Enter two Numbers : "<< endl;
cin >> r.num1 >> r.num2;
    r.sum = r.num1 + r.num2;

cout << r.sum;

return 0;
}