/*
 Name:		smy_clk_ticker.cpp
 Created:	5/20/2021 2:21:30 PM
 Author:	GPD
 Editor:	http://www.visualmicro.com
*/

#include "clk_ticker.h"

	clkTicker::clkTicker(unsigned long periode, bool is_micro)
	{
		Period = periode;
		isMicro = is_micro;
	}

	clkTicker::clkTicker()
	{

	}

	bool clkTicker::tick()
	{
		lastTickTimestamp = isMicro ? micros() : millis();
		PeriodeInTime = lastTickTimestamp - OriginTimePoint;
		if (PeriodeInTime > Period)
		{
			OriginTimePoint = lastTickTimestamp;
			return 1;
		}
		else return 0;
	}

	bool clkTicker::reset() {
		OriginTimePoint = isMicro ? micros() : millis();
	}
