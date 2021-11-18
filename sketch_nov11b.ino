int vibropin = 6; //digital pin number
int inputVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(vibropint,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    inputVal=Serial.read();
    if(inputVal=='1'){
      digitalWrite(vibropin,HIGH);
    }
  
    if(inputVal=='0'){
      digitalWrite(vibropin,LOW);
    }    
  }
}
