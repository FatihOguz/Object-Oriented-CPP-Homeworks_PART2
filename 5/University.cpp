#include "University.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace University_name
{
	University::University()
	{
		/*EMPTY*/
		contribution=0;/*initalized*/
	}
	University::University(int contributionVal):contribution(contributionVal)
	{
		/*EMPTY*/
	}
	University::University(University & GTU)/*copy constructor*/
	{
		contribution=GTU.getContribution();
	}
	University::~University()/*destructor*/
	{
		
	}
	University& University::operator=(University & rightSide)/* assignment operator */
	{
		contribution=rightSide.getContribution();
	}
	void University::setContribution(int contributionVal)
	{
		contribution = contributionVal;
	}
	void University::addContribution(int contributionVal)
	{
		contribution=contribution+contributionVal;
	}
	int University::getContribution()
	{
		return contribution;
	}

}