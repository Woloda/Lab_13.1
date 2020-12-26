#include "var.h" 
#include "dod.h"

using namespace nsVar;

void nsDod::dod() {
	R = x * 1.0 * (n * 1.0 - 1) / n * 1.0;
	a *= R;
}