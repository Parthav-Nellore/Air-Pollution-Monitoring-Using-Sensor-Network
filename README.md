This project is an Air Pollution Monitoring System using a sensor network to detect various harmful gases in the environment. The system measures air quality by utilizing different gas sensors and sends real-time data to a monitoring system through serial communication.

Hardware Components:

	•	MQ135 Sensor: Detects air quality and measures gases such as carbon dioxide (CO₂), ammonia (NH₃), benzene, etc.
	•	MQ7 Sensor: Measures carbon monoxide (CO) concentration.
	•	MQ2 Sensor: Detects flammable gases and smoke.

Features:

	1.	Real-Time Monitoring: The system continuously reads gas concentrations from the MQ135, MQ7, and MQ2 sensors.
	2.	Analog-to-Voltage Conversion: The raw sensor data (analog values) are converted into voltages and then into parts per million (ppm) or resistance values using sensor-specific formulas.
	3.	Serial Communication: The processed data (ppm values and sensor resistance) are sent via serial communication for display or further processing.

Workflow:

	1.	Sensor Data Collection: The system reads analog values from the three gas sensors connected to the Arduino’s analog pins (A0, A1, A2).
	2.	Conversion to Usable Values:
	•	MQ135: The analog reading is converted to voltage, then to an approximate ppm using a formula.
	•	MQ7: Similarly, the analog value is converted to voltage, and the CO concentration is estimated in ppm.
	•	MQ2: The sensor’s resistance is calculated based on the voltage and used to assess the concentration of flammable gases.
	3.	Output: The ppm values from the MQ135 and MQ7 sensors, along with the resistance value from the MQ2 sensor, are printed to the serial monitor for real-time tracking.
	4.	Delay: The system waits for 3 seconds between readings to ensure the data is refreshed at regular intervals.

Code Overview:

	•	The system reads from analog pins connected to the MQ135, MQ7, and MQ2 sensors.
	•	The readings are converted to voltages, and calculations are performed to derive ppm and resistance values.
	•	Data is output to the serial monitor for easy observation.

This implementation serves as a basic air quality monitoring system that can be further expanded for different use cases like environmental monitoring, indoor air quality control, or integration into larger IoT systems.
