# **RaDoTech Simulation**

## **Project Overview**
This project simulates the functionality of the RaDoTech health monitoring device, including scanning, data processing, and visualization of health metrics. The system allows users to initiate scans, view results in charts, and monitor device states like battery level.

---

## **Team Members and Contributions**

| **Name**          | **Role**                         | **Contributions**                                                                                                                                                  |
|--------------------|----------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **William Marcus**    | Developer        | Developed code for the scan process in the `RaDoTechDevice` and `DataProcessor` class along with the data visualizations within the `Visualization` class. Created state machine diagrams for the app and device.      |
| **Param Desai**   | Developer               |     |
| **JC Sevigny**   | Developer        |            |
| **Abdelrahman ElShafay**   | Developer          | Designed and implemented functionality for the Battery object class within the RaDoTechDevice, including depletion and charging mechanisms, as well as the logic for device pairing initialization. Developed a comprehensive Traceability Matrix to ensure requirements alignment. Created detailed UML Class and Use Case Diagrams, refining existing use cases for accuracy and completeness in the use cases form. |

---

## **Why We Picked This Approach**

### Design Patterns
- Observer Pattern
    - The Qt's Signal SLot Merchanism is an implemtation of the observer pattern used in this project. The mechanism helps enabling communication between the components and classes to emit a signal by one obect when a certain event happens and the other obhects that are connected to htis singal respond by invoking slots.
- Mediator Pattern
    - The `Mainwindow` class serves as the mediator between the `RaDoTechDevice` class to the `DataProcessor` class and then to the `HealthData` class to push the data from the scan made from the device to the `HealthData` class after the data is processed and so the `MainWindow` class acts like the mediator between the classes.
    - Another example is when the `MainWindow` class is responsible of showing the data from the `HealthData` class to the UI, so the `MainWindow` class grabs the data from the `HealthData` class and distributes it to the `Visulization` and the `Recommendation` classes to display the data.
- Strategy Pattern
    - The `HealthData` class uses the strategy pattern to run the algorithms to calculate the health indicator data values like the Energy level and the Immune System level data values using formulas we researched. 
    - So this pattern is used just to run the algorithms on the data given after scans to visualize the historical data.
- State Pattern
    - This pattern is used in the `RaDoTechDevice` class to change the state of the device from ON to OFF and vice versa. Also used to change the state of the device from scanning the user to not scanning the user and staying idle while the battery is depleting. 

### Explaination on using the approach
- The team wanted this approach to be an experience of using the app and the device properly instead of having simulations run a lot of the main functionality. We went with two different proper views in this project which was the device view and the app view. The device view is the view of the device itself which has the buttons that the actual device would have like the battery charging, scanning on skin and taking off skin, connecting to the app and major display of the battery level of the device. The app view shows the actual app view of the RaDoTech app which has the different tabs of the history data which has the visulization of the data, login page, create profile page and also viewing all of the created profiles. This approach was chosen to give a real life experience of using the device and the app and to show the functionality of both of them. 
- For the algorithm to get the health indicator data points this was the initial research that was done through the RaDoTech website and also using AI to get the algorithms made from the sample data points from the video we were shown in class. These are the calculations we researched and used through the data points:

### **Health Indicators and Professional Practitioner Formulas**

#### **Functional Health Indicators**

1. **Energy Level**
$$
\text{Energy Level} = \frac{\text{Left Total} + \text{Right Total}}{\text{Total Meridians} \times \text{Energy Scaling Factor}}
$$
- **Scaling Factor**: 2.78
- **Normal Range**: 25-55

---

2. **Immune System**
$$
\text{Immune System} = \frac{\text{Upper Body Left Total} + \text{Upper Body Right Total}}{6 \times \text{Immune Scaling Factor}}
$$
- Includes all upper body meridians starting with "H".
- **Scaling Factor**: 52.1
- **Normal Range**: 47-57
---

3. **Metabolism**
$$
\text{Metabolism} = \frac{\text{Left Total}}{\text{Right Total}}
$$
- Ratio of left to right side conductance.
- **Normal Range**: 1.1-1.2
---

4. **Psycho-Emotional State**
$$
\text{Psycho-Emotional State} = \frac{\text{Sum of Emotional Meridians Conductance}}{\text{Number of Emotional Meridians} \times \text{Emotional Scaling Factor}}
$$
- Emotional meridians include H1 (Lung) and H2 (Pericardium).
- **Scaling Factor**: 80.71
- **Normal Range**: 0.8-1.2

---

5. **Musculoskeletal System**
$$
\text{Musculoskeletal System} = \frac{\text{Lower Body Left Total} + \text{Lower Body Right Total}}{6 \times \text{Musculoskeletal Scaling Factor}}
$$
- Includes all lower body meridians starting with "F".
- **Scaling Factor**: 86.0
- **Normal Range**: 0.9-1.2

