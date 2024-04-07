#ifndef DATA_BASE_H_INCLUDED
#define DATA_BASE_H_INCLUDED

#include<bits/stdc++.h>
#include "Donar.h"
#include<windows.h>
using namespace std;

class Data_base{
    protected:
        Donor don[1000];
    
    public:
        Data_base() {}
        void Data(string s){
            static int i = 0;
            if(s == "Add New"){
                string n;
                long int r;
                int t;
                
                cout<<"\n\t\t\t Enter Name: ";
                getchar();
                getline(cin>>n, n);
                don[i].set_name(n);
                
                cout<<"\n\t\t\t Enter Roll ID (4-digit): ";
                cin>>r;
                don[i].set_roll(r);
                
                cout<<"\n\t\t\t Enter Department: ";
                cin>>n;
                don[i].set_department(n);
                
                cout<<"\n\t\t\t Enter Blood Group: ";
                cin>>n;
                don[i].set_Blood_group(n);
                
                cout<<"\n\t\t\t Units of Blood Donate: ";
                cin>>t;
                don[i].set_no_of_blood_donate(t);
                
                cout<<"\n\t\t\t Last Date of Blood Donation: ";
                cin>>n;
                don[i].set_last_date_of_blood_donation(n);
                
                cout<<"\n\t\t\t Enter Phone No. (10-digit): ";
                cin>>n;
                don[i].set_phone_no(n);

                cout<<"\n\t\t\t Enter Aadhar No. (16-digit): ";
                cin>>n;
                don[i].set_aadhar_no(n);
                
                cout<<"\n\t\t\t Enter E-mail: ";
                cin>>n;
                don[i].set_email(n);
                
                cout<<"\n\t Your data has been successfully added to the our database."<<endl;
                system("PAUSE");
                system("CLS");
                
                i++;
            }

            if(s == "View"){
                int j;
                system("cls");
                
                for(j=0; j<i; j++){
                    cout<<"\n\t\t\t\tDonar No: "<<j+1<<endl;
                    cout<<"\t\t\tName: "<<don[j].get_name()<<endl;
                    cout<<"\t\t\tRoll: "<<don[j].get_roll()<<endl;cout<<"\t\t\tDepartment.: "<<don[j].get_department()<<endl;cout<<"\t\t\tBlood Group: "<<don[j].get_Blood_group()<<endl;cout<<"\t\t\tNo. of Blood Donation: "<<don[j].get_no_of_blood_donate()<<endl;
                    cout<<"\t\t\tLast Date of Blood Donation: "<<don[j].get_last_date_of_blood_donation()<<endl;
                    cout<<"\t\t\t:-:Contact Info:-:"<<endl;
                    cout<<"\t\t\tPhone No.: "<<don[j].get_phone_no()<<endl;
                    cout<<"\t\t\tAadhar No.: "<<don[j].get_aadhar_no()<<endl;cout<<"\t\t\tE-mail: "<<don[j].get_email()<<endl;
                    cout<<"\n\n";
                    system("PAUSE");
                    system("CLS");
                }
                if(j<1) cout<<"\aPlease Insert some data first.\n\n";
            }

            if(s == "Search"){
                string s;
                system("cls");
                
                cout<<"\n\t\t\t\tEnter Name/Blood Group/Department : "<<endl;cout<<"\t\t\t\t";
                cin>>s;
                
                for(int j=0; j<i; j++){
                    if(s == don[j].get_Blood_group() || s == don[j].get_name() || s == don[j].get_department() || s == don[j].get_aadhar_no()){
                        cout<<"\n\t\t\t\tDonar No: "<<j+1<<endl;
                        cout<<"\t\t\tName: "<<don[j].get_name()<<endl;cout<<"\t\t\tRoll: "<<don[j].get_roll()<<endl;cout<<"\t\t\tDepartment.: "<<don[j].get_department()<<endl;cout<<"\t\t\tBlood Group: "<<don[j].get_Blood_group()<<endl;cout<<"\t\t\tNo. of Blood Donation: "<<don[j].get_no_of_blood_donate()<<endl;
                        cout<<"\t\t\tLast Date of Blood Donation: "<<don[j].get_last_date_of_blood_donation()<<endl;
                        cout<<endl;
                        cout<<"\t\t\t:-:Contact Info:-:"<<endl;
                        cout<<"\t\t\tPhone No.: "<<don[j].get_phone_no()<<endl;
                        cout<<"\t\t\tAadhar No.: "<<don[j].get_aadhar_no()<<endl;cout<<"\t\t\tE-mail: "<<don[j].get_email()<<endl;
                        cout<<"\n\n";
                        system("PAUSE");
                        system("CLS");
                    }
                }
            }
        }
};

#endif // DATA_BASE_H_INCLUDED
