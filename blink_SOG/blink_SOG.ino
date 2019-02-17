
int dutyup=0;
  int dirflag=0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  
}
void timedBlink(int interval){
  digitalWrite(LED_BUILTIN  , HIGH);
  delay(interval*1000);
  digitalWrite(LED_BUILTIN  , LOW);
  delay(1000);
  }
void dimmer(int freq, int duty){
  int period, onTime, offTime;
  period=1000/freq;
  onTime=period*duty/100;
  offTime=period-onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
   digitalWrite(LED_BUILTIN, LOW);
   delay(offTime);
  }
// the loop function runs over and over again forever
void loop() {
    dimmer(100, dutyup);
    if(dutyup==100&&dirflag==0)
    {dirflag=1;
    }
    else if(dutyup==0&&dirflag==1)
    {dirflag=0;
      }
      if(dirflag==0)
      {dutyup+=10;
        }
        else if(dirflag==1)
        {dutyup-=10;
          }
    
  
   }
