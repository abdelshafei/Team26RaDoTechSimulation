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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QLabel *BatteryLabel;
    QProgressBar *BatteryPowerProgressBar;
    QWidget *AppView;
    QPushButton *GoToDeviceViewButton;
    QStackedWidget *AppStackedWidget;
    QWidget *CreateProfilePage;
    QLabel *CreateHeader;
    QLabel *loginImage;
    QTextEdit *ProfileNameTextEdit;
    QComboBox *GenderComboBox;
    QLabel *GenderLabel;
    QLabel *WeightLabel;
    QTextEdit *WeightTextEdit;
    QLabel *HeightLabel;
    QTextEdit *HeightTextEdit;
    QLabel *DateOfBirthLabel;
    QDateEdit *DOBEdit;
    QPushButton *pushButton;
    QTextEdit *LoginTextEdit;
    QTextEdit *PasswordTextEditCreate;
    QWidget *LoginPage;
    QLabel *TitleLabel_2;
    QTextEdit *LoginEmailTextEdit;
    QTextEdit *PasswordTextEdit;
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
    QWidget *chartContainer;
    QPushButton *HomePageButton;
    QPushButton *MeasureNowButton;
    QPushButton *HistoricalPageButton;
    QPushButton *ProfilePageButton;
    QPushButton *VisulizationPageButton;
    QWidget *AppStartPage;
    QLabel *TitleLabel;
    QPushButton *CreateProfileButton;
    QPushButton *EnterButton;
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
        BatteryLabel = new QLabel(DeviceView);
        BatteryLabel->setObjectName(QString::fromUtf8("BatteryLabel"));
        BatteryLabel->setGeometry(QRect(10, 60, 91, 17));
        BatteryPowerProgressBar = new QProgressBar(DeviceView);
        BatteryPowerProgressBar->setObjectName(QString::fromUtf8("BatteryPowerProgressBar"));
        BatteryPowerProgressBar->setGeometry(QRect(110, 60, 118, 23));
        BatteryPowerProgressBar->setValue(8);
        ViewsStackedWidget->addWidget(DeviceView);
        AppView = new QWidget();
        AppView->setObjectName(QString::fromUtf8("AppView"));
        GoToDeviceViewButton = new QPushButton(AppView);
        GoToDeviceViewButton->setObjectName(QString::fromUtf8("GoToDeviceViewButton"));
        GoToDeviceViewButton->setGeometry(QRect(680, 20, 131, 25));
        AppStackedWidget = new QStackedWidget(AppView);
        AppStackedWidget->setObjectName(QString::fromUtf8("AppStackedWidget"));
        AppStackedWidget->setGeometry(QRect(130, 0, 541, 551));
        CreateProfilePage = new QWidget();
        CreateProfilePage->setObjectName(QString::fromUtf8("CreateProfilePage"));
        CreateHeader = new QLabel(CreateProfilePage);
        CreateHeader->setObjectName(QString::fromUtf8("CreateHeader"));
        CreateHeader->setGeometry(QRect(20, 10, 91, 17));
        loginImage = new QLabel(CreateProfilePage);
        loginImage->setObjectName(QString::fromUtf8("loginImage"));
        loginImage->setGeometry(QRect(20, 30, 81, 71));
        ProfileNameTextEdit = new QTextEdit(CreateProfilePage);
        ProfileNameTextEdit->setObjectName(QString::fromUtf8("ProfileNameTextEdit"));
        ProfileNameTextEdit->setGeometry(QRect(100, 40, 211, 21));
        GenderComboBox = new QComboBox(CreateProfilePage);
        GenderComboBox->setObjectName(QString::fromUtf8("GenderComboBox"));
        GenderComboBox->setGeometry(QRect(100, 90, 86, 25));
        GenderLabel = new QLabel(CreateProfilePage);
        GenderLabel->setObjectName(QString::fromUtf8("GenderLabel"));
        GenderLabel->setGeometry(QRect(100, 70, 62, 17));
        WeightLabel = new QLabel(CreateProfilePage);
        WeightLabel->setObjectName(QString::fromUtf8("WeightLabel"));
        WeightLabel->setGeometry(QRect(10, 120, 81, 17));
        WeightTextEdit = new QTextEdit(CreateProfilePage);
        WeightTextEdit->setObjectName(QString::fromUtf8("WeightTextEdit"));
        WeightTextEdit->setGeometry(QRect(90, 120, 211, 21));
        HeightLabel = new QLabel(CreateProfilePage);
        HeightLabel->setObjectName(QString::fromUtf8("HeightLabel"));
        HeightLabel->setGeometry(QRect(10, 150, 81, 17));
        HeightTextEdit = new QTextEdit(CreateProfilePage);
        HeightTextEdit->setObjectName(QString::fromUtf8("HeightTextEdit"));
        HeightTextEdit->setGeometry(QRect(90, 150, 211, 21));
        DateOfBirthLabel = new QLabel(CreateProfilePage);
        DateOfBirthLabel->setObjectName(QString::fromUtf8("DateOfBirthLabel"));
        DateOfBirthLabel->setGeometry(QRect(10, 190, 91, 17));
        DOBEdit = new QDateEdit(CreateProfilePage);
        DOBEdit->setObjectName(QString::fromUtf8("DOBEdit"));
        DOBEdit->setGeometry(QRect(100, 185, 201, 31));
        pushButton = new QPushButton(CreateProfilePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 290, 231, 25));
        LoginTextEdit = new QTextEdit(CreateProfilePage);
        LoginTextEdit->setObjectName(QString::fromUtf8("LoginTextEdit"));
        LoginTextEdit->setGeometry(QRect(10, 220, 211, 21));
        PasswordTextEditCreate = new QTextEdit(CreateProfilePage);
        PasswordTextEditCreate->setObjectName(QString::fromUtf8("PasswordTextEditCreate"));
        PasswordTextEditCreate->setGeometry(QRect(10, 250, 211, 21));
        AppStackedWidget->addWidget(CreateProfilePage);
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        TitleLabel_2 = new QLabel(LoginPage);
        TitleLabel_2->setObjectName(QString::fromUtf8("TitleLabel_2"));
        TitleLabel_2->setGeometry(QRect(190, 70, 171, 41));
        QFont font;
        font.setPointSize(25);
        TitleLabel_2->setFont(font);
        LoginEmailTextEdit = new QTextEdit(LoginPage);
        LoginEmailTextEdit->setObjectName(QString::fromUtf8("LoginEmailTextEdit"));
        LoginEmailTextEdit->setGeometry(QRect(200, 130, 151, 21));
        PasswordTextEdit = new QTextEdit(LoginPage);
        PasswordTextEdit->setObjectName(QString::fromUtf8("PasswordTextEdit"));
        PasswordTextEdit->setGeometry(QRect(200, 160, 151, 21));
        AppStackedWidget->addWidget(LoginPage);
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
        chartContainer = new QWidget(VisulizationPage);
        chartContainer->setObjectName(QString::fromUtf8("chartContainer"));
        chartContainer->setGeometry(QRect(30, 50, 471, 471));
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
        AppStartPage = new QWidget();
        AppStartPage->setObjectName(QString::fromUtf8("AppStartPage"));
        TitleLabel = new QLabel(AppStartPage);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));
        TitleLabel->setGeometry(QRect(260, 60, 171, 51));
        TitleLabel->setFont(font);
        CreateProfileButton = new QPushButton(AppStartPage);
        CreateProfileButton->setObjectName(QString::fromUtf8("CreateProfileButton"));
        CreateProfileButton->setGeometry(QRect(280, 120, 101, 21));
        EnterButton = new QPushButton(AppStartPage);
        EnterButton->setObjectName(QString::fromUtf8("EnterButton"));
        EnterButton->setGeometry(QRect(280, 150, 101, 21));
        ViewsStackedWidget->addWidget(AppStartPage);
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
        BatteryLabel->setText(QCoreApplication::translate("MainWindow", "Battery Power", nullptr));
        GoToDeviceViewButton->setText(QCoreApplication::translate("MainWindow", "Go to Device View", nullptr));
        CreateHeader->setText(QCoreApplication::translate("MainWindow", "Create Profile", nullptr));
        loginImage->setText(QCoreApplication::translate("MainWindow", "IMAGE", nullptr));
        ProfileNameTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Profile Name</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        GenderLabel->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        WeightLabel->setText(QCoreApplication::translate("MainWindow", "Weight, kg", nullptr));
        WeightTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Your Weight</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        HeightLabel->setText(QCoreApplication::translate("MainWindow", "Height, cm", nullptr));
        HeightTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Your Height</p></body></html>", nullptr));
        DateOfBirthLabel->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        LoginTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Login (Email)</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        PasswordTextEditCreate->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Password</p></body></html>", nullptr));
        TitleLabel_2->setText(QCoreApplication::translate("MainWindow", "RaDoTech", nullptr));
        LoginEmailTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Login (Email)</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        PasswordTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Password</p></body></html>", nullptr));
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
        TitleLabel->setText(QCoreApplication::translate("MainWindow", "RaDoTech", nullptr));
        CreateProfileButton->setText(QCoreApplication::translate("MainWindow", "Create Profile", nullptr));
        EnterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
