/*
 Name:		smy_clk_ticker.cpp
 Created:	5/20/2021 2:21:30 PM
 Author:	GPD
 Editor:	http://www.visualmicro.com
*/

#include "clk_ticker.h"

	clkTicker::clkTicker(int periode)
	{
		Period = periode;
	}

	clkTicker::clkTicker()
	{

	}

	bool clkTicker::tick()
	{
		PeriodeInTime = millis() - OriginTimePoint;
		if (PeriodeInTime > Period)
		{
			OriginTimePoint = millis();
			return 1;
		}
		else return 0;
	}

	bool clkTicker::reset() {
		OriginTimePoint = millis();
	}
