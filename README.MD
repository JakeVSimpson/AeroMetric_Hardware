# AeroMetric:

## STM32 Nucleo 64 Particulate Matter Monitoring System

Monitor and visualize particulate matter levels using an STM32 Nucleo 64 board, PMS5003 sensor, a passive buzzer for alerts, and an 8x64 matrix display for data visualization.

## Materials Needed

- STM32 Nucleo board
- Breadboard
- PMS5003 Particulate Matter Sensor
- Passive Buzzer
- Matrix Display (8x64)
- Jumper wires

## Instructions

### 1. **Setting Up the Nucleo Board:**

- Place on a non-conductive surface.
- Ensure all pins are straight.

### 2. **Setting Up the Breadboard:**

- Position next to the Nucleo board.
- Ensure clean and accessible power rails.

### 3. **Connecting the PMS5003:**

- Connect to the breadboard as per design.
- Ensure correct wiring of polarity and data pins.

### 4. **Setting Up the Passive Buzzer:**

- Insert onto the specified pins on the Nucleo board.

### 5. **Connecting the Matrix Display:**

- Position near the setup, connect to Nucleo board as per design.
- Ensure correct connections of data, clock, CS, power, and ground lines.

### 6. **Wiring the Components:**

- Make necessary connections as shown in the design.
- Ensure firm connections with no risk of short-circuiting.

### 7. **Final Checks:**

- Double-check all connections against design.
- Ensure powered off Nucleo board before making or changing connections.

### 8. **Power Up:**

- Verify all connections, power on the Nucleo board.
- Connect the Power Supply Adapter to the breadboard.

## Notes & Tips

- Ensure proper orientation of PMS5003 for accurate airflow measurements.
- Use the passive buzzer for alerting based on PMS5003 data (details in software design).
- Power off setup before making any connection changes to prevent accidental shorts.
- If any matrix display LEDs are not illuminating, double-check your connections.
