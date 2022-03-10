//Player1 button GND connect to GND, signal connect to digital 0, 5V connect to 5V
//Player2 button GND connect to GND, signal connect to digital 1, 5V connect to 5V
//Player1 joystick Left,Right,Down, Up connect to digital 14,15,16,17; GND to GND
//Player2 joystick Left,Right,Down, Up connect to digital 9,10,11,12; GND to GND

#include <Bounce.h>

Bounce button0 = Bounce(0, 10);
Bounce buttonL = Bounce(14, 10);
Bounce buttonR = Bounce(15, 10);
Bounce buttonD = Bounce(16, 10);
Bounce buttonU = Bounce(17, 10);
Bounce button1 = Bounce(1, 10);
Bounce buttonL1 = Bounce(9, 10);
Bounce buttonR1 = Bounce(10, 10);
Bounce buttonD1 = Bounce(11, 10);
Bounce buttonU1 = Bounce(12, 10);


void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT_PULLDOWN);
  pinMode(14,INPUT_PULLUP);
  pinMode(15,INPUT_PULLUP);
  pinMode(16,INPUT_PULLUP);
  pinMode(17,INPUT_PULLUP);
  pinMode(1,INPUT_PULLDOWN);
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
}

void loop() {

  button0.update();
  buttonL.update();
  buttonR.update();
  buttonD.update();
  buttonU.update();
  button1.update();
  buttonL1.update();
  buttonR1.update();
  buttonD1.update();
  buttonU1.update();

  //player1
  if (button0.risingEdge()) {
    Keyboard.press(' ');
  }
  if (button0.fallingEdge()) {
    Keyboard.release(' ');
  }
  if (buttonL.fallingEdge()) {
    Keyboard.press('a');
  }
  if (buttonL.risingEdge()) {
    Keyboard.release('a');
  }
  if (buttonR.fallingEdge()) {
    Keyboard.press('d');
  }
  if (buttonR.risingEdge()) {
    Keyboard.release('d');
  }
  if (buttonD.fallingEdge()) {
    Keyboard.press('s');
  }
  if (buttonD.risingEdge()) {
    Keyboard.release('s');
  }
  if (buttonU.fallingEdge()) {
    Keyboard.press('w');
  }
  if (buttonU.risingEdge()) {
    Keyboard.release('w');
  }

  //player2
  if (button1.risingEdge()) {
    Keyboard.press(KEY_ENTER);
  }
  if (button1.fallingEdge()) {
    Keyboard.release(KEY_ENTER);
  }
  if (buttonL1.fallingEdge()) {
    Keyboard.press(KEY_LEFT);
  }
  if (buttonL1.risingEdge()) {
    Keyboard.release(KEY_LEFT);
  }
  if (buttonR1.fallingEdge()) {
    Keyboard.press(KEY_RIGHT);
  }
  if (buttonR1.risingEdge()) {
    Keyboard.release(KEY_RIGHT);
  }
  if (buttonD1.fallingEdge()) {
    Keyboard.press(KEY_DOWN);
  }
  if (buttonD1.risingEdge()) {
    Keyboard.release(KEY_DOWN);
  }
  if (buttonU1.fallingEdge()) {
    Keyboard.press(KEY_UP);
  }
  if (buttonU1.risingEdge()) {
    Keyboard.release(KEY_UP);
  }

}
