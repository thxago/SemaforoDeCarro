void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
  //Liga os semáforos vermelhos do cruzamento
  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH);
  
  //Aguarda 1000 milisegundos
  delay(1000);
  
  //Desliga o semáforo vermelho da vertical
  digitalWrite(8, LOW);
  
  //Liga o semáforo verde da vertical
  digitalWrite(10, HIGH);
  
  //Aguarda 3000 milisegundos
  delay(3000);
    
  //Desliga o semáforo verde da vertical
  digitalWrite(10, LOW);
    
  //Liga o semáforo amarelo da vertical
  digitalWrite(9, HIGH);
  
  //Aguarda 2000 milisegundos
  delay(2000);
    
  //Apaga o semáforo amarelo da vertical
  digitalWrite(9, LOW);
    
  //Liga o semáforo vermelho da vertical
  digitalWrite(8, HIGH);
    
  //Aguarda 1000 milisegundos
  delay(1000);
    
  //Desliga o semáforo vermelho da horizontal
  digitalWrite(13, LOW);
    
  //Liga o semáforo verde da horizontal
  digitalWrite(11, HIGH);
    
  //Aguarda 3000 milisegundos
  delay(3000);
    
  //Desliga o semáforo verde da horizontal
  digitalWrite(11, LOW);
    
  //Liga o semáforo amarelo da horizontal
  digitalWrite(12, HIGH);
    
  //Aguarda 2000 milisegundos
  delay(2000);
    
  //Apaga o semáforo amarelo da horizontal
  digitalWrite(12, LOW);
}