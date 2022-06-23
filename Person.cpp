// аня супер клас
//хто не вірить тому в глаз
//

#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person():fullName("None"), age(0), country("None"), mail("None"), phoneNumber("None"){}
Person::Person (const string &c_FullName,const int &c_Age,const string &c_Country,const string &c_Mail, const string &c_PhoneNumber):fullName(c_FullName),
                age(c_Age), country(c_Country),mail(c_Mail),phoneNumber(c_PhoneNumber){}
 string Person::Info() const
{
    ostringstream oss;

    oss << "Full name: " << GetName() << "\n"
        << "Age: " << GetAge() << "\n"
        << "Country: " << GetCountry() << "\n"
        << "E-mail: " << GetMail() << "\n"
        << "Phone number: " << GetPhoneNumber() << "\n";

    return oss.str();
}
