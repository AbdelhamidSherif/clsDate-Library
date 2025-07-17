#pragma once

#include "clsDate.h";
using namespace std;

class clsPeriod
{
public:
	clsDate StartDate;
	clsDate EndDate;

	clsPeriod(clsDate StartDate, clsDate EndDate)
	{
		this->StartDate = StartDate;
		this->EndDate = EndDate;
	}

	static bool IsOverLapPeriods(clsPeriod Period1, clsPeriod Period2)
	{
		if (clsDate::CompareDates(Period2.EndDate, Period1.StartDate) == clsDate::enDateCompare::Before || clsDate::CompareDates(Period2.StartDate, Period1.EndDate) == clsDate::enDateCompare::After)
			return false;
		else
			return true;
	}

	bool IsOverLapWith(clsPeriod Period)
	{
		return IsOverLapPeriods(*this, Period);
	}

	void Print()
	{
		cout << "Period Starts: ";
		StartDate.Print();

		cout << "Period End: ";
		EndDate.Print();
	
	}
};

