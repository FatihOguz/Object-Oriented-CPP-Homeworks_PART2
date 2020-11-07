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

}/* Officer_NAME*/
#endif //Officer_H
