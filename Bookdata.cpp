#include "headers.h"



void Book_database :: Add()
{
  cout<<"----------------------"<<endl;
  Book a;
  cout<<"Enter the Title of book to add: ";
  string Title;
  cin>>Title;
  getline(cin,Title);
  cout<<"Enter the Author of book to add: ";
  string Author;
  getline(cin,Author);
  a.Author=Author;
  cout<<"Enter the ISBN of book to add: ";
  long long ISBN;
  cin>>ISBN;
  a.ISBN=ISBN;
  cout<<"Enter the Publication of book to add: ";
  string Publication;
  getline(cin,Publication);
  a.Publication=Publication;
  a.days=0;

  b.push_back(a);
  cout<<"Book Added Successfully"<<endl;
  cout<<"----------------------"<<endl;
}

void Book_database :: Delete()
{
  cout<<"----------------------"<<endl;
  cout<<"Enter the ISBN of book to delete: ";
  long long ISBN;
  cin>>ISBN;
  for(auto it = b.begin(); it < b.end(); it++)
  {
      if (it->ISBN==ISBN)
      {
          b.erase(it);
          break;

      }
  }
  cout<<"Book Removed Successfully"<<endl;
  cout<<"----------------------"<<endl;
}

void Book_database :: Search()
{
  cout<<"----------------------"<<endl;
  cout<<"Enter the ISBN of book to search: ";
  long long ISBN;
  cin>>ISBN;
  for(auto it = b.begin(); it < b.end(); it++)
  {
      if (it->ISBN==ISBN)
      {
          cout<<"Book Found Successfully"<<endl;
          break;

      }

}
  
  cout<<"----------------------"<<endl;
}