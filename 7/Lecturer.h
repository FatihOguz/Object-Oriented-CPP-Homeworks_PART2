#ifndef LECTURER_H
#define LECTURER_H
#include <string>
#include "AcademicPersonnel.h"/*base class parent*/
using namespace std;
using namespace AcademicPersonnel_name;/*parent namespace */

namespace Lecturer_name
{
	template<class T>
	class Lecturer: public AcademicPersonnel<T>  
	{
		public:
			/* Constructors */
			Lecturer();
			/*OTHER FUNCTIONS*/
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
			string lesson;
			string HomeWorkTime;
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

}
#endif //LECTURER_H