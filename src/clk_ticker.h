#include "Arduino.h"

namespace mrc{
	class clkTicker {
	public:
		unsigned long OriginTimePoint = 0, PeriodeInTime = 0, Period = 0, lastTickTimestamp = 0;
		bool isMicro = false;

		clkTicker(unsigned long periode, bool is_micro = false);

		clkTicker();

		bool tick();

		void reset();
	};
}

