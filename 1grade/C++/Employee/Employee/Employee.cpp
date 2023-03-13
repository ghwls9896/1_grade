#include <iostream>
#include "Employee.h"
#include <list>
using namespace std;
// Hired 변수 설정하는 고용, 해고
int flag_out = 0;
list<int> current_emp;
int Employee::hire(string& name, int employeeNumber)
{
    cout << "고용할 사람의 이름을 입력해주세요 : ";
    cin >> name;
    cout << "고용할 사람의 고용번호을 입력해주세요 : ";
    cin >> employeeNumber;
    Hired = true;
    current_emp.push_back(employeeNumber);

    ofstream outStrm;
    outStrm.open("hireFile");
    if (!outStrm.is_open())
    {
        cout << "hireFile cannot be opened!";
        assert(false);
    }
    outStrm << name<< " "<< employeeNumber<< " ";
    outStrm.close();


    return 0;
}

int Employee::fire(string& name, int employeeNumber)
{
    cout << "해고할 사람의 이름을 입력해주세요 : ";
    cin >> name;
    cout << "해고할 사람의 고용번호을 입력해주세요 : ";
    cin >> employeeNumber;
    Hired = false;
    return 0;
}

// 현재 직원에 대한 정보를 출력.
void Employee::infor(map<string, int> inforlist,string const name, int const  employeeNumber) const
{
    inforlist.insert({name, employeeNumber});
}
int Employee::menu()
{
    int sel;

    cout << endl;
    cout << "-----------------" << endl;
    cout << "1) 새로운 직원을 뽑기" << endl;
    cout << "2) 직원을 해고시키기" << endl;
    cout << "3) 현재직원의 명단" << endl;
    cout << "0) 나가기" << endl;
    cout << endl;
    cout << "-----------------" << endl;

    cin >> sel;

    return sel;

}

int Employee::choice(int sel)
{
    if (sel == 1) {
        flag_out = 0;
        string name;
        int Enum = 0;
        Employee::hire(name, Enum);
    }
    else if (sel == 2) {
        flag_out = 0;
        string name;
        int Enum = 0;
        Employee::fire(name, Enum);
    }
    else if (sel == 3) {
        flag_out = 0;
        cout << "incomplete..." << endl;
    }
    else
    {
        flag_out = 1;
    }
    return flag_out;
}