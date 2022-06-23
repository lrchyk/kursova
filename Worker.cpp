#include "Person.h"
#include <iostream>
#include <string>
#include "Worker.h"

using namespace std;

Worker::Worker():Person(), factory("None"), post("None"), wage(0){}
Worker::Worker(const string &c_FullName,const int &c_Age,
               const string &c_Country,const string &c_Mail,
               const string &c_PhoneNumber,const string &c_Factory,
               const string &c_Post, const int &c_Wage):Person(c_FullName,c_Age,c_Country,c_Mail,c_PhoneNumber), factory(c_Factory), post(c_Post), wage(c_Wage){}

void Worker::Count_Worker()
{
    if (post == "cleaner") { };
    if (post == "electrician") wage+=(10*wage)/100;
    if (post == "main electrician") wage+=(20*wage)/100;
    if (post == "director") wage+=(50*wage)/100;
}

/*void ChangePost(string NewPost)
{
    this->post = NewPost;
}*/
void Worker::AddWorker(Worker* worker)
{
    vecWorkers.push_back(worker);
}

string Worker::Info() const
{
    ostringstream oss;

    oss << Person::Info()
        << "Factory:" << GetFactory() << " years;\n"
        << "Post:" << GetPost()
        << "Wage:" << GetWage() << " dollars\n";

    return oss.str();
}
void Worker::PrintWorkers() const
{
    if(vecWorkers.empty()){
        cout << " There are no workers" << endl;
    } else{
        for(auto work : vecWorkers){
            cout << work->Info() << endl;
        }
    }
}