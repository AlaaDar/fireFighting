int buzzer = 8;

int LED = 7;

int flame_sensor = 4;

int flame_detected;
int pump=9;

void setup()

{

  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);

  pinMode(LED, OUTPUT);

  pinMode(flame_sensor, INPUT);
  pinMode(pump, OUTPUT);
}


void loop()

{

  flame_detected = digitalRead(flame_sensor);

  if (flame_detected == 1)

  {

    Serial.println("Flame detected...! take action immediately.");

    digitalWrite(buzzer, HIGH);

    digitalWrite(LED, LOW);

    digitalWrite(pump, HIGH);
    
    delay(200);

    //digitalWrite(LED, LOW);

    //delay(200);

  }

  else

  {

    Serial.println("No flame detected. stay cool");

    digitalWrite(buzzer, LOW);

    digitalWrite(LED, HIGH);

    digitalWrite(pump, LOW);

    delay(200);
  }

  delay(1000);

}
