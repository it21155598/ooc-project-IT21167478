// Admin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "admin.h"


admin::admin()
{
  cout << "Admin Details :- "<<endl;
}

admin::admin(int id, string name, string email, string pwd)
{
	Admin_id = id;
	Admin_name = name;
	Email = email;
	Password = pwd;
}

void admin::Display_Admin_Details()
{
  cout << "Admin Id  :- "<< Admin_id << endl;
  cout << "Admin name :- "<< Admin_name  << endl;
  cout << "Email :- "<< Email  << endl;
  cout << "Enter Password :- "<< Password << endl;
  
}

void admin::update_admin()
{
}
