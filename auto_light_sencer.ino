#define SENSOR 8
#define LED 2

int num = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);


}

void loop() {
  //digitalRead(SENSOR)
  // put your main code here, to run repeatedly:
  if(digitalRead(SENSOR)==HIGH){
    Serial.println("High");
    //digitalWrite(LED, HIGH);
    digitalWrite(LED, LOW);
    num = 0;
  }
  else if(digitalRead(SENSOR)==LOW && num <= 5){ 
    Serial.println("flash");
    //digitalWrite(LED, LOW);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
    num += 1;
    Serial.println(num);
    
  }
  else if(digitalRead(SENSOR)==LOW && num > 5 && num <=10){ 
    Serial.println("flash fast");
    //digitalWrite(LED, LOW);
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    num += 1;
    Serial.println(num);
    
  }
  else if(digitalRead(SENSOR)==LOW && num > 10) {
    digitalWrite(LED, HIGH);
    Serial.println("low");
  }
  delay(100);
  

}

