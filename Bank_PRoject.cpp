// Bank PRoject in cpp
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include<time.h>

void log_in();
using namespace std;
class Account
{
private:
    long int account_no;
    int id;
    int age;
    char gender;
    char address[50];
    long long int mobile_no;
    char Holder_name[20];
    char Type;
    float withd =0,deposit =0;

public:
    void create_Account();
    void Modify_Account();
    void Deposit();
    void Withdraw();
    void Introduction();
    void show_accounts();
    void Store_data() ;
};
void Account ::Introduction()
{
    int wish;

    cout << "----------------------Welcome To My BAnk PRoject ----------------------\n\n\n ";
    cout << "                       Creater NAme : Bhoopender Kumar\n\n \t\t\t\t\t\t\t\t\t Dashboard  ";

    cout << "1. Create Account\n2. Modify Account\n3. Deposit\n4. Withraw\n 5.Dele";
    cout << "Enter your Choice ";
    cin >> wish;
    switch (wish)
    {
    case 1:
        create_Account();
        break;
     case 2:
        Modify_Account();
        break;
     case 3:
     Deposit();
     break;
     case 4:
         Withdraw();
         break;
    default:
        cout << "Thanks ";
    }
}
void Account ::create_Account()
{
    fstream New_AC;
    New_AC.open("candidate_profile.txt",ios::app);
    system("cls");
    system("color 40");
    cout << "Enter Your Name : ";
    cin.ignore();
    cin.getline(Holder_name, 20);
    cout << "Enter your age : ";
    cin >> age;
    cout << "Gender : ";
    cin.ignore();
    cin >> gender;
    cout << "Mobile no. : ";
    cin >> mobile_no;
    cout << "Address : ";
    cin.ignore();
    cin.getline(address, 50);
    cout << "Account Type (S/C) : ";
    cin >> Type;
    
    cin.ignore();
     New_AC << Holder_name  << " "<< age <<" " <<gender<<" " << mobile_no <<" " << address << " "<<Type <<" " << account_no;
cout<<"Your Account Opened Successfully \n";
system("color 1");
 srand(time(0));
account_no= rand()%1000000000000;
id = rand()%10000;
cout << "Your Account no. :  " <<account_no<<"\n"<<"Customer ID : " <<id;
}
void Account :: Modify_Account()
{
    fstream New_AC;
    cout <<"Please Enter your Correct Details : ";
    create_Account();
     New_AC.open("candidate_profile.txt",ios::app|ios::binary);
      New_AC << Holder_name  << " "<< age <<" " <<gender<<" " << mobile_no <<" " << address << " "<<Type <<" " << account_no;
New_AC.close();
}
void Account :: Deposit()
{
    ofstream balance;
    balance.open("balance.txt",ios::app);
    system("cls");
    float ammount = 0;
     float total =0;
    cout<<"\nEnter Amount Do You Want to deposit : ";
    cin >> ammount;
    deposit +=ammount; 
    cout << deposit;
    //getdata();
    balance.write((char*)&deposit,sizeof(deposit));
    balance.close();
}
void Account :: Withdraw()
{
    system("cls");
    float ammount = 0;
    float balance = deposit - ammount;
    //float withd;
    cout <<"\nEnter Amount Do you want to withdraw : ";
    cin >>ammount;
    cout  << "\n "<< balance;

} 
void log_in ()
{
    char U_name[20];
    char pass[10];
    cout <<"Enter your user id and password" <<endl;
   // cin.ignore();
cout << "User Id : ";
    cin>>U_name;
cout << "Password : ";
cin.ignore();
cin >> pass;
strcmp(U_name,"candidate_profile.txt");
system("pause");
if (strcmp == 0)
cout << "User name is Correct";
}
int main()
{
    cout << "WElcome" <<endl;
    //log_in();
    Account A;
     A.Introduction();
    return 0;
}
