#include <math.h>

#include "var.h"
#include "suma.h"
#include "dod.h"

using namespace nsVar;
using namespace nsDod;

void nsSum::sum() {
	n = 1;
	a = x;
	s = a;
	do {
		n++;
		dod();
		s += a;
	} while (fabs(a) >= ln);
}