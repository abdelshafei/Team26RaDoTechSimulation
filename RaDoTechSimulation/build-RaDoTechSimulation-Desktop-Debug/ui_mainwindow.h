/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *ViewsStackedWidget;
    QWidget *DeviceView;
    QPushButton *GoToAppViewButton;
    QLabel *DeviceNameLabel;
    QWidget *AppView;
    QPushButton *GoToDeviceViewButton;
    QStackedWidget *AppStackedWidget;
    QWidget *LoginRegisterPage;
    QLabel *LoginHeader;
    QWidget *HomePage;
    QLabel *HomeHeader;
    QWidget *MeasureNowPage;
    QLabel *MeasureHeader;
    QWidget *HistoricalPage;
    QLabel *HistoricalHeader;
    QWidget *ProfilePage;
    QLabel *ProfileHeader;
    QWidget *VisulizationPage;
    QLabel *VisulizationHeader;
    QPushButton *HomePageButton;
    QPushButton *MeasureNowButton;
    QPushButton *HistoricalPageButton;
    QPushButton *ProfilePageButton;
    QPushButton *VisulizationPageButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(820, 602);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ViewsStackedWidget = new QStackedWidget(centralwidget);
        ViewsStackedWidget->setObjectName(QString::fromUtf8("ViewsStackedWidget"));
        ViewsStackedWidget->setGeometry(QRect(0, 0, 811, 571));
        DeviceView = new QWidget();
        DeviceView->setObjectName(QString::fromUtf8("DeviceView"));
        GoToAppViewButton = new QPushButton(DeviceView);
        GoToAppViewButton->setObjectName(QString::fromUtf8("GoToAppViewButton"));
        GoToAppViewButton->setGeometry(QRect(680, 20, 131, 25));
        DeviceNameLabel = new QLabel(DeviceView);
        DeviceNameLabel->setObjectName(QString::fromUtf8("DeviceNameLabel"));
        DeviceNameLabel->setGeometry(QRect(10, 20, 151, 17));
        ViewsStackedWidget->addWidget(DeviceView);
        AppView = new QWidget();
        AppView->setObjectName(QString::fromUtf8("AppView"));
        GoToDeviceViewButton = new QPushButton(AppView);
        GoToDeviceViewButton->setObjectName(QString::fromUtf8("GoToDeviceViewButton"));
        GoToDeviceViewButton->setGeometry(QRect(680, 20, 131, 25));
        AppStackedWidget = new QStackedWidget(AppView);
        AppStackedWidget->setObjectName(QString::fromUtf8("AppStackedWidget"));
        AppStackedWidget->setGeometry(QRect(130, 0, 541, 551));
        LoginRegisterPage = new QWidget();
        LoginRegisterPage->setObjectName(QString::fromUtf8("LoginRegisterPage"));
        LoginHeader = new QLabel(LoginRegisterPage);
        LoginHeader->setObjectName(QString::fromUtf8("LoginHeader"));
        LoginHeader->setGeometry(QRect(20, 10, 71, 17));
        AppStackedWidget->addWidget(LoginRegisterPage);
        HomePage = new QWidget();
        HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomeHeader = new QLabel(HomePage);
        HomeHeader->setObjectName(QString::fromUtf8("HomeHeader"));
        HomeHeader->setGeometry(QRect(20, 10, 81, 17));
        AppStackedWidget->addWidget(HomePage);
        MeasureNowPage = new QWidget();
        MeasureNowPage->setObjectName(QString::fromUtf8("MeasureNowPage"));
        MeasureHeader = new QLabel(MeasureNowPage);
        MeasureHeader->setObjectName(QString::fromUtf8("MeasureHeader"));
        MeasureHeader->setGeometry(QRect(20, 10, 131, 17));
        AppStackedWidget->addWidget(MeasureNowPage);
        HistoricalPage = new QWidget();
        HistoricalPage->setObjectName(QString::fromUtf8("HistoricalPage"));
        HistoricalHeader = new QLabel(HistoricalPage);
        HistoricalHeader->setObjectName(QString::fromUtf8("HistoricalHeader"));
        HistoricalHeader->setGeometry(QRect(20, 10, 141, 17));
        AppStackedWidget->addWidget(HistoricalPage);
        ProfilePage = new QWidget();
        ProfilePage->setObjectName(QString::fromUtf8("ProfilePage"));
        ProfileHeader = new QLabel(ProfilePage);
        ProfileHeader->setObjectName(QString::fromUtf8("ProfileHeader"));
        ProfileHeader->setGeometry(QRect(20, 10, 91, 17));
        AppStackedWidget->addWidget(ProfilePage);
        VisulizationPage = new QWidget();
        VisulizationPage->setObjectName(QString::fromUtf8("VisulizationPage"));
        VisulizationHeader = new QLabel(VisulizationPage);
        VisulizationHeader->setObjectName(QString::fromUtf8("VisulizationHeader"));
        VisulizationHeader->setGeometry(QRect(20, 10, 131, 17));
        AppStackedWidget->addWidget(VisulizationPage);
        HomePageButton = new QPushButton(AppView);
        HomePageButton->setObjectName(QString::fromUtf8("HomePageButton"));
        HomePageButton->setGeometry(QRect(10, 30, 91, 25));
        MeasureNowButton = new QPushButton(AppView);
        MeasureNowButton->setObjectName(QString::fromUtf8("MeasureNowButton"));
        MeasureNowButton->setGeometry(QRect(10, 70, 91, 25));
        HistoricalPageButton = new QPushButton(AppView);
        HistoricalPageButton->setObjectName(QString::fromUtf8("HistoricalPageButton"));
        HistoricalPageButton->setGeometry(QRect(10, 110, 91, 25));
        ProfilePageButton = new QPushButton(AppView);
        ProfilePageButton->setObjectName(QString::fromUtf8("ProfilePageButton"));
        ProfilePageButton->setGeometry(QRect(10, 150, 91, 25));
        VisulizationPageButton = new QPushButton(AppView);
        VisulizationPageButton->setObjectName(QString::fromUtf8("VisulizationPageButton"));
        VisulizationPageButton->setGeometry(QRect(10, 190, 91, 25));
        ViewsStackedWidget->addWidget(AppView);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        GoToAppViewButton->setText(QCoreApplication::translate("MainWindow", "Go To App View", nullptr));
        DeviceNameLabel->setText(QCoreApplication::translate("MainWindow", "RaDoTech Device View", nullptr));
        GoToDeviceViewButton->setText(QCoreApplication::translate("MainWindow", "Go to Device View", nullptr));
        LoginHeader->setText(QCoreApplication::translate("MainWindow", "Login Page", nullptr));
        HomeHeader->setText(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
        MeasureHeader->setText(QCoreApplication::translate("MainWindow", "Measure Now Page", nullptr));
        HistoricalHeader->setText(QCoreApplication::translate("MainWindow", "Historical Data Page", nullptr));
        ProfileHeader->setText(QCoreApplication::translate("MainWindow", "Profile Page", nullptr));
        VisulizationHeader->setText(QCoreApplication::translate("MainWindow", "Visulization Page", nullptr));
        HomePageButton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        MeasureNowButton->setText(QCoreApplication::translate("MainWindow", "Measure Now", nullptr));
        HistoricalPageButton->setText(QCoreApplication::translate("MainWindow", "Historical", nullptr));
        ProfilePageButton->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        VisulizationPageButton->setText(QCoreApplication::translate("MainWindow", "Visulization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
