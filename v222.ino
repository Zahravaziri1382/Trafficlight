int green=13;
int yellow=12;
int red=11;
void setup() {
 pinMode(green,OUTPUT); // set pin13asOUTPUT 
 pinMode(yellow,OUTPUT);//set pin12 asOUTPUT
pinMode(red,OUTPUT);//set pin11 as OUTPUT
}

void loop() {
 digitalWrite(green,HIGH);//turn on green led
digitalWrite(yellow,LOW); // turn off yellow led  
digitalWrite(red,LOW);//turn off red led
delay(2000);// 2000 repetitions
digitalWrite(green,LOW);//turn off green led
digitalWrite(yellow,HIGH);// turn on yellow led 
digitalWrite(red,LOW);//turn off red led
delay(1000);//1000 repetitions
digitalWrite(green,LOW);//turn off green led
digitalWrite(yellow,LOW);// turn off yellow led 
digitalWrite(red,HIGH);//turn on red led
delay(2000);// 2000 repetitions
}
