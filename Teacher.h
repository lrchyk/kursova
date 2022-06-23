
#ifndef IRCHYK_TEACHER_H
#define IRCHYK_TEACHER_H

#include "Person.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Teacher:public Person
{
protected:
    int experience;
    string category;
    int salary;
    int day;
    vector<Teacher*> vecTeachers;
public:
    Teacher();
    Teacher(const string &c_FullName,const int &c_Age,const
    string &c_Country,const string &c_Mail,
            const string &c_PhoneNumber,const int &c_Experience,
            const string &c_Category, const int &c_Salary,
            const int &c_Day);

    string Info() const override;

    int GetExperience() const
    {
        return  experience;
    }
    string GetCategory() const
    {
        return category;
    }
    int GetSalary() const
    {
        return salary;
    }
    void Count_Salary();
    int Holidays();
    string AllTeachers() const;

    int MaxSalary() const;

    void AddTeacher(Teacher *teacher);
    void PrintTeachers() const;
};

#endif //IRCHYK_TEACHER_H
