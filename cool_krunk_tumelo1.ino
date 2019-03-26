
int delayGreen = 4000;
int delayRed = 4000;
int delayYellow = 2000;

void setup()
{
  

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}

void AND(int a, int b){
   if(a == 1 && b == 1)
   		digitalWrite(12, HIGH);
   	else
      digitalWrite(12, LOW);
}

void OR(int a, int b){
   if(a == 1 || b == 1)
   		digitalWrite(7, HIGH);
   	else
      digitalWrite(7, LOW);
}

void NAND(int a, int b){
   if(!(a == 1 && b == 1))
   		digitalWrite(6, HIGH);
   	else
      digitalWrite(6, LOW);
}

void NOR(int a, int b){
   if(!(a == 1 || b == 1))
   		digitalWrite(5, HIGH);
   	else
      digitalWrite(5, LOW);
}

void XOR(int a, int b){
   if((a == 1 && b == 0) || (a == 0 && b == 1))
   		digitalWrite(4, HIGH);
   	else
      digitalWrite(4, LOW);
}

void XNOR(int a, int b){
   if((a == 1 && b == 1) || (a == 0 && b == 0))
   		digitalWrite(3, HIGH);
   	else
      digitalWrite(3, LOW);
}
  
void loop()
{
 int i = 1;
 int a = 0;
 int b = 0; 
 while(i<= 4){
    if(i <= 2)
      	a = 1;
   	if((i%2) == 0)
      	b = 1;
 	if(a == 1)
   		digitalWrite(10, HIGH);
   	else
      digitalWrite(10, LOW);
   
   if(b == 1)
   		digitalWrite(11, HIGH);
   	else
      digitalWrite(11, LOW);
   
   if(i == 4)
   		i = 1;
   else
      i++;
   AND(a,b);
   OR(a,b);
   NAND(a,b);
   NOR(a,b);
   XOR(a,b);
   XNOR(a,b);
   delay(3000);
   a = 0;b=0;
 }

  digitalWrite(6, HIGH); 
  
  digitalWrite(10, HIGH);
  delay (delayYellow);
  digitalWrite(10, LOW);
  
  digitalWrite(11, HIGH);
  delay (delayRed);
  digitalWrite(11, LOW);
  
  digitalWrite(6, LOW); 
  digitalWrite(4, HIGH); 
  
  digitalWrite(12, HIGH);
  delay(delayGreen); 
  digitalWrite(12, LOW);
  
  digitalWrite(4, LOW); 
  
  
}