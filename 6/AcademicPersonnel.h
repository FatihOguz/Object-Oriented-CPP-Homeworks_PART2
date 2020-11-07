#ifndef ACADEMIC_PERSONNEL_H
#define ACADEMIC_PERSONNEL_H
#include <string>
#include "employee.h"	/*HEADER OF İNHERİTANCE CLASS(BASE CLASS) */

using namespace std;
using namespace Employee_name;		/* base class namespace */
namespace AcademicPersonnel_name
{
		template<class T>
	class AcademicPersonnel :public Employee<T>   /*İNHERİTANCE*/
	{
		public:
			/*	Constructors */
			AcademicPersonnel();
			
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

}/* the end of namespace */


#endif/* the end of header */