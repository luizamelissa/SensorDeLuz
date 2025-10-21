int pinoLDR = A0;

int pinoLED1 = 9;
int pinoLED2 = 10;
int pinoLED3 = 11;
int pinoLED4 = 12;
int pinoLED5 = 7;
int pinoLED6 = 8;
int pinoLED7 = 6;

int limiteLuz = 300;

void setup(){
  
  pinMode(pinoLED1, OUTPUT);
  pinMode(pinoLED2, OUTPUT);
  pinMode(pinoLED3, OUTPUT);
  pinMode(pinoLED4, OUTPUT);
  pinMode(pinoLED5, OUTPUT);
  pinMode(pinoLED6, OUTPUT);
  pinMode(pinoLED7, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop(){
  
  int valorLuz = analogRead(pinoLDR);
  
  Serial.print("Valor da luz: ");
  Serial.print(valorLuz);
  
  if (valorLuz < limiteLuz){
    
    digitalWrite(pinoLED1, HIGH);
    digitalWrite(pinoLED2, HIGH);
    digitalWrite(pinoLED3, HIGH);
    digitalWrite(pinoLED4, HIGH);
    digitalWrite(pinoLED5, HIGH);
    digitalWrite(pinoLED6, HIGH);
    digitalWrite(pinoLED7, HIGH);
    
  } else{
    
    digitalWrite(pinoLED1, LOW);
    digitalWrite(pinoLED2, LOW);
    digitalWrite(pinoLED3, LOW);
    digitalWrite(pinoLED4, LOW);
    digitalWrite(pinoLED5, LOW);
    digitalWrite(pinoLED6, LOW);
    digitalWrite(pinoLED7, LOW);
    
  }
  
  delay(100);
}