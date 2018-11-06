int boton = 12;
int boton2= 11;
int boton3= 10;
int led = 7;
int led2 = 6;
int led3 = 5;
int estado;

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT_PULLUP);
  pinMode(boton2, INPUT_PULLUP);
  pinMode(boton3, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  estado = digitalRead(boton);
  if (estado ==0){
    digitalWrite(led,HIGH);
  }
else{
  digitalWrite(led,LOW);
}
  estado = digitalRead(boton2);
  if (estado ==0){
    digitalWrite(led,HIGH);
     digitalWrite(led2,HIGH);
  }
else{
  digitalWrite(led,LOW);
   digitalWrite(led2,LOW);
}
   estado = digitalRead(boton3);
  if (estado ==0){
    digitalWrite(led,HIGH);
     digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
  }
  
else{
  digitalWrite(led,LOW);
   digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}
}
