#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np
import time
book_list=[]
user_list=[]
class Book():
    def Add(self):
        title = input("책 제목을 입력하십시오 : ")
        author = input("책 저자을 입력하십시오 : ")
        publisher = input("책 출판사을 입력하십시오 : ")
        isbn = input("책의 isbn을 입력하십시오 : ")
        loan = '0'
        reservation = '10'
        add_book = {title : 1, author : 2, publisher : 3, isbn : 4, loan : 5, reservation : 6}
        add_book=list(add_book.keys())
        book_list.append(add_book)
        print("책이 추가되었습니다!")
        return book_list
        
    def Remove(self, book_list):
        rem_book = input("삭제할 책의 이름을 입력해주세요 : ")
        for i in range (len(book_list)):
            if (rem_book in book_list[i][0]):
                book_list.pop(i)
                print("책이 삭제되었습니다.")
                break
            else:
                print("동일한 이름의 책을 발견하지 못하였습니다.")
                break
        return book_list
        
        
    def Loan(self):
        class_n = str(input("책을 대출하기 위해서는 학번을 적어주세요 : "))
        for i in range(len(user_list)):
            if (class_n) in (user_list[i][0]):                
                loan_n = int(input("몇 권의 책을 대출 하시겠습니까?(숫자만 써주세요)"))
                for i in range (loan_n):  
                    loan_book = input((f"{i+1}번째 대출할 책의 이름을 써주세요"))
                    for i in range (len(book_list)):
                        if (loan_book in book_list[i][0]):
                            if(book_list[i][4]=="0" and int(user_list[i][2]) <  5):
                                choice=input("대출이 가능합니다!. 대출을 하시겠습니까? y/n : ")
                                while(True):
                                    if(choice == "y"):
                                        book_list[i][4] = '1'
                                        user_list[i][2] = int(user_list[i][2])
                                        user_list[i][2] += 1
                                        user_list[i][2] = str(user_list[i][2])
                                        print("대출처리를 하였습니다!")
                                        break
                                    elif(choice == "n"):
                                        book_list[i][4] = '0'
                                        print("대출처리를 하지않았습니다.")
                                        break
                                    else:
                                        print("y/n중 하나만 입력해주십시오")
                            else:
                                print("죄송합니다. 이미 대출이 된 책입니다.")
                                break
                                

    def dis_Loan(self):
        class_n = str(input("책을 반납하기 위해서는 학번을 적어주세요 : "))
        for i in range(len(user_list)):
            if (class_n) in (user_list[i][0]):                
                loan_n = int(input("몇 권의 책을 반납 하시겠습니까?(숫자만 써주세요)"))
                for i in range (loan_n):  
                    loan_book = input((f"{i+1}번째 반납할 책의 이름을 써주세요"))
                    for i in range (len(book_list)):
                        if (loan_book in book_list[i][0]):
                            if(book_list[i][4]=="1"):
                                choice=input("반납이 가능합니다!. 반납을 하시겠습니까? y/n : ")
                                while(True):
                                    if(choice == "y"):
                                        book_list[i][4] = '0'
                                        user_list[i][2] = int(user_list[i][2])
                                        user_list[i][2] -= 1
                                        user_list[i][2] = str(user_list[i][2])
                                        print("반납처리를 하였습니다!")
                                        break
                                    elif(choice == "n"):
                                        book_list[i][4] = '1'
                                        print("반납처리를 하지않았습니다.")
                                        break
                                    else:
                                        print("y/n중 하나만 입력해주십시오")
                            else:
                                print("죄송합니다. 이미 반납이 된 책입니다.")
                                break
                    
                    
    def Reservation(self):
        loan_book = input(("예약할 책의 이름을 써주세요"))
        for i in range (len(book_list)):
            if (loan_book in book_list[i][0]):
                if(book_list[i][5]=="10"):
                    if(book_list[i][4]=="0"):
                        choice=input("예약이 가능합니다!. 예약을 하시겠습니까? y/n : ")
                        while(True):
                            if(choice == "y"):
                                book_list[i][5] = '11'
                                print("예약처리를 하였습니다!")
                                break
                            elif(choice == "n"):
                                book_list[i][5] = '10'
                                print("예약처리를 하지않았습니다.")
                                break
                            else:
                                print("y/n중 하나만 입력해주십시오")
                    else:
                        print("죄송합니다. 이미 대출이 되어있는 책입니다")
                else:
                    print("죄송합니다. 이미 예약이 된 책입니다.")
                    break
    def print_book(self, a):
        for i in range(len(a)):
            print(a[i][0], end = ' ')
            print(a[i][1], end = ' ')
            print(a[i][2], end = ' ')
            print(a[i][3])
class Member():
    def Add_m(self):
        class_n = input("학번을 입력하십시오 : ")
        name = input("이름을 입력하십시오 : ")
        loan_l = '0'
        reservation_1 = '10'
        user_infor = {class_n : 1, name : 2, loan_l : 3, reservation_1 : 4}
        user_infor=list(user_infor.keys())
        user_list.append(user_infor)
        print("회원으로 등록되셨습니다!")
        
    def print_member(self, a):
        for i in range(len(a)):
            print(a[i][0], end = ' ')
            print(a[i][1])
    def Remove_m(self, user_list):
        rem_m = input("탈퇴할 멤버의 학번을 입력해주세요 : ")
        for i in range (len(user_list)):
            if (rem_m in user_list[i][0]):
                user_list.pop(i)
                print("멤버가 탈퇴되었습니다.")
                break
            else:
                print("동일한 학번을 가진 멤버을 발견하지 못하였습니다.")
                break
        return user_list
        
class Library():
    def __init__(self):
        time.sleep(0.5)
        while(True):
            choice = (input("1.책의 목록 \n2.책 추가 \n3.책 삭제 \n4.대출 \n5.예약 \n6.회원등록 \n7.회원목록보기 \n8.회원 탈퇴 \n9.책 반납 \n"))
            if(choice == '1' or choice == '2' or choice == '3' or choice == '4' or choice == '5' or choice == '6' or choice == '7' or choice == '8' or choice == '9'):
                choice = int(choice)
                if (choice == 1):
                    if (len(book_list)==0):
                        time.sleep(0.5)
                        print("책이 없습니다! 책을 추가해주세요!")
                    else:
                        time.sleep(0.5)
                        Book().print_book(book_list)
                        break
                elif (choice == 2):
                    Book().Add()
                    break
                elif (choice == 3):
                    Book().Remove(book_list)
                    break
                elif (choice == 4):
                    Book().Loan()
                    break
                elif (choice == 5):
                    Book().Reservation()
                    break
                elif (choice == 6):
                    Member().Add_m()
                    break
                elif (choice == 7):
                    Member().print_member(user_list)
                    break
                elif (choice == 8):
                    Member().Remove_m(user_list)
                    break
                elif (choice == 9):
                    Book().dis_Loan()
                    break
            else:
                print("다시 입력해주세요")
        else:
            print("숫자를 입력해주십시오")
def main():
    while(True):
        Library()


# In[ ]:


if __name__=='__main__':
    main()


# In[ ]:




