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
			string action_list()
			{
				return action;
			}
	private:
			
			string action;
			int flag=0;
			int flag1=0;
			int flag2=0;
			int flag3=0;
			int flag4=0;
			int flag5=0;
			int flag6=0;
			int flag7=0;
			int flag8=0;
			int flag9=0;
			int flag10=0;
	};

}/* SECRETARY_NAME*/
#endif //SECRETARY_H
