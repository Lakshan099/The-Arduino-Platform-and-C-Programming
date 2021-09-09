
int led = 13; // define pin 13 as led 
int charS = 0; // initialize char variable as 0

void setup() 
{  

  pinMode(led, OUTPUT);  // set pinmode as output
  Serial.begin(9600);  // serial moniter start
}
  

void loop() 
{  
	if(Serial.available() > 0)  // if available 
	{                         
	  charS = Serial.read();  // get data insert in serial moniter 1 or 0 to CharS veriable
	}  


   	if (charS  == '0')  // charS equal to 0
	{ 
	  digitalWrite(led, LOW);  // led off
	}

	 
 	if (charS  == '1')  // charS equal to 1
	{  
	  digitalWrite(led, HIGH);  // led on 
	}
}