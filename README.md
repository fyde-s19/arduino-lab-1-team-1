# arduino-lab-1-team-1

Questions:
Why do embedded systems need a setup and a loop?
  

Why does our code need to be compiled?
  Our code needs to be compiled so that it can be converted to machine code (0's and 1's) for the computer to read.

When lowering the frequency in step four, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?
  

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
