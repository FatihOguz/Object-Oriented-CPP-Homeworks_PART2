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
			
		private:
			string lesson;
			string HomeWorkTime;
	};

}
#endif //LECTURER_H