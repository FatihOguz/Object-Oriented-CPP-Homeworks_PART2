#ifndef OFFICER_H
#define OFFICER_H
#include <string>
#include "AdministrativePersonnel.h"/*parent class*/



using namespace std;
using namespace AdministrativePersonnel_name;/*parent namespace */

namespace Officer_name
{
	template<class T>
	class Officer: public AdministrativePersonnel<T>
	{
	public:
		Officer();
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

}/* Officer_NAME*/
#endif //Officer_H