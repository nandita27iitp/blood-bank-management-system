#include <bits/stdc++.h>
#include <windows.h>
#include "Data_base.h"
using namespace std;

int main()
{
    Data_base db;
    while(1)
    {
        int n;
        cout<<"\n\t\t===================================================================";
        cout<<"\n\t\t|                      Welcome to \"HEMOHUB\"                       |"<<endl;
        cout<<"\t\t===================================================================";
        cout<<"\n\t\t               A Simple Blood Bank Management System               "<<endl;
        
        cout<<"\n\t\t\t\t      ::Enter Your Choice::"<<endl;
        cout<<"\n\t\t\t\t      Add New Record\t\t(1)\n\t\t\t\t      View List Of Donars\t(2)\n\t\t\t\t      Search Donar\t\t(3)\n\t\t\t\t      Exit    \t\t\t(0)"<<endl;
        cout<<"\t\t\t\t      : ";
        cin>>n;

        switch (n){
            case 1:
            {
                system("cls");
                db.Data("Add New");
            }
            break;
            
            case 2:
            {
                system("cls");
                db.Data("View");
            }
            break;
            
            case 3:
            {
                system("cls");
                db.Data("Search");
            }
            break;
            
            case 0:
            {
                cout<<"\n\n\t\t\t\t  Brought To You By @nandita27iitp";
                return 0;
            }
            break;
            
            default:
            {
                system("cls");
                cout<<"\a\aPlease Enter your choice CORRECTLY:\a\a"<<endl;
            }
            break;
        }
    }
    return 0;
}
