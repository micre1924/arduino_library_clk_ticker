/*
 Name:		smy_clk_ticker.h
 Created:	5/20/2021 2:21:30 PM
 Author:	GPD
 Editor:	http://www.visualmicro.com
*/

#ifndef _smy_clk_ticker_h
#define _smy_clk_ticker_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
class clkTicker
{
public:
	long OriginTimePoint = 0;
	long PeriodeInTime = 0;
	long Period = 0;

	clkTicker(int periode);

	clkTicker();

	bool tick();

	bool reset();
};

#endif

