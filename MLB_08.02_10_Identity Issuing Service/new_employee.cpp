#include<iostream>
#include<string>
#include "new_employee.h"
using namespace std;



new_employee::new_employee()
{
  cout << "New_employee Details :- "<< endl;
}

new_employee::new_employee(int eid, string efname, string elname, string dob)
{
	Employee_ID = eid;
	Employee_Fname = efname;
	Empolyee_Lname = elname;
	Dob = dob;
}

void new_employee::Display_Employee_Details()
{
  cout << "New Employee_ID :- "<< Employee_ID  << endl;
  cout << "New Employee_Fname :- "<< Employee_Fname  << endl;
  cout << "New Employee_Lname :- "<< Empolyee_Lname  << endl;
  cout << "New Employee Dob :- "<<Dob << endl;
}


void new_employee::Order_ID(int oid)
{
	order_ID = oid;
}
