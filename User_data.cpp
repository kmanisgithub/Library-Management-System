#include "headers.h"

void User_database :: Add()
{
  cout<<"----------------------"<<endl;
  cout<<"Enter the Type of User to add: Student/Professor/Librarian ";
  string type;
  cin>>type;
  if(type=="Student"){Student a;
  cout<<"Enter the Name of User to add: ";
  string Name;
  getline(cin,Name);
  a.Name=Name;
  cout<<"Enter the ID to set: ";
  long long ID;
  cin>>ID;
  a.ID=ID;
  cout<<"Enter the password to set "; 
  string password;
  getline(cin,password);
  a.password=password;
  

  u.push_back(a);
  cout<<"User Added Successfully"<<endl;
  cout<<"----------------------"<<endl;}
  else if(type=="Professor"){
      Professor a;
  cout<<"Enter the Name of User to add: ";
  string Name;
  getline(cin,Name);
  a.Name=Name;
  cout<<"Enter the ID to set: ";
  long long ID;
  cin>>ID;
  a.ID=ID;
  cout<<"Enter the password to set "; 
  string password;
  getline(cin,password);
  a.password=password;
  

  u.push_back(a);
  cout<<"User Added Successfully"<<endl;
  cout<<"----------------------"<<endl;
  }
  else if(type=="Librarian"){
      Librarian a;
  cout<<"Enter the Name of User to add: ";
  string Name;
  getline(cin,Name);
  a.Name=Name;
  cout<<"Enter the ID to set: ";
  long long ID;
  cin>>ID;
  a.ID=ID;
  cout<<"Enter the password to set "; 
  string password;
  getline(cin,password);
  a.password=password;
  

  u.push_back(a);
  cout<<"User Added Successfully"<<endl;
  cout<<"----------------------"<<endl;
  }
  
  
}

void User_database :: Delete()
{
  cout<<"----------------------"<<endl;
  cout<<"Enter the ID of User to Delete: ";
  long long ID;
  cin>>ID;
  for(auto it = u.begin(); it < u.end(); it++)
  {
      if (it->ID==ID)
      {
        u.erase(it);
          break;

      }
  }
  
  cout<<"User Deleteed Successfully"<<endl;
  cout<<"----------------------"<<endl;
}

void User_database :: Search()
{
  cout<<"----------------------"<<endl;
  cout<<"Enter the ID of User to search: ";
  long long ID;
  cin>>ID;
  for(auto it = u.begin(); it < u.end(); it++)
  {
      if (it->ID==ID)
      {
          cout<<"User Found Successfully"<<endl;
          break;

      }

}
  
  cout<<"----------------------"<<endl;
}