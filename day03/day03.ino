/*
  Wiring up an external LED to be powered constantly from the Uno with a 220 resistor.
  1. Start by defining the pins that were used from the Uno board
  2. In the loop, we will toggle the power output to pin 12, which will make the LED blink
*/

int LED = 12; // 12 in the digital power pin which the + end of the LED is linked to in the bread board
int Switch1 = 2; // Pin 2 will be the output pin for the switch

void setup()
{
  pinMode(LED, OUTPUT); // declaring pin 12 as an OUTPUT for the board.
  pinMode(Switch1, INPUT);
}

// optionally, we can make the light blink by toggle the Write power from high to low on 1000ms intervals.
void loop()
{
  if (digitalRead(Switch1) == 1){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}