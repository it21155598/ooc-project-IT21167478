#include <iostream>
#include <string>
#include "id_issuing_sector.h"
#include "id_card.h"
using namespace std;



id_issuing_sector::id_issuing_sector()
{
  cout << "Id_issuing_sector Details :- "<< endl;
}

id_issuing_sector::id_issuing_sector(int id, int idate, string itype)
{

	Id_Issuing_Manager_id = id;
	Id_Issuing_date = idate;
	Id_issuing_Type = itype;
}

void id_issuing_sector::display_ID_Issuing_Details()
{
  
}
