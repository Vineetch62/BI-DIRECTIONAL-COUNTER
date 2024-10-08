# Bi-Directional Counter Using 8051 Microcontroller

This project is a Streamlit app that highlights important parts of contracts and identifies specific entities (like names or dates). It classifies contract clauses, checks for differences from a standard template, and marks those differences.



## Features

- **Infrared Sensing Mechanism:** The project uses two sets of infrared (IR)    sensors positioned at the entry and exit points. These sensors detect when a person crosses by emitting and receiving IR light, which is interrupted by movement, triggering the counting mechanism.
- **8051 Microcontroller:** The system is controlled by an 8051 microcontroller, which processes the signals from the IR sensors. It differentiates between entry and exit events and updates the count accordingly. The microcontroller ensures efficient real-time counting​.
- **Real-Time Data Display:** The visitor count is displayed in real-time on a 16x2 LCD display, providing a user-friendly interface that shows the number of people currently inside the monitored area​.
- **Power Efficiency and Customization:** The project includes components like a relay to manage power consumption by controlling the display unit during idle times. This extends the lifespan of the display and makes the system more efficient​.
- **Future Expansion Potential:** The project discusses future possibilities, including adding wireless data transmission for remote monitoring, integrating machine learning algorithms for better detection, and optimizing power consumption to enhance the system's capabilities​.



## Language and Software

- Embedded C
- Keil µVision 5
- Proteus Simulation Software

## Circuit Diagram

![Circuit Diagram](https://github.com/user-attachments/assets/77eb078b-2131-4f64-ad69-46052ade8f0c)

## Block Diagram

![Block Diagram](https://github.com/user-attachments/assets/463c6a73-0af3-4270-b5e5-9feccb377d59)

## Future Scope

Future improvements for the bidirectional visitor counter could include optimizing power consumption, resolving existing limitations, and adding wireless data transmission for remote monitoring. Incorporating machine learning algorithms would enhance the system’s ability to differentiate between humans and objects. Post-pandemic, these counters could be deployed in hospitals for additional features like mask detection, ensuring safety. Businesses could use the system to predict peak visitor times and optimize staffing. Additionally, the counter could connect to smartphones, laptops, or PCs for real-time data sharing and automation, allowing for adjustments in lighting and temperature based on crowd size.




