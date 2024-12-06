#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "User.h"
#include "HealthData.h"
#include "RaDoTechDevice.h"
#include "DataProcessor.h"
#include "Visualization.h"
#include "Recommendations.h"

/* Class Purpose:
    * The MainWindow class is the main window of the application.
    * The class provides functions to switch between different views and pages of the application.
    * The class also handles user authentication, profile management, data processing, and device scanning.
    * 
    * Class Functions:
    * MainWindow(QWidget *parent = nullptr) - Constructor for the MainWindow class.
    * ~MainWindow() - Destructor for the MainWindow class.
    * showAppView() - Switches the view to the application view.
    * showDeviceView() - Switches the view to the device view.
    * showHomePage() - Switches the page to the home page.
    * showMeasureNowPage() - Switches the page to the measure now page.
    * showMeasureView() - Switches the page to the measure view.
    * showHistoricalPage() - Switches the page to the historical page.
    * showProfilePage() - Switches the page to the profile page.
    * showVisualizationPage() - Switches the page to the visualization page.
    * showCreateProfilePage() - Switches the page to the create profile page.
    * showLoginPage() - Switches the page to the login page.
    * saveProfile() - Saves the profile data to the current user.
    * showProfiles() - Shows the list of profiles for the current user.
    * updateProfilesList() - Updates the list of profiles in the profile page.
    * viewProfile() - Displays the details of a selected profile.
    * editProfile() - Allows the user to edit the details of a profile.
    * deleteProfile() - Deletes the selected profile.
    * goToCreateProfilePage() - Navigates to the create profile page.
    * showPersonalInfoPage() - Shows the personal information page.
    * saveResults() - Saves the results of the health data.
    * handleLogin() - Handles the login process.
    * populateHistoryList() - Populates the history list with health data.
    * viewDetails() - Displays the details of a selected health data.
    * populateIndicators(HealthData* selectedData) - Populates the health indicators based on the selected health data.
    * startScan() - Starts the scanning process.
    * nextScanPoint() - Moves to the next scan point during the scanning process.
    * performDeviceScan() - Performs the device scan.
    * timeOutforScan() - Handles the timeout for the scanning process.
    * 
    * Class Attributes:
    * presetUsers - A list of preset users for the application.
    * currentUser - The current user logged into the application.
    * visualizer - An instance of the Visualization class for generating visualizations.
    * recommendations - An instance of the Recommendations class for generating recommendations.
    * currentScanPoint - The current scan point during the scanning process.
    * totalScanPoints - The total number of scan points during the scanning process.
    * isDeviceScanned - A flag to indicate if the device has been scanned.
    * currProfile - The current profile being viewed or edited.
    * device - An instance of the RaDoTechDevice class for device operations.
    * processor - An instance of the DataProcessor class for processing data.
    * processedData - A map of processed data from the device scan.
    * batteryTimer - A timer for updating the battery level.
    * chargedBatteryTimer - A timer for updating the charged battery level.
    * scanTimer - A timer for the scanning process.
    * scantimercomplete - A flag to indicate if the scanning timer has completed.
*/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Switching View UI Functions
    void showAppView();
    void showDeviceView();

    // Switching App Pages UI Functions
    void showHomePage();
    void showMeasureNowPage();
    void showMeasureView();
    void showHistoricalPage();
    void showProfilePage();
    void showVisualizationPage();
    void showCreateProfilePage();
    void showLoginPage();

    // Profile Functions
    void saveProfile();
    void showProfiles();
    void updateProfilesList();
    void viewProfile();
    void editProfile();
    void deleteProfile();
    void goToCreateProfilePage();

    // History Data Functions
    void showPersonalInfoPage();
    void saveResults();

private slots:
    void handleLogin();
    void populateHistoryList();
    void viewDetails();
    void populateIndicators(HealthData* selectedData);
    void startScan();
    void nextScanPoint();
    void performDeviceScan();
    void timeOutforScan();

private:
    Ui::MainWindow *ui;
    QList<User*> presetUsers;
    User* currentUser;
    void createPresetUsers();
    Visualization* visualizer;
    Recommendations* recommendations;
    int currentScanPoint;
    int totalScanPoints;
    bool isDeviceScanned;
    Profile* currProfile;
    RaDoTechDevice device;
    DataProcessor processor;
    std::map<std::string, float> processedData;
    QTimer* batteryTimer;
    QTimer* chargedBatteryTimer;
    QTimer* scanTimer;
    bool scantimercomplete;

    QString getClassification(double value, double min, double max);
    void updateProcessedDataUI(const std::map<std::string, float>& processedData);
    QList<MeridianResult> convertProcessedDataToMeridianResults(const std::map<std::string, float>& processedData);
    void updateBatteryLevelLabel();
    void powerDevice();
    void shutDownDevice();
    void UpdateChargedBatteryLevelLabel();
    void ChargeBattery();
    void PairUp();



};
#endif // MAINWINDOW_H
