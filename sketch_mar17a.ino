`#include <OneWire.h>
#include <DallasTemperature.h>

// GPIO where the DS18B20 is connected to
const int oneWireBus = X; // X à remplacer par la broche connecté au capteur

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(oneWireBus);

// Pass our oneWire reference to Dallas Temperature sensor
DallasTemperature sensors(&oneWire);

void setup() {
// Start the Serial Monitor
Serial.begin(9600);
// Start the DS18B20 sensor
sensors.begin();
}

void loop() {
sensors.requestTemperatures();
float temperatureC = sensors.getTempCByIndex(0);
Serial.print("Temperature: ");
Serial.println(temperatureC);
delay(5000); // Send every 5 seconds
}`