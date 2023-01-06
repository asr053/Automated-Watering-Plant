const int dry = 450:

const int pumpPin- 12:

const int soilSensor- A4;

int buzzerPin - 8:

int redLead = 9;

void setup() (

// put your setup code here, to run once: 
pinMode (pumpPin, OUTPUT); 
pinMode (buzzer Pin, OUTPUT);
 Serial.begin(9600);
 digitalWrite (pumpPin, HIGH);
pinMode (redLead, OUTPUT);

pinMode (soilSensor, INPUT);

delay(5000);
}

void loop(){

// put your main code here, to run repeatedly: 

int dryness - analogRead(soilSensor);

Serial.println(dryness);

delay(2000);

if (dryness>=dry) {

Serial.println("Watering starts now...dryness is + String (dryness)):

tone (buzzer Pin, 6000, 500);

digitalWrite(redLead, LOW); digitalWrite (pumpPin, LOW);

delay (5000);

digitalWrite(redLead, HIGH);

digitalWrite (pumpPin, HIGH);

}else{

Serial.println("Watering is done and the dryness is "+ String (dryness));
}
}