#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;

class Contact {
    protected:
       string phone_no;
       string email;
       string aadhar_no;
       
    public:
       void set_phone_no(string);
       void set_email(string);
       void set_aadhar_no(string);
       string get_phone_no();
       string get_email();
       string get_aadhar_no();
};

void Contact::set_phone_no(string p){
    phone_no = p;
}

void Contact::set_aadhar_no(string q){
    aadhar_no = q;
}

void Contact::set_email(string e){
    email = e;
}

string Contact::get_phone_no(){
    return phone_no;
}

string Contact::get_aadhar_no(){
    return aadhar_no;
}

string Contact::get_email(){
    return email;
}

#endif // CONTACT_H_INCLUDED
