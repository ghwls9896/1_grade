#include<iostream>
#include<vector>
using namespace std;

struct Book
{
	string name = "";
	int code = -1;
	bool isBook = true;// 0 : 거짓 없다 / 1 : 진실 있다.
};
void MenuPrint();
void OpenBook(Book* book);
void BookAdd(Book* book);
void LoanBook(Book* book);
void ReturnBook(Book* book);
void main()
{
	int select;
	Book book[10];
	while (true)
	{
		MenuPrint();
		cin >> select;
		switch (select)
		{
		case 1://책 보기
			OpenBook(book);
			break;
		case 2://대출
			LoanBook(book);
			break;
		case 3://반납
			ReturnBook(book);
			break;
		case 4://책추가
			BookAdd(book);
			break;
		default:
			break;
		}
		system("cls");
	}
}
void MenuPrint()
{
	cout << "1.책보기" << endl;
	cout << "2.대출" << endl;
	cout << "3.반납" << endl;
	cout << "4.책추가" << endl;
}
void OpenBook(Book* book)
{
	int select;
	for (int i = 0; i < 10; i++)
	{
		if (book[i].code != -1)
		{
			cout << "책 이름 : " << book[i].name << endl;
			if (book[i].isBook)
				cout << "대출 여부 : 가능" << endl;
			else
				cout << "대출 여부 : 불가능" << endl;
		}
	}
	cin >> select;
}
void BookAdd(Book* book)
{
	int select;
	Book temp;
	cout << "책 이름 : ";
	cin >> temp.name;
	cout << "책 코드 : ";
	cin >> temp.code;
	for (int i = 0; i < 10; i++)
	{
		if (book[i].code == -1)
		{
			book[i] = temp;
			cout << "책이 " << i << "번째 자리에 등록이 되었습니다." << endl;
			break;
		}
		if (i == 9)
		{
			cout << "도서관에 책이 꽉 차있는 상태 입니다." << endl;
		}
	}
	cin >> select;
}
void LoanBook(Book* book)
{
	int select;
	int bookCount = 0;
	for (int i = 0; i < 10; i++)
	{
		if (book[i].code != -1)
		{
			cout << i << ".책 이름 : " << book[i].name << endl;
			if (book[i].isBook)
				cout << "대출 여부 : 가능" << endl;
			else
				cout << "대출 여부 : 불가능" << endl;
			bookCount++;
		}
	}
	cout << "몇번째 책을 빌리 시겠습니까?(나가기 : -1)" << endl;
	cin >> select;
	if (select == -1)
		return;
	if (select >= 0 && select < bookCount)
	{
		if (book[select].isBook)
		{
			book[select].isBook = false;
			cout << book[select].name << "을 대출 하셨습니다." << endl;
		}
		else
		{
			cout << "대출이 불가능한 책입니다." << endl;
		}
	}
	else
	{
		cout << select << "번째 책은 없습니다." << endl;
	}
	cin >> select;
}
void ReturnBook(Book* book)
{
	int select;
	int bookCount = 0;
	int bookMax = 0;
	for (int i = 0; i < 10; i++)
	{
		if (book[i].code != -1 && book[i].isBook == false)
		{
			cout << bookCount << ".책 이름 : " << book[i].name << endl;
			bookCount++;
		}
		bookMax++;
	}
	cout << "몇번째 책을 반납 하시겠습니까?(나가기 : -1)" << endl;
	cin >> select;
	if (select == -1)
		return;
	bookCount = 0;
	if (select >= 0 && select < bookMax)
	{
		for (int i = 0; i < 10; i++)
		{
			if (book[i].code != -1 && book[i].isBook == false)
			{
				if (select == bookCount)
				{
					book[i].isBook = true;
					cout << book[i].name << "을 반납 하셨습니다." << endl;
					break;
				}
				else
				{
					bookCount++;
				}
			}
		}
	}
	else
	{
		cout << select << "번째 책은 없습니다." << endl;
	}
	cin >> select;
}