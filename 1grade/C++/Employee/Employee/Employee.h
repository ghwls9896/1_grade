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
    int hire(string&name,int employeeNumber); // 직원 고용
    int fire(string& name, int employeeNumber); // 직원 해고.
    void infor(map<string, int> infor_list, string const name, int const  employeeNumber) const;// 직원 정보 
    int menu();//메뉴
    int choice(const int sel);//선택


private:
    string name;
    int EmployeeNumber_member = 0;
    bool Hired = false;
};