int LED=13;//define LED port
int buttonpin=3; //define switch port
int  val;//define digital variable val
int estado;
void  setup()
{
pinMode(LED,OUTPUT);//define LED as a output port
pinMode(buttonpin,INPUT);//define switch as a output port
}
void  loop()


{ 
  estado=digitalRead(LED);val=digitalRead(buttonpin);//read the value of the digital interface 3 assigned to val 
if(val==HIGH)//when the switch sensor have signal, LED blink
{
digitalWrite(LED,!estado);
}
}


