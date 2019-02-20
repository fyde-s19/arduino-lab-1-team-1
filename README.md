# arduino-lab-1-team-1

Questions:
Why do embedded systems need a setup and a loop?
  The purpose of Embedded Systems is to perform operations continuously at all times. The setup is where you initialize constants and the infinite loop is where you continuously execute the desired function as long as the System receives power. If there were no loop then the system would halt after executing the code once.

Why does our code need to be compiled?
  Our code needs to be compiled so that it can be converted to machine code (0's and 1's) for the computer to read.

When lowering the frequency in step four, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?
  Lowering the frequency increases the time period of each cycle of the PWM signal. The LED fades until it turns off completely.. If we want the led to just fade in and out smoothly the solution is to maintain a constant frequency and only alter the duty cycle. Having a constant high frequency is crucial. If we used PWM at lower/lowering frequencies then our eyes would be able to differentiate between ON and OFF times.  

Two Arduino Sketches:
Part 3's blinking sequence - 
      
      void setup() {
        // put your setup code here, to run once:
        pinMode(LED_BUILTIN, OUTPUT);
      }

      void timedBlink(int interval){
        digitalWrite(LED_BUILTIN, HIGH);
        delay(interval*1000);
        digitalWrite(LED_BUILTIN, LOW);
        delay(1000);
      }

      void loop() {
        // put your main code here, to run repeatedly:
        timedBlink(1);
        timedBlink(2);
        timedBlink(3);
      }

Part 4 with the fading dimmer code -


int dutyup=0;
  int dirflag=0;
  int freq=100;
  
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
    dimmer(freq, dutyup);
    if(dutyup==100&&dirflag==0)
    {dirflag=1;
    }
    else if(dutyup==0&&dirflag==1)
    {dirflag=0;
      }
      if(dirflag==0)
      {dutyup++;
        }
        else if(dirflag==1)
        {dutyup--;
          }
 
   
  
   }

