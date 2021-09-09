
int led = 13;  //define led to pin 13



void setup() {
  pinMode(led, OUTPUT); //set pin 13 pinmode to output
}


void loop() 
{
  for (int i=1;i<=5;i++) // loop work 1 to 5
  {
  	digitalWrite(led, HIGH);   // led on 
  	delay(500);               // delay 500 miliseconds             
  	digitalWrite(led, LOW);   // led off  
  	delay(500);              //delay 500 miliseconds  
  }

  for (int i=1;i<=5;i++)  // loop work 1 to 5
  {
  	digitalWrite(led, HIGH);   // led on 
  	delay(2000);               // delay 2000 miliseconds          
  	digitalWrite(led, LOW);    // led off    
  	delay(2000);              //delay 2000 miliseconds          
  }              
}