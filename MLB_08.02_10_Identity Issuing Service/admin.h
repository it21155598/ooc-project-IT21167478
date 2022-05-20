#include<iostream>
#include<string>
using namespace std;
class admin
{
private:
	int Admin_id;
	string Admin_name;
	string Email;
	string Password;
public:
	admin();
	admin(int id, string name, string email, string pwd);
	void Display_Admin_Details();
	void update_admin();
};

