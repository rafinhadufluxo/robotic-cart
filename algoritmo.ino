//Programa : Controle 2 motores DC usando Ponte H 

//Conexão dos pinos Arduino na Ponte H,  abaixo temos variaveis globais
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
  
void setup(){
 
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
}
  
void loop(){
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
}
