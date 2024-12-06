### Textual Representation of the UML Class Diagram

---

### 1. MainWindow Class:
#### Responsibilities:
The MainWindow class is the central hub of the application. It is responsible for managing the UI, interacting with the user, and coordinating with various classes to execute the app's functionality.

#### Key Relationships:
- **User (1..*)**: MainWindow has a **one-to-many** relationship with User. A user can have multiple profiles. The MainWindow interacts with the User class for actions like login, creating profiles, and switching between views.
- **Profile (1..*)**: Each user can have multiple profiles (1..*). MainWindow accesses profiles of the logged-in user and allows interactions like profile creation, editing, and viewing.
- **HealthData (0..*)**: The MainWindow indirectly interacts with HealthData through the Profile class. Each Profile may have zero or more HealthData records, depending on how many scans the user has performed.
- **Device (1..1)**: MainWindow has a **one-to-one** relationship with Device. A device is required to perform the scans. It is managed in MainWindow to start scans and collect data.
- **Battery (1..1)**: MainWindow has a **one-to-one** relationship with Battery to monitor and update the device's battery status.
- **Visualization (1..1)**: The MainWindow coordinates with the Visualization class to display charts (e.g., bar graphs, radar charts) and process health data.
- **Recommendation (0..1)**: MainWindow interacts with Recommendation to display recommendations based on health data. There is a **zero or one** relationship, meaning the recommendations may or may not be generated depending on the data.
- **DataProcessor (1..1)**: MainWindow uses DataProcessor to process raw data from the device and generate valid health data. It is **one-to-one**, as each scan corresponds to a single data processing operation.
- **QTimer (0..*)**: The QTimer class is used in multiple contexts in MainWindow (e.g., to manage scan durations). It is associated with specific operations like scan timing, so it can have **zero or many** relationships with operations in MainWindow.

---

### 2. User Class:
#### Responsibilities:
The User class represents a user in the system. It stores user information such as email and password, and manages the profiles associated with the user.

#### Key Relationships:
- **Profile (1..*)**: A user can have multiple profiles (1..*). The User class manages these profiles, allowing users to add, delete, or update profiles.
- **HealthData (0..*)**: Although HealthData is not directly part of the User class, it is indirectly associated with the User class through the Profile. Each Profile may contain HealthData.

---

### 3. Profile Class:
#### Responsibilities:
The Profile class represents a user's health profile. It stores the personal information of the user and contains health data recorded during scans.

#### Key Relationships:
- **HealthData (0..*)**: A profile can have multiple health data records (0..*). These records store the results of different scans over time.
- **User (1..1)**: A profile belongs to exactly one user, establishing a **one-to-one** relationship.

---

### 4. HealthData Class:
#### Responsibilities:
The HealthData class holds the results of a scan, including the values of different meridians and comments. It also provides methods to calculate health indicators based on the scan results.

#### Key Relationships:
- **MeridianResult (1..*)**: Each HealthData contains a list of MeridianResult objects (1..*), representing individual scan results for different meridians.
- **Comments (0..*)**: A HealthData may have zero or more Comments that provide additional context (e.g., blood pressure, body temperature) for that particular health scan.
- **Profile (1..1)**: Each HealthData belongs to exactly one Profile, so there is a **one-to-one** relationship.

---

### 5. MeridianResult Struct:
#### Responsibilities:
The MeridianResult struct holds the results of a scan for a specific meridian, including the conductance (in µA) and the status (e.g., "Normal", "Low", "High").

#### Key Relationships:
- **HealthData (0..*)**: A MeridianResult is part of a HealthData object, meaning that each HealthData contains multiple MeridianResult entries.

---

### 6. Comments Struct:
#### Responsibilities:
The Comments struct stores additional information related to a health scan, such as blood pressure, heart rate, body temperature, and emotional state.

#### Key Relationships:
- **HealthData (0..*)**: Comments is associated with HealthData, and a HealthData object may have zero or more comments.

---

### 7. Device Class:
#### Responsibilities:
The Device class represents the physical device used to perform the health scans. It is responsible for starting the scan, collecting raw data, and ensuring that the device is correctly paired and ready for use.

#### Key Relationships:
- **MainWindow (1..1)**: The Device class is used by MainWindow to start and manage scans. This is a **one-to-one** relationship.
- **Battery (1..1)**: The Device is associated with a **one-to-one** relationship with Battery for monitoring the device's battery status.

---

### 8. Battery Class:
#### Responsibilities:
The Battery class tracks the battery level of the device. It manages charging, depletion, and provides the current battery level to the MainWindow.

#### Key Relationships:
- **Device (1..1)**: A device has exactly one battery. The Battery class monitors and reports the status of the device's battery.

---

### 9. Visualization Class:
#### Responsibilities:
The Visualization class is responsible for generating visual representations of the health data (e.g., bar graphs, radar charts) to display the results of the scans in a meaningful way.

#### Key Relationships:
- **HealthData (1..1)**: The Visualization class works with HealthData to generate charts and graphs based on the scan results.
- **MainWindow (1..1)**: MainWindow uses Visualization to display health metrics, including bar charts and radar charts.

---

### 10. DataProcessor Class:
#### Responsibilities:
The DataProcessor class processes raw data collected from the device. It validates the data and prepares it for use in generating health metrics and HealthData.

#### Key Relationships:
- **MainWindow (1..1)**: MainWindow interacts with DataProcessor to validate and process the raw data collected from the device. It ensures that the data is valid before proceeding with the scan.

---

### 11. Recommendation Class:
#### Responsibilities:
The Recommendation class generates health recommendations based on the results of the scans. For example, it might suggest improvements to diet, exercise, or lifestyle based on the health data collected.

#### Key Relationships:
- **HealthData (1..1)**: The Recommendation class uses HealthData to generate recommendations based on the scan results.
- **MainWindow (0..1)**: MainWindow can use the Recommendation class to display recommendations based on the health data collected during the scans. This is a **zero or one** relationship since recommendations are optional.

