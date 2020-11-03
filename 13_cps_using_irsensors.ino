int ir1=13;
int ir2=12;
int number=10;
int ir1_out=LOW;
int ir2_out=LOW;
int count=0;
void setup()
{
  pinMode (ir1,INPUT);
  pinMode (ir2,INPUT);
  Serial.begin(9600);
}
void loop()
{
  ir1_out=digitalRead(ir1);
  ir2_out=digitalRead(ir2);
  if(ir1_out==LOW)
  {
    count++;
    if(count>number)
    {
      count=1;
    }
    Serial.println(count);
    delay(1000);
  }
  if (ir2_out==LOW)
  {
    if (number)
    {
      number--;
      Serial.println(number);
      delay(1000);
    }
  }
}
