#include "Person.h"
#include "Teacher.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


Teacher::Teacher():Person(), experience(0), category("None"), salary(0){}
Teacher::Teacher(const string &c_FullName,const int &c_Age,
                 const string &c_Country,const string &c_Mail,
                 const string &c_PhoneNumber, const int &c_Experience,
                 const string &c_Category, const int &c_Salary, const int &c_Day): Person(c_FullName,c_Age,c_Country,c_Mail,c_PhoneNumber),experience(c_Experience),
                 category(c_Category),salary(c_Salary){}

void Teacher::Count_Salary()
{
    if (experience >20) salary+=(20*salary)/100;
    if (category=="Third") salary+=(5*salary)/100;
    if (category=="Second") salary+=(10*salary)/100;
    if (category=="First") salary+=(15*salary)/100;
    if (experience > 20 && category == "Third") salary+=(25*salary)/100;
    if (experience > 20 && category == "Second") salary+=(30*salary)/100;
    if (experience > 20 && category == "First") salary+=(35*salary)/100;

}
int Teacher::Holidays()
{
    return salary/(30*day);
}
string Teacher::AllTeachers() const
{
    return GetName();
}
void Teacher::AddTeacher(Teacher *teacher)
{
    vecTeachers.push_back(teacher);
}
int Teacher::MaxSalary() const
{
    Teacher* max = vecTeachers[0];
    for(int i = 0; i < vecTeachers.size(); i++)
    {
        if (vecTeachers[i]->GetSalary() > max->GetSalary())
        {max = vecTeachers[i];}
    }
    return max->GetSalary();
}
string Teacher::Info() const
{
    ostringstream oss;

    oss << Person::Info()
        << "Experience:" << GetExperience() << " years;\n"
        << "Category:" << GetCategory()
        << "Salary:" << GetSalary() << " dollars\n";

    return oss.str();
}
void Teacher::PrintTeachers() const
{
    if(vecTeachers.empty()){
        cout << " There are no teachers" << endl;
    } else{
        for(auto teach : vecTeachers){
            cout << teach->Info() << endl;
        }
    }
}