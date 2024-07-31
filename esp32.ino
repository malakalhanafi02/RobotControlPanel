#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "ssid";
const char* password = "pass";

// Replace with your server IP address
const char* serverName = "http://IPaddress/RobotControlPanel/display.php";

void setup() {
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("Connected to Wi-Fi");

  // Initial data fetch
  fetchData();
}

void loop() {
  // Periodically fetch data every 10 seconds
  fetchData();
  delay(3000); // 3 seconds delay
}

void fetchData() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverName);
    int httpResponseCode = http.GET();
    if (httpResponseCode > 0) {
      String payload = http.getString();
      Serial.println("HTTP Response code: " + String(httpResponseCode));
      Serial.println("Payload: " + payload);

      // Process the payload
      String command = parseCommand(payload);
      Serial.println("Last Command: " + command);
    } else {
      Serial.println("Error on HTTP request: " + String(httpResponseCode));
    }
    http.end();
  }
}

String parseCommand(String payload) {
  // Assuming the payload is in the format {"command":"value"}
  int startIndex = payload.indexOf("command\":\"") + 10;
  int endIndex = payload.indexOf("\"", startIndex);
  return payload.substring(startIndex, endIndex);
}

