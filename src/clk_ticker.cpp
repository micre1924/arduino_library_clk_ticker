#include "clk_ticker.h"
namespace mrc{
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

	void clkTicker::reset() {
		OriginTimePoint = isMicro ? micros() : millis();
	}
}
