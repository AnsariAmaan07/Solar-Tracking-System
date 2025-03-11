#include <Servo.h>

// Define servo objects for horizontal and vertical movement
Servo horizontal; // Horizontal servo
Servo vertical;   // Vertical servo

// Initial positions for servos
int servoh = 180; // Horizontal servo position
int servov = 5;   // Vertical servo position

// Define limits for servo movement
int servohLimitHigh = 175; // Maximum horizontal angle
int servohLimitLow = 5;    // Minimum horizontal angle
int servovLimitHigh = 160; // Maximum vertical angle
int servovLimitLow = 10;   // Minimum vertical angle

// LDR (Light Dependent Resistor) pin connections
int ldrlt = A0; // LDR top left
int ldrrt = A1; // LDR top right
int ldrld = A3; // LDR down left
int ldrrd = A4; // LDR down right

// Timing and tolerance values
int dtime = 10; // Delay time between adjustments
int tol = 90;   // Tolerance for light difference

void setup() {
  // Attach servos to their respective pins
  horizontal.attach(9);  // Horizontal servo on pin 9
  vertical.attach(10);    // Vertical servo on pin 10

  // Initialize servos to their default positions
  horizontal.write(90);   // Center horizontal servo
  vertical.write(90);     // Center vertical servo

  // Allow time for servos to reach initial positions
  delay(3000);
}

void loop() {
  // Read values from LDRs
  int lt = analogRead(ldrlt); // Top left LDR
  int rt = analogRead(ldrrt); // Top right LDR
  int ld = analogRead(ldrld); // Down left LDR
  int rd = analogRead(ldrrd); // Down right LDR

  // Calculate average light values for each quadrant
  int avt = (lt + rt) / 2; // Average value top
  int avd = (ld + rd) / 2; // Average value down
  int avl = (lt + ld) / 2; // Average value left
  int avr = (rt + rd) / 2; // Average value right

  // Calculate differences in light intensity
  int dvert = avt - avd;  // Difference between top and bottom
  int dhoriz = avl - avr; // Difference between left and right

  // Adjust vertical servo position based on light difference
  if (-1 * tol > dvert || dvert > tol) {
    if (avt > avd) {
      servov = ++servov; // Move servo up
      if (servov > servovLimitHigh) {
        servov = servovLimitHigh; // Limit vertical movement
      }
    } else if (avt < avd) {
      servov = --servov; // Move servo down
      if (servov < servovLimitLow) {
        servov = servovLimitLow; // Limit vertical movement
      }
    }
    vertical.write(servov); // Update vertical servo position
  }

  // Adjust horizontal servo position based on light difference
  if (-1 * tol > dhoriz || dhoriz > tol) {
    if (avl > avr) {
      servoh = --servoh; // Move servo left
      if (servoh < servohLimitLow) {
        servoh = servohLimitLow; // Limit horizontal movement
      }
    } else if (avl < avr) {
      servoh = ++servoh; // Move servo right
      if (servoh > servohLimitHigh) {
        servoh = servohLimitHigh; // Limit horizontal movement
      }
    } else if (avl == avr) {
      delay(5000); // Pause if light is balanced
    }
    horizontal.write(servoh); // Update horizontal servo position
  }

  // Add a delay to stabilize the system
  delay(dtime);
}