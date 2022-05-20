#include<iostream>
#include<string>
using namespace std;
class new_employee
{
private:
	int Employee_ID;
	string Employee_Fname;
	string Empolyee_Lname;
	string  Dob;
	int order_ID;
public:
	new_employee();
	new_employee(int eid, string efname, string elname, string dob);
	void Display_Employee_Details();
	void Order_ID(int oid);
};
