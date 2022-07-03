
#include <iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;

void adminLogin();// Akhil k

class Admin
{
    char adminUserName[20];
    char adminPassword[20];
    char empName[20];
    char empDesignation[20];
    char empAddress[30];
    char mobileNumber[20];
    char empEmail[40];
protected:
    char empUserName[20];
    int empId;
public:
    void addEmployee();//Akhil
    void searchEmployee();//akhil
    void deleteEmployee();//ank
    void updateEmployee();//ank
    void showEmployee();//ank
    void empDetails();//dil
};

class Employee :public Admin
{
    char empPassword[20];
public:
    void empRegister();//dil
    void empLogin();//dil

};

class Salary:public Admin
{
    char eName[20];
    char eUserName[20];
    int eId;
    int attendance;
    char month[10];
    float basicSalary;
    float netSalary;
public:
    void managePayroll();//saj
    void searchEmpReport();//saj
    void slip();
    void empReport();//saj
};



int main()
{
    std::cout << "Hello World!\n";
}
