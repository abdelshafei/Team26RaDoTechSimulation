#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "User.h"
#include "HealthData.h"
#include "RaDoTechDevice.h"
#include "DataProcessor.h"
#include "Visualization.h"
#include "Recommendations.h"

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
