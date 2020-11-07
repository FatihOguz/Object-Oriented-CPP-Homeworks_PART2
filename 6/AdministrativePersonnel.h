#ifndef ADMINISTRATIVE_PERSONNEL_H
#define ADMINISTRATIVE_PERSONNEL_H
#include "employee.h"/*HEADER OF İNHERİTANCE CLASS(BASE CLASS) */
#include <iostream>
#include <string>



using namespace std;
using namespace Employee_name;/* base class namespace */
namespace AdministrativePersonnel_name
{
	template<class T>
	class AdministrativePersonnel: public Employee<T>/*inheritance base class*/
	{
		public:
			/* CONSTRUCTOR */
			AdministrativePersonnel();
			AdministrativePersonnel(string  nameVal,string  surnameVal,int pidVal,int happinessVal);
			void drinkTea();
			void submitPetition();
			void giveLesson();
			void giveHW();
			void makeDoc();
			void research();
			void readHW();
			void receivePetition();
			void seeSuccessfulStudent();
			void makePublish();
			void manageProcess();	
		
	};
}

#endif //ADMINISTRATIVE_PERSONNEL_H