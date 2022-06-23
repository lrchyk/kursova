#ifndef IRCHYK_PERSON_H
#define IRCHYK_PERSON_H
#include <string>
#include <iostream>
#include <sstream>

using namespace std;


class Person
{
private:
        string fullName;
        int age;
        string country;
        string mail;
        string phoneNumber;
public:
        Person();
        Person (const string &c_FullName,const int &c_Age,const string &c_Country,const string &c_Mail, const string &c_PhoneNumber);
    virtual string Info() const;
        string GetName() const
    {
        return fullName;}
        int GetAge() const{return age;}
        string GetCountry() const{return country;}
        string GetMail() const{return mail;}
        string GetPhoneNumber() const{return phoneNumber;}
};


#endif //IRCHYK_PERSON_H
