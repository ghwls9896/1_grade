#pragma once
#include <iostream>
#include <string>
#include <list>
#include <cstdio>
#include <map>
#include <cstring>
#include <iterator>
#include <fstream>
#include <cassert>

using namespace std;
class Employee
{
public:
    Employee(){}
    ~Employee() {}
    int hire(string&name,int employeeNumber); // ���� ���
    int fire(string& name, int employeeNumber); // ���� �ذ�.
    void infor(map<string, int> infor_list, string const name, int const  employeeNumber) const;// ���� ���� 
    int menu();//�޴�
    int choice(const int sel);//����


private:
    string name;
    int EmployeeNumber_member = 0;
    bool Hired = false;
};