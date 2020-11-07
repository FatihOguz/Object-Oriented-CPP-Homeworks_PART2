#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>


using namespace std;



namespace University_name
{

	class University 
	{
		public:
			/* Constructors */
			University();
			University(int contributionVal);
			~University();
			University(University & GTU);
			University& operator=(University& rightSide);
			void setContribution(int contribution);
			int getContribution();
			void addContribution(int contributionVal);
			
		private:
			int contribution;
	};

}
#endif // UNIVERSITY_H