#include <iostream>
#include "Person.h"
#include "Teacher.h"
#include "Worker.h"
using namespace std;

int main() {
        vector<Teacher*> teachers;
        vector<Worker*> workers;
        string fullName, category, mail, country, phoneNumber, factory, post;
        int age, experience, salary, day, wage;
        Teacher* teacher;
        Worker* worker;
        int choice;
        do {
            cout << "\n";
            cout << "Chose you choice:\n";
            cout << "1. Create Teacher\n";
            cout << "2. Create Worker\n";
            cout << "3. Print all Teachers\n";
            cout << "4. Print all Worker\n";
            cout << "5. Who have highest salary\n";
            cout << "0. Exit\n";

            cin >> choice;
            switch (choice) {
                case 1: {
                    cout << "Enter full name:";
                    cin >> fullName;
                    cout << "Enter age:";
                    cin >> age;
                    cout << "Enter Country:";
                    cin >> country;
                    cout << "Enter Email";
                    cin >> mail;
                    cout << "Enter phone number";
                    cin >> phoneNumber;
                    cout << "Enter experience";
                    cin >> experience;
                    cout << "Enter category (first, second, third):";
                    cin >> category;
                    cout << "Enter salary";
                    cin >> salary;
                    cout << "Enter the number of vacation days";
                    cin >> day;
                    teacher = new Teacher(fullName, age, country, mail, phoneNumber,
                                          experience, category, salary, day);
                    teacher->AddTeacher(teacher);
                    break;
                }
                case 2: {
                    cout << "Enter full name:";
                    cin >> fullName;
                    cout << "Enter age:";
                    cin >> age;
                    cout << "Enter Country:";
                    cin >> country;
                    cout << "Enter Email";
                    cin >> mail;
                    cout << "Enter phone number";
                    cin >> phoneNumber;
                    cout << "Enter factory:";
                    cin >> factory;
                    cout << "Enter post (cleaner, electrician, main electrician, director):";
                    cin >> post;
                    cout << "Enter wage:";
                    cin >> wage;
                    worker = new Worker(fullName, age, country, mail, phoneNumber, factory, post, wage);
                    worker->AddWorker(worker);
                    break;
                }
                case 3: {
                    teacher->PrintTeachers();
                    break;
                }
                case 4: {
                    worker->PrintWorkers();
                    break;
                }
                case 5: {
                    cout << "Highest salary is - " << teacher->MaxSalary() << " dollars";
                    break;
                }
            }
        } while (choice!=0);



    }





