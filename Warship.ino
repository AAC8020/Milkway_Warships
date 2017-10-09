#include "libs\Sensors.cpp"
#include "libs\init.cpp"

void setup()
{
	initAll();
}

void loop()
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(1000);
	digitalWrite(LED_BUILTIN, LOW);
	delay(1000);
  /* add main program code here */

}
