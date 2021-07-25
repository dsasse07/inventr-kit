/*
  Wiring up an external LED to be powered constantly from the Uno with a 220 resistor.
  1. Start by defining the pins that were used from the Uno board
  2. In the loop, we will toggle the power output to pin 12, which will make the LED blink
*/

int LED = 12; // 12 in the digital power pin which the + end of the LED is linked to in the bread board

void setup()
{
  pinMode(LED, OUTPUT); // declaring pin 12 as an OUTPUT for the board.
  digitalWrite(LED, HIGH); // send full power (5v) to pin 12
}

// optionally, we can make the light blink by toggle the Write power from high to low on 1000ms intervals.
void loop()
{
  digitalWrite(LED, LOW); 
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
}