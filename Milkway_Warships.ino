#include "libs\Sensors.cpp"
#include "libs\init.cpp"
#include "libs\Warship.h"
#include "libs\test.h"
#include "libs\Move.cpp"
#include "libs\Task.h"
void setup()
{
	initAll();
}

void loop()
{
	test();
}
int IR()
{
	irreturn = 0;
	ir1 = digitalRead(__IR1__);
	ir2 = digitalRead(__IR2__);
	ir3 = digitalRead(__IR3__);
	ir4 = digitalRead(__IR4__);
	if (ir1 == irtrue) { irreturn = 1; }
	else 
		if (ir2 == irtrue) { irreturn = 2;}
		else
			if (ir3 == irtrue) { irreturn = 3; }
			else
				if (ir4 == irtrue) { irreturn = 4; }
				else irreturn = 0;
				return irreturn;
		
    
}
