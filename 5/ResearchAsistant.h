#ifndef RESEARCH_ASSISTANT_H
#define RESEARCH_ASSISTANT_H
#include <string>
#include "AcademicPersonnel.h"			/*header of base class */


using namespace AcademicPersonnel_name;/*namespace of baseclass*/
using namespace std;

namespace ResearchAsistant_name
{

	class ResearchAsistant: public AcademicPersonnel
	{
		public:
			ResearchAsistant();
			void research();
			void readHW();
	};
}
#endif //ResearchAssistant