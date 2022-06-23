

#ifndef IRCHYK_WORKER_H
#define IRCHYK_WORKER_H

#include "Person.h"
#include <iostream>
#include <string>
#include <vector>

class Worker:public Person
{
private:
    string factory;
    string post;
    int wage;
    vector<Worker*> vecWorkers;
public:
    Worker();
    Worker(const string &c_FullName,const int &c_Age,
           const string &c_Country,const string &c_Mail,
           const string &c_PhoneNumber,const string &c_Factory,
           const string &c_Post, const int &c_Wage);

    string Info() const override;

    string GetFactory() const
    {
        return factory;
    }
    string GetPost() const
    {
        return post;
    }
    int GetWage() const
    {
        return wage;
    }
    void AddWorker(Worker* worker);

    void Count_Worker();
    void ChangePost(string NewPost);
    void PrintWorkers() const;
};

#endif //IRCHYK_WORKER_H
