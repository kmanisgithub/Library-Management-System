#include<bits/stdc++.h>
using namespace std;

class Book
{
    string Title;
    string Author;
    long long ISBN;
    string Publication;
    bool IsAvail;
    unsigned short int days;

    public:
    friend class Book_database;
    unsigned short int Total_days;
    void Show_duedate();
    void Book_Request();
};


class Book_database
{
    vector<Book> b;

    void Add();
    void Update();
    void Delete();
    void Search();
    
    

    friend class Librarian;

};


class User
{
    public: 

    string Name;
    long long ID;
    string password;



} ;


class Professor : public User
{
    int Fine_amount;
    vector<Book> b;
    public:
    void Request(long long ISBN);
    int Calculate_fine();
    void Clear_fine_amount();

} ;

class Student : public User
{
    
    int Fine_amount;
    vector<Book> b;
    public:
    int Calculate_fine();
    void Clear_fine_amount();
    
} ;

class Librarian : public User
{
    

} ;

class User_database
{
public:
    vector<User> u;
    void Add();
    void Update();
    void Delete();
    void Search();

    friend class Librarian;
};
