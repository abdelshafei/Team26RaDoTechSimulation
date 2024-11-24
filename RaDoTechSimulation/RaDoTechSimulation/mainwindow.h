#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "User.h"

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
    void showHistoricalPage();
    void showProfilePage();
    void showVisualizationPage();
    void showCreateProfilePage();
    void showLoginPage();
    void showBarGraph();
    void showRadarChart();

    void saveProfile(); // Save a new profile for the user
    void showProfiles(); // Display all profiles for the user
    void updateProfilesList();


private:
    Ui::MainWindow *ui;
    User* currentUser;
};
#endif // MAINWINDOW_H
