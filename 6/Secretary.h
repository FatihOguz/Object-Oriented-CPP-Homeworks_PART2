#ifndef SECRETARY_H
#define SECRETARY_H
#include <string>
#include "AdministrativePersonnel.h"/*header of base class */



using namespace AdministrativePersonnel_name;/* namespace of base class */
using namespace std;

namespace Secretary_name
{
	template<class T>
	class Secretary: public AdministrativePersonnel<T>/*inheritance*/
	{
	    public:
		Secretary();
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

}/* SECRETARY_NAME*/
#endif //SECRETARY_H