---

#### **Professional Practitioner Data Points**

1. **Average Value**
$$
\text{Average Value} = \frac{\text{Left Total} + \text{Right Total}}{\text{Total Meridians} \times \text{Energy Scaling Factor}}
$$

---

2. **Left Total**
$$
\text{Left Total} = \sum \text{Conductance of All Left-Side Meridians}
$$

---

3. **Right Total**
$$
\text{Right Total} = \sum \text{Conductance of All Right-Side Meridians}
$$

---

4. **Left-Right Ratio**
$$
\text{Left-Right Ratio} = \frac{\text{Left Total}}{\text{Right Total}}
$$

---

5. **Upper Total**
$$
\text{Upper Total} = \text{Upper Body Left Total} + \text{Upper Body Right Total}
$$
- Includes all upper body meridians starting with "H".

---

6. **Lower Total**
$$
\text{Lower Total} = \text{Lower Body Left Total} + \text{Lower Body Right Total}
$$
- Includes all lower body meridians starting with "F".

---

7. **Upper-Lower Ratio**
$$
\text{Upper-Lower Ratio} = \frac{\text{Upper Total}}{\text{Lower Total}}
$$

---

## **Organization of Team26RaDoTechSimulation.zip**

### *Design Documentation*
- Class Diagram
    - `Class Diagram/UMLClassDiagram.png`: UML Class diagram
    - `Class Diagram/TextualRepresentationUML.md`: UML Class diagram textual explanation
- Sequence Diagrams
    - `Sequence Diagrams/Battery.png`: Battery charge and depletion sequence diagram
    - `Sequence Diagrams/Battery_Textual_Explanation.txt`: Battery charge and depletion sequence diagram textual explanation
    - `Sequence Diagrams/CUD_Profile.png`: Create, update and delete profiles sequence diagram
    - `Sequence Diagrams/CUD_Profile_Textual_Explanation.txt`: Create, update and delete profiles sequence diagram textual explanation
    - `Sequence Diagrams/Login-Sequence.png`: Login sequence diagram
    - `Sequence Diagrams/Login-Sequence_Textual_Explanation.txt`: Login sequence diagram textual explanation
    - `Sequence Diagrams/Register_and_NewProfile.png` Register user and create new profile sequence diagram
    - `Sequence Diagrams/Register_and_NewProfile_Textual_Explanation.txt`: Register user and create new profile sequence diagram textual explanation
    - `Sequence Diagrams/Successful_Scan.png` Successful scan sequence diagram
    - `Sequence Diagrams/Successful_Scan_Textual_Explanation.txt`: Successful scan sequence diagram textual explanation
    - `Sequence Diagrams/View_History.png`: View scan history sequence diagram
    - `Sequence Diagrams/View_History_Textual_Explanation.txt`: View scan history sequence diagram textual explanation
- State Machine Diagrams
    - `State Machine Diagrams/App_State_Machine.png`: Applicaiton state machine diagram
    - `State Machine Diagrams/App_State_Machine_Textual_Explanations.txt`: Applicaiton state machine diagram textual explanation
    - `State Machine Diagrams/Device_State_Machine.png`: Device state machine diagram
    - `State Machine Diagrams/Device_State_Machine_Textual_Explanations.txt`: Device state machine diagram textual explanation
- Requirements Traceability Matrix
    - `Traceability Matrix/TraceabilityMatrix.pdf`: Requirements traceability matrix
- Use Cases
    - `Use Cases/UseCasesForm.pdf`: Use cases document
    - `Use Cases/UseCasesDiagram.png`: Use case diagram 

### *Videos for Running Simulation Through Specified Scenarios*
- Videos
    - `Videos/LoginAndCUDProfile.mp4`: Video demonstrating login and create, update, delete profile
    - `Videos/RegisteringUserSequenceDiagramDemo.mp4`: Video demonstrating user registration and profile creation
    - `Videos/BatterySequenceDiagramDemo.mp4`: Video demonstrating battery charging and depletion
    - `Videos/Successful_Scan.mp4`: Video demonstrating process of pairing device performing successful scan
    - `Videos/ViewHistorySequenceVideo.mp4`: Video demonstrating viewing of historical data

### *Steps To Run Application*
#### *Prerequisites*
- QT Creator
- QT Charts
    - run this command in the terminal `sudo apt install libqt5charts5-dev`

#### *Steps To Run*
1. Unzip the file `Team26RaDoTechSimulation.zip`
2. Open .pro file located in `RaDoTechSimulation/RaDoTechSimulation/RaDoTechSimulation.pro` in QT Creator
3. Clean the project
4. Build the project
5. Run the project
