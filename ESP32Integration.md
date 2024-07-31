# ESP32 Integration with Robot Control Panel

<img width="838" alt="image" src="https://github.com/user-attachments/assets/3f77fa14-def7-4722-86de-bd843e4c5204">

https://github.com/user-attachments/assets/385e7733-f86a-4e6e-a553-b85b8c34fafb


#### This project shows how to use an ESP32 to fetch the latest command data from a local server and display it using the Serial Monitor.

## Requirements

- ESP32 board
- Arduino IDE
- Wi-Fi network
- Local server with XAMPP
- PHP files (`control.php` and `display.php`) set up in the `htdocs` directory
- [Code](esp32.ino)

## Testing the Setup

1. Open the Serial Monitor in the Arduino ID
2. Set the baud rate to 115200
3. Watch the Serial Monitor for messages indicating connection status and data fetched from the server
4. You should see updates with the latest command fetched from the server
