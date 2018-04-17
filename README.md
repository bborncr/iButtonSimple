# iButton Simple 

Example code for Arduino

Requires the [OneWire](https://www.pjrc.com/teensy/td_libs_OneWire.html) library. Installable directly from the Library Manager.

1. Connect Data to pin 4 on Arduino.
1. Connect 4.7k pullup resistor from pin 4 to 5V on Arduino.
1. Connect Ground to GND on Arduino.
1. Upload sketch to Arduino.
1. Open Serial Monitor with 9600 baud.
1. Touch the iButtons (DS1990A) to the iProbe, the serial number should display.

## DS9029L iProbe with LED
| Pin     | Color   | Function  |
|---|---|---|
| 4       | Green   | Data      |
| 3       | Black   | LED +     |
| 2       | White   | LED -     |
| 1       | Red     | Ground    |