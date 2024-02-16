#include<iostream>

#include<string.h>

#include<stdlib.h>

using namespace std;

int get();

int booksIssued, Due, booksReturn;

const int maxBook = 5;

//1. constructor

class login {

public:

char pass[30], uName[30];

login(){

cout<<endl<<"**********Set the username and password**********"<<endl;

cout<<"Enter the username: "<<endl;

cin.getline(uName,30);

cout<<"Enter the password: "<<endl;

cin.getline(pass, 30);

cout<<"You have successfully signed up"<<endl<<endl;

cout<<endl<<"Welcome to Library of Congress."<<endl;

}

};

//a) parametrized constructor or function overloading

class bookinfo{

public:

bookinfo(int iBook, int fine, int bReturn){

booksIssued=iBook;

Due=fine;

booksReturn= bReturn;

}

};

class issueB {

public:

issueB(int booksIssued){

if(booksIssued > maxBook) get();

else{

booksReturn = booksIssued;

cout<<endl;

cout<<endl<<"You have successfully issued the book."<<endl;

cout<<endl<<"You can still issue "<< 5-booksIssued <<" number of books"<<endl<<endl;

cout<<"Number of books currently issued by you: "<< booksIssued <<endl;

cout<<"Amount to pay: "<<Due<<"Rs."<<endl;

cout<<"Number of books to be returned: "<<booksReturn <<endl;

}

}

issueB(){

if(booksIssued > maxBook) booksIssued = 5;

cout<<endl<<"Number of books currently issued by you: "<< booksIssued <<endl;

cout<<"Amount to pay: "<<Due<<"Rs."<<endl;

cout<<"Number of books to be returned: "<<booksReturn<<endl;

}

friend int get();

};

// 2. inheritence

class accinfo : public issueB{

public:

accinfo(){

cout<<endl<<"Thank You!"<<endl;

}

};

int get(){

cout<<endl<<"Sorry! You have reached the limit!. Return some books to issue new one. Thank You!"<<endl;

}

class returnB {

public:

int display(){

//*******3. Exception Handling******

try{

if(booksIssued == 0)

throw 0;

else{

cout<<endl<<"You have successfully returned the book."<<endl;

booksReturn = --booksIssued;

cout<<endl<<"You have"<<" "<<booksReturn<<" books in your account."<<endl;

}

}catch(int a){

cout<<endl<<"Error!"<<" "<<"There are " << a << " books in your account to return."<<endl;}

}

};

int main(){

login s1;

bookinfo obj(0, 0, 0);

int choice;

while(1){

cout<<endl<<endl<<"1.Issue new book."<<" "<<"2.Return a book."<<" "<<"3.Account Info"<<" "<<"4.Exit"<<endl;

cout<<endl<<"What you want to do? "<<endl;

cin>>choice;

switch (choice) {

case 1:{

if(booksIssued > maxBook) booksIssued = 5;

else booksIssued++;

issueB stud1(booksIssued);

break;

}

case 2:{

returnB stud;

stud.display();

break;

}

case 3:{

accinfo obj1;

break;

}

case 4:

cout<<endl<<"Thank You for using our Library. Hope you are enjoying to code."<<endl;

cout<<endl<<"Have a nice day!"<<endl;

exit(0) ;

}

}

}

/* This includes major functions of Object Oriented Programming.

Class and object
Constructor
function overloading(here, parametrized constructor)
friend function
inheritence
Exception handling

*/
