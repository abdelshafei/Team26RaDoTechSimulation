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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *DeviceScanButton;
    QLabel *DeviceStatusLabel;
    QPushButton *GoToMeasureViewButton;
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
    QPushButton *SavePushButton;
    QTextEdit *LoginTextEdit;
    QTextEdit *PasswordTextEditCreate;
    QWidget *LoginPage;
    QLabel *TitleLabel_2;
    QTextEdit *LoginEmailTextEdit;
    QTextEdit *PasswordTextEdit;
    QPushButton *EnterLoginButton;
    QWidget *HomePage;
    QLabel *HomeHeader;
    QWidget *MeasureNowPage;
    QLabel *MeasureHeader;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *StartScanButton;
    QPushButton *NextButton;
    QLabel *MeasureNowLabel;
    QLabel *ProcessedDataLabel;
    QLabel *MeasureNowImage;
    QWidget *HistoricalPage;
    QLabel *HistoricalHeader;
    QListWidget *HistoryListWidget;
    QPushButton *ViewDetailsButton;
    QWidget *ProfilePage;
    QLabel *ProfileHeader;
    QLabel *ProfileListLabel;
    QPushButton *AddNewProfileButton;
    QWidget *VisulizationPage;
    QLabel *VisulizationHeader;
    QWidget *chartContainer;
    QWidget *DetailedResultsPage;
    QLabel *TitleLabelMeteringResults;
    QTabWidget *ResultsTabWidget;
    QWidget *Indicators;
    QFrame *EnergyFrame;
    QLabel *EnergyLevelLabel;
    QLabel *EnergyImage;
    QLabel *EnergyRangeLabel;
    QLabel *EnergyNumberLabel;
    QFrame *ImmuneSystemFrame;
    QLabel *ImmuneSystemLabel;
    QLabel *ImmuneSystemImage;
    QLabel *ImmuneSystemRangeLabel;
    QLabel *ImmuneSystemNumberLabel;
    QFrame *MetabolismFrame;
    QLabel *MetabolismLabel;
    QLabel *MetabolismImage;
    QLabel *MetabolismRangeLabel;
    QLabel *MetabolismNumberLabel;
    QFrame *PsychoFrame;
    QLabel *PsychoLabel;
    QLabel *PsychoImage;
    QLabel *PsychoRangeLabel;
    QLabel *PsychoNumberLabel;
    QFrame *MuscleFrame;
    QLabel *MuscleLevelLabel;
    QLabel *MuscleImage;
    QLabel *MuscleRangeLabel;
    QLabel *MuscleNumberLabel;
    QFrame *PractitionerData;
    QLabel *AverageValueLabel;
    QLabel *AverageValueNumber;
    QLabel *LeftTotalLabel;
    QLabel *LeftTotalNumber;
    QLabel *RightTotalLabel;
    QLabel *RightTotalNumber;
    QLabel *LeftRightTotalLabel;
    QLabel *LeftRightTotalNumber;
    QLabel *UpperTotalLabel;
    QLabel *UpperTotalNumber;
    QLabel *LowerTotalLabel;
    QLabel *LowerTotalNumber;
    QLabel *UpperLowerTotalLabel;
    QLabel *UpperLowerTotalNumber;
    QWidget *Visulization;
    QWidget *Comments;
    QLabel *CommentsLabel;
    QWidget *Recommendation;
    QWidget *PersonalMetricsPage;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QTextEdit *NotesBox;
    QDoubleSpinBox *BodyWeightBox;
    QSpinBox *SleepTimeBox;
    QSpinBox *HeartRateBox;
    QDoubleSpinBox *BodyTempBox;
    QLineEdit *BloodPressureBox;
    QLabel *BloodPressure;
    QLabel *BodyTemp;
    QLabel *HeartRate;
    QLabel *SleepTime;
    QLabel *BodyWeight;
    QLabel *Notes;
    QLabel *EmotionalState;
    QLineEdit *EmoStateBox;
    QLineEdit *OverallFeelingBox;
    QLabel *OverallFeeling;
    QPushButton *SaveButtonNotes;
    QPushButton *HomePageButton;
    QPushButton *MeasureNowButton;
    QPushButton *HistoryPageButton;
    QPushButton *ProfilePageButton;
    QPushButton *VisulizationPageButton;
    QPushButton *IndicatorButton;
    QPushButton *CommentsButton;
    QPushButton *RecommendationsButton;
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
        verticalLayoutWidget_2 = new QWidget(DeviceView);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 100, 381, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        DeviceScanButton = new QPushButton(verticalLayoutWidget_2);
        DeviceScanButton->setObjectName(QString::fromUtf8("DeviceScanButton"));

        verticalLayout_2->addWidget(DeviceScanButton);

        DeviceStatusLabel = new QLabel(verticalLayoutWidget_2);
        DeviceStatusLabel->setObjectName(QString::fromUtf8("DeviceStatusLabel"));

        verticalLayout_2->addWidget(DeviceStatusLabel);

        GoToMeasureViewButton = new QPushButton(DeviceView);
        GoToMeasureViewButton->setObjectName(QString::fromUtf8("GoToMeasureViewButton"));
        GoToMeasureViewButton->setGeometry(QRect(660, 50, 151, 25));
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
        GenderComboBox->addItem(QString());
        GenderComboBox->addItem(QString());
        GenderComboBox->addItem(QString());
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
        SavePushButton = new QPushButton(CreateProfilePage);
        SavePushButton->setObjectName(QString::fromUtf8("SavePushButton"));
        SavePushButton->setGeometry(QRect(60, 290, 231, 25));
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
        LoginEmailTextEdit->setGeometry(QRect(170, 130, 201, 21));
        PasswordTextEdit = new QTextEdit(LoginPage);
        PasswordTextEdit->setObjectName(QString::fromUtf8("PasswordTextEdit"));
        PasswordTextEdit->setGeometry(QRect(170, 160, 201, 21));
        EnterLoginButton = new QPushButton(LoginPage);
        EnterLoginButton->setObjectName(QString::fromUtf8("EnterLoginButton"));
        EnterLoginButton->setGeometry(QRect(220, 200, 83, 25));
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
        verticalLayoutWidget = new QWidget(MeasureNowPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 60, 501, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        StartScanButton = new QPushButton(verticalLayoutWidget);
        StartScanButton->setObjectName(QString::fromUtf8("StartScanButton"));

        verticalLayout->addWidget(StartScanButton);

        NextButton = new QPushButton(verticalLayoutWidget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));

        verticalLayout->addWidget(NextButton);

        MeasureNowLabel = new QLabel(verticalLayoutWidget);
        MeasureNowLabel->setObjectName(QString::fromUtf8("MeasureNowLabel"));

        verticalLayout->addWidget(MeasureNowLabel);

        ProcessedDataLabel = new QLabel(verticalLayoutWidget);
        ProcessedDataLabel->setObjectName(QString::fromUtf8("ProcessedDataLabel"));

        verticalLayout->addWidget(ProcessedDataLabel);

        MeasureNowImage = new QLabel(MeasureNowPage);
        MeasureNowImage->setObjectName(QString::fromUtf8("MeasureNowImage"));
        MeasureNowImage->setGeometry(QRect(20, 210, 501, 311));
        AppStackedWidget->addWidget(MeasureNowPage);
        HistoricalPage = new QWidget();
        HistoricalPage->setObjectName(QString::fromUtf8("HistoricalPage"));
        HistoricalHeader = new QLabel(HistoricalPage);
        HistoricalHeader->setObjectName(QString::fromUtf8("HistoricalHeader"));
        HistoricalHeader->setGeometry(QRect(20, 10, 141, 17));
        HistoryListWidget = new QListWidget(HistoricalPage);
        new QListWidgetItem(HistoryListWidget);
        HistoryListWidget->setObjectName(QString::fromUtf8("HistoryListWidget"));
        HistoryListWidget->setGeometry(QRect(20, 30, 501, 281));
        ViewDetailsButton = new QPushButton(HistoricalPage);
        ViewDetailsButton->setObjectName(QString::fromUtf8("ViewDetailsButton"));
        ViewDetailsButton->setGeometry(QRect(20, 320, 101, 25));
        AppStackedWidget->addWidget(HistoricalPage);
        ProfilePage = new QWidget();
        ProfilePage->setObjectName(QString::fromUtf8("ProfilePage"));
        ProfileHeader = new QLabel(ProfilePage);
        ProfileHeader->setObjectName(QString::fromUtf8("ProfileHeader"));
        ProfileHeader->setGeometry(QRect(20, 10, 91, 17));
        ProfileListLabel = new QLabel(ProfilePage);
        ProfileListLabel->setObjectName(QString::fromUtf8("ProfileListLabel"));
        ProfileListLabel->setGeometry(QRect(20, 40, 301, 531));
        AddNewProfileButton = new QPushButton(ProfilePage);
        AddNewProfileButton->setObjectName(QString::fromUtf8("AddNewProfileButton"));
        AddNewProfileButton->setGeometry(QRect(400, 20, 111, 25));
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
        DetailedResultsPage = new QWidget();
        DetailedResultsPage->setObjectName(QString::fromUtf8("DetailedResultsPage"));
        TitleLabelMeteringResults = new QLabel(DetailedResultsPage);
        TitleLabelMeteringResults->setObjectName(QString::fromUtf8("TitleLabelMeteringResults"));
        TitleLabelMeteringResults->setGeometry(QRect(20, 10, 111, 17));
        ResultsTabWidget = new QTabWidget(DetailedResultsPage);
        ResultsTabWidget->setObjectName(QString::fromUtf8("ResultsTabWidget"));
        ResultsTabWidget->setGeometry(QRect(10, 30, 511, 521));
        Indicators = new QWidget();
        Indicators->setObjectName(QString::fromUtf8("Indicators"));
        EnergyFrame = new QFrame(Indicators);
        EnergyFrame->setObjectName(QString::fromUtf8("EnergyFrame"));
        EnergyFrame->setGeometry(QRect(10, 10, 481, 61));
        EnergyFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 191, 92);"));
        EnergyFrame->setFrameShape(QFrame::StyledPanel);
        EnergyFrame->setFrameShadow(QFrame::Raised);
        EnergyLevelLabel = new QLabel(EnergyFrame);
        EnergyLevelLabel->setObjectName(QString::fromUtf8("EnergyLevelLabel"));
        EnergyLevelLabel->setGeometry(QRect(120, 10, 91, 16));
        EnergyImage = new QLabel(EnergyFrame);
        EnergyImage->setObjectName(QString::fromUtf8("EnergyImage"));
        EnergyImage->setGeometry(QRect(10, 10, 81, 41));
        EnergyRangeLabel = new QLabel(EnergyFrame);
        EnergyRangeLabel->setObjectName(QString::fromUtf8("EnergyRangeLabel"));
        EnergyRangeLabel->setGeometry(QRect(120, 30, 91, 21));
        EnergyNumberLabel = new QLabel(EnergyFrame);
        EnergyNumberLabel->setObjectName(QString::fromUtf8("EnergyNumberLabel"));
        EnergyNumberLabel->setGeometry(QRect(310, 10, 141, 41));
        QFont font1;
        font1.setPointSize(20);
        EnergyNumberLabel->setFont(font1);
        ImmuneSystemFrame = new QFrame(Indicators);
        ImmuneSystemFrame->setObjectName(QString::fromUtf8("ImmuneSystemFrame"));
        ImmuneSystemFrame->setGeometry(QRect(10, 80, 481, 61));
        ImmuneSystemFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 113, 219);"));
        ImmuneSystemFrame->setFrameShape(QFrame::StyledPanel);
        ImmuneSystemFrame->setFrameShadow(QFrame::Raised);
        ImmuneSystemLabel = new QLabel(ImmuneSystemFrame);
        ImmuneSystemLabel->setObjectName(QString::fromUtf8("ImmuneSystemLabel"));
        ImmuneSystemLabel->setGeometry(QRect(120, 10, 151, 16));
        ImmuneSystemImage = new QLabel(ImmuneSystemFrame);
        ImmuneSystemImage->setObjectName(QString::fromUtf8("ImmuneSystemImage"));
        ImmuneSystemImage->setGeometry(QRect(10, 10, 81, 41));
        ImmuneSystemRangeLabel = new QLabel(ImmuneSystemFrame);
        ImmuneSystemRangeLabel->setObjectName(QString::fromUtf8("ImmuneSystemRangeLabel"));
        ImmuneSystemRangeLabel->setGeometry(QRect(120, 30, 91, 21));
        ImmuneSystemNumberLabel = new QLabel(ImmuneSystemFrame);
        ImmuneSystemNumberLabel->setObjectName(QString::fromUtf8("ImmuneSystemNumberLabel"));
        ImmuneSystemNumberLabel->setGeometry(QRect(310, 10, 141, 41));
        ImmuneSystemNumberLabel->setFont(font1);
        MetabolismFrame = new QFrame(Indicators);
        MetabolismFrame->setObjectName(QString::fromUtf8("MetabolismFrame"));
        MetabolismFrame->setGeometry(QRect(10, 150, 481, 61));
        MetabolismFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 113, 219);"));
        MetabolismFrame->setFrameShape(QFrame::StyledPanel);
        MetabolismFrame->setFrameShadow(QFrame::Raised);
        MetabolismLabel = new QLabel(MetabolismFrame);
        MetabolismLabel->setObjectName(QString::fromUtf8("MetabolismLabel"));
        MetabolismLabel->setGeometry(QRect(120, 10, 151, 16));
        MetabolismImage = new QLabel(MetabolismFrame);
        MetabolismImage->setObjectName(QString::fromUtf8("MetabolismImage"));
        MetabolismImage->setGeometry(QRect(10, 10, 81, 41));
        MetabolismRangeLabel = new QLabel(MetabolismFrame);
        MetabolismRangeLabel->setObjectName(QString::fromUtf8("MetabolismRangeLabel"));
        MetabolismRangeLabel->setGeometry(QRect(120, 30, 91, 21));
        MetabolismNumberLabel = new QLabel(MetabolismFrame);
        MetabolismNumberLabel->setObjectName(QString::fromUtf8("MetabolismNumberLabel"));
        MetabolismNumberLabel->setGeometry(QRect(310, 10, 141, 41));
        MetabolismNumberLabel->setFont(font1);
        PsychoFrame = new QFrame(Indicators);
        PsychoFrame->setObjectName(QString::fromUtf8("PsychoFrame"));
        PsychoFrame->setGeometry(QRect(10, 220, 481, 61));
        PsychoFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 191, 92);"));
        PsychoFrame->setFrameShape(QFrame::StyledPanel);
        PsychoFrame->setFrameShadow(QFrame::Raised);
        PsychoLabel = new QLabel(PsychoFrame);
        PsychoLabel->setObjectName(QString::fromUtf8("PsychoLabel"));
        PsychoLabel->setGeometry(QRect(120, 10, 161, 16));
        PsychoImage = new QLabel(PsychoFrame);
        PsychoImage->setObjectName(QString::fromUtf8("PsychoImage"));
        PsychoImage->setGeometry(QRect(10, 10, 81, 41));
        PsychoRangeLabel = new QLabel(PsychoFrame);
        PsychoRangeLabel->setObjectName(QString::fromUtf8("PsychoRangeLabel"));
        PsychoRangeLabel->setGeometry(QRect(120, 30, 91, 21));
        PsychoNumberLabel = new QLabel(PsychoFrame);
        PsychoNumberLabel->setObjectName(QString::fromUtf8("PsychoNumberLabel"));
        PsychoNumberLabel->setGeometry(QRect(310, 10, 141, 41));
        PsychoNumberLabel->setFont(font1);
        MuscleFrame = new QFrame(Indicators);
        MuscleFrame->setObjectName(QString::fromUtf8("MuscleFrame"));
        MuscleFrame->setGeometry(QRect(10, 290, 481, 61));
        MuscleFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 191, 92);"));
        MuscleFrame->setFrameShape(QFrame::StyledPanel);
        MuscleFrame->setFrameShadow(QFrame::Raised);
        MuscleLevelLabel = new QLabel(MuscleFrame);
        MuscleLevelLabel->setObjectName(QString::fromUtf8("MuscleLevelLabel"));
        MuscleLevelLabel->setGeometry(QRect(120, 10, 161, 16));
        MuscleImage = new QLabel(MuscleFrame);
        MuscleImage->setObjectName(QString::fromUtf8("MuscleImage"));
        MuscleImage->setGeometry(QRect(10, 10, 81, 41));
        MuscleRangeLabel = new QLabel(MuscleFrame);
        MuscleRangeLabel->setObjectName(QString::fromUtf8("MuscleRangeLabel"));
        MuscleRangeLabel->setGeometry(QRect(120, 30, 91, 21));
        MuscleNumberLabel = new QLabel(MuscleFrame);
        MuscleNumberLabel->setObjectName(QString::fromUtf8("MuscleNumberLabel"));
        MuscleNumberLabel->setGeometry(QRect(310, 10, 141, 41));
        MuscleNumberLabel->setFont(font1);
        PractitionerData = new QFrame(Indicators);
        PractitionerData->setObjectName(QString::fromUtf8("PractitionerData"));
        PractitionerData->setGeometry(QRect(10, 360, 481, 121));
        PractitionerData->setFrameShape(QFrame::StyledPanel);
        PractitionerData->setFrameShadow(QFrame::Raised);
        AverageValueLabel = new QLabel(PractitionerData);
        AverageValueLabel->setObjectName(QString::fromUtf8("AverageValueLabel"));
        AverageValueLabel->setGeometry(QRect(150, 10, 101, 17));
        AverageValueNumber = new QLabel(PractitionerData);
        AverageValueNumber->setObjectName(QString::fromUtf8("AverageValueNumber"));
        AverageValueNumber->setGeometry(QRect(270, 10, 61, 17));
        LeftTotalLabel = new QLabel(PractitionerData);
        LeftTotalLabel->setObjectName(QString::fromUtf8("LeftTotalLabel"));
        LeftTotalLabel->setGeometry(QRect(80, 30, 41, 17));
        LeftTotalNumber = new QLabel(PractitionerData);
        LeftTotalNumber->setObjectName(QString::fromUtf8("LeftTotalNumber"));
        LeftTotalNumber->setGeometry(QRect(130, 30, 62, 17));
        RightTotalLabel = new QLabel(PractitionerData);
        RightTotalLabel->setObjectName(QString::fromUtf8("RightTotalLabel"));
        RightTotalLabel->setGeometry(QRect(80, 50, 41, 17));
        RightTotalNumber = new QLabel(PractitionerData);
        RightTotalNumber->setObjectName(QString::fromUtf8("RightTotalNumber"));
        RightTotalNumber->setGeometry(QRect(130, 50, 62, 17));
        LeftRightTotalLabel = new QLabel(PractitionerData);
        LeftRightTotalLabel->setObjectName(QString::fromUtf8("LeftRightTotalLabel"));
        LeftRightTotalLabel->setGeometry(QRect(60, 70, 71, 17));
        LeftRightTotalNumber = new QLabel(PractitionerData);
        LeftRightTotalNumber->setObjectName(QString::fromUtf8("LeftRightTotalNumber"));
        LeftRightTotalNumber->setGeometry(QRect(130, 70, 62, 17));
        UpperTotalLabel = new QLabel(PractitionerData);
        UpperTotalLabel->setObjectName(QString::fromUtf8("UpperTotalLabel"));
        UpperTotalLabel->setGeometry(QRect(260, 30, 51, 17));
        UpperTotalNumber = new QLabel(PractitionerData);
        UpperTotalNumber->setObjectName(QString::fromUtf8("UpperTotalNumber"));
        UpperTotalNumber->setGeometry(QRect(320, 30, 62, 17));
        LowerTotalLabel = new QLabel(PractitionerData);
        LowerTotalLabel->setObjectName(QString::fromUtf8("LowerTotalLabel"));
        LowerTotalLabel->setGeometry(QRect(260, 50, 51, 17));
        LowerTotalNumber = new QLabel(PractitionerData);
        LowerTotalNumber->setObjectName(QString::fromUtf8("LowerTotalNumber"));
        LowerTotalNumber->setGeometry(QRect(320, 50, 62, 17));
        UpperLowerTotalLabel = new QLabel(PractitionerData);
        UpperLowerTotalLabel->setObjectName(QString::fromUtf8("UpperLowerTotalLabel"));
        UpperLowerTotalLabel->setGeometry(QRect(210, 70, 91, 17));
        UpperLowerTotalNumber = new QLabel(PractitionerData);
        UpperLowerTotalNumber->setObjectName(QString::fromUtf8("UpperLowerTotalNumber"));
        UpperLowerTotalNumber->setGeometry(QRect(320, 70, 62, 17));
        ResultsTabWidget->addTab(Indicators, QString());
        Visulization = new QWidget();
        Visulization->setObjectName(QString::fromUtf8("Visulization"));
        ResultsTabWidget->addTab(Visulization, QString());
        Comments = new QWidget();
        Comments->setObjectName(QString::fromUtf8("Comments"));
        CommentsLabel = new QLabel(Comments);
        CommentsLabel->setObjectName(QString::fromUtf8("CommentsLabel"));
        CommentsLabel->setGeometry(QRect(50, 50, 381, 351));
        ResultsTabWidget->addTab(Comments, QString());
        Recommendation = new QWidget();
        Recommendation->setObjectName(QString::fromUtf8("Recommendation"));
        ResultsTabWidget->addTab(Recommendation, QString());
        AppStackedWidget->addWidget(DetailedResultsPage);
        PersonalMetricsPage = new QWidget();
        PersonalMetricsPage->setObjectName(QString::fromUtf8("PersonalMetricsPage"));
        formLayoutWidget = new QWidget(PersonalMetricsPage);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 80, 391, 299));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        NotesBox = new QTextEdit(formLayoutWidget);
        NotesBox->setObjectName(QString::fromUtf8("NotesBox"));

        formLayout->setWidget(8, QFormLayout::FieldRole, NotesBox);

        BodyWeightBox = new QDoubleSpinBox(formLayoutWidget);
        BodyWeightBox->setObjectName(QString::fromUtf8("BodyWeightBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, BodyWeightBox);

        SleepTimeBox = new QSpinBox(formLayoutWidget);
        SleepTimeBox->setObjectName(QString::fromUtf8("SleepTimeBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, SleepTimeBox);

        HeartRateBox = new QSpinBox(formLayoutWidget);
        HeartRateBox->setObjectName(QString::fromUtf8("HeartRateBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, HeartRateBox);

        BodyTempBox = new QDoubleSpinBox(formLayoutWidget);
        BodyTempBox->setObjectName(QString::fromUtf8("BodyTempBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, BodyTempBox);

        BloodPressureBox = new QLineEdit(formLayoutWidget);
        BloodPressureBox->setObjectName(QString::fromUtf8("BloodPressureBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, BloodPressureBox);

        BloodPressure = new QLabel(formLayoutWidget);
        BloodPressure->setObjectName(QString::fromUtf8("BloodPressure"));

        formLayout->setWidget(1, QFormLayout::LabelRole, BloodPressure);

        BodyTemp = new QLabel(formLayoutWidget);
        BodyTemp->setObjectName(QString::fromUtf8("BodyTemp"));

        formLayout->setWidget(2, QFormLayout::LabelRole, BodyTemp);

        HeartRate = new QLabel(formLayoutWidget);
        HeartRate->setObjectName(QString::fromUtf8("HeartRate"));

        formLayout->setWidget(3, QFormLayout::LabelRole, HeartRate);

        SleepTime = new QLabel(formLayoutWidget);
        SleepTime->setObjectName(QString::fromUtf8("SleepTime"));

        formLayout->setWidget(4, QFormLayout::LabelRole, SleepTime);

        BodyWeight = new QLabel(formLayoutWidget);
        BodyWeight->setObjectName(QString::fromUtf8("BodyWeight"));

        formLayout->setWidget(5, QFormLayout::LabelRole, BodyWeight);

        Notes = new QLabel(formLayoutWidget);
        Notes->setObjectName(QString::fromUtf8("Notes"));

        formLayout->setWidget(8, QFormLayout::LabelRole, Notes);

        EmotionalState = new QLabel(formLayoutWidget);
        EmotionalState->setObjectName(QString::fromUtf8("EmotionalState"));

        formLayout->setWidget(6, QFormLayout::LabelRole, EmotionalState);

        EmoStateBox = new QLineEdit(formLayoutWidget);
        EmoStateBox->setObjectName(QString::fromUtf8("EmoStateBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, EmoStateBox);

        OverallFeelingBox = new QLineEdit(formLayoutWidget);
        OverallFeelingBox->setObjectName(QString::fromUtf8("OverallFeelingBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, OverallFeelingBox);

        OverallFeeling = new QLabel(formLayoutWidget);
        OverallFeeling->setObjectName(QString::fromUtf8("OverallFeeling"));

        formLayout->setWidget(7, QFormLayout::LabelRole, OverallFeeling);

        SaveButtonNotes = new QPushButton(PersonalMetricsPage);
        SaveButtonNotes->setObjectName(QString::fromUtf8("SaveButtonNotes"));
        SaveButtonNotes->setGeometry(QRect(220, 390, 83, 25));
        AppStackedWidget->addWidget(PersonalMetricsPage);
        HomePageButton = new QPushButton(AppView);
        HomePageButton->setObjectName(QString::fromUtf8("HomePageButton"));
        HomePageButton->setGeometry(QRect(10, 30, 91, 25));
        MeasureNowButton = new QPushButton(AppView);
        MeasureNowButton->setObjectName(QString::fromUtf8("MeasureNowButton"));
        MeasureNowButton->setGeometry(QRect(10, 70, 91, 25));
        HistoryPageButton = new QPushButton(AppView);
        HistoryPageButton->setObjectName(QString::fromUtf8("HistoryPageButton"));
        HistoryPageButton->setGeometry(QRect(10, 110, 91, 25));
        ProfilePageButton = new QPushButton(AppView);
        ProfilePageButton->setObjectName(QString::fromUtf8("ProfilePageButton"));
        ProfilePageButton->setGeometry(QRect(10, 150, 91, 25));
        VisulizationPageButton = new QPushButton(AppView);
        VisulizationPageButton->setObjectName(QString::fromUtf8("VisulizationPageButton"));
        VisulizationPageButton->setGeometry(QRect(10, 190, 91, 25));
        IndicatorButton = new QPushButton(AppView);
        IndicatorButton->setObjectName(QString::fromUtf8("IndicatorButton"));
        IndicatorButton->setGeometry(QRect(20, 220, 83, 25));
        CommentsButton = new QPushButton(AppView);
        CommentsButton->setObjectName(QString::fromUtf8("CommentsButton"));
        CommentsButton->setGeometry(QRect(10, 250, 83, 25));
        RecommendationsButton = new QPushButton(AppView);
        RecommendationsButton->setObjectName(QString::fromUtf8("RecommendationsButton"));
        RecommendationsButton->setGeometry(QRect(0, 290, 131, 25));
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

        ResultsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        GoToAppViewButton->setText(QCoreApplication::translate("MainWindow", "Go To App View", nullptr));
        DeviceNameLabel->setText(QCoreApplication::translate("MainWindow", "RaDoTech Device View", nullptr));
        BatteryLabel->setText(QCoreApplication::translate("MainWindow", "Battery Power", nullptr));
        DeviceScanButton->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        DeviceStatusLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        GoToMeasureViewButton->setText(QCoreApplication::translate("MainWindow", "Back to Measure App", nullptr));
        GoToDeviceViewButton->setText(QCoreApplication::translate("MainWindow", "Go to Device View", nullptr));
        CreateHeader->setText(QCoreApplication::translate("MainWindow", "Create Profile", nullptr));
        loginImage->setText(QCoreApplication::translate("MainWindow", "IMAGE", nullptr));
        ProfileNameTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Profile Name</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        GenderComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        GenderComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        GenderComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Other", nullptr));

        GenderComboBox->setCurrentText(QCoreApplication::translate("MainWindow", "Male", nullptr));
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
        SavePushButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
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
        EnterLoginButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        HomeHeader->setText(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
        MeasureHeader->setText(QCoreApplication::translate("MainWindow", "Measure Now Page", nullptr));
        StartScanButton->setText(QCoreApplication::translate("MainWindow", "Measure Now", nullptr));
        NextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        MeasureNowLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ProcessedDataLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        MeasureNowImage->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        HistoricalHeader->setText(QCoreApplication::translate("MainWindow", "Historical Data Page", nullptr));

        const bool __sortingEnabled = HistoryListWidget->isSortingEnabled();
        HistoryListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = HistoryListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        HistoryListWidget->setSortingEnabled(__sortingEnabled);

        ViewDetailsButton->setText(QCoreApplication::translate("MainWindow", "View Details", nullptr));
        ProfileHeader->setText(QCoreApplication::translate("MainWindow", "Profile Page", nullptr));
        ProfileListLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        AddNewProfileButton->setText(QCoreApplication::translate("MainWindow", "Add New Profile", nullptr));
        VisulizationHeader->setText(QCoreApplication::translate("MainWindow", "Visulization Page", nullptr));
        TitleLabelMeteringResults->setText(QCoreApplication::translate("MainWindow", "Metering Results", nullptr));
        EnergyLevelLabel->setText(QCoreApplication::translate("MainWindow", "Energy Level", nullptr));
        EnergyImage->setText(QCoreApplication::translate("MainWindow", "IMAGE", nullptr));
        EnergyRangeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        EnergyNumberLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ImmuneSystemLabel->setText(QCoreApplication::translate("MainWindow", "Immune System", nullptr));
        ImmuneSystemImage->setText(QCoreApplication::translate("MainWindow", "IMAGE", nullptr));
        ImmuneSystemRangeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ImmuneSystemNumberLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        MetabolismLabel->setText(QCoreApplication::translate("MainWindow", "Metabolism", nullptr));
        MetabolismImage->setText(QCoreApplication::translate("MainWindow", "IMAGE", nullptr));
        MetabolismRangeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        MetabolismNumberLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        PsychoLabel->setText(QCoreApplication::translate("MainWindow", "Psycho-emotional state", nullptr));
        PsychoImage->setText(QCoreApplication::translate("MainWindow", "IMAGE", nullptr));
        PsychoRangeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        PsychoNumberLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        MuscleLevelLabel->setText(QCoreApplication::translate("MainWindow", "Musculoskeletal system", nullptr));
        MuscleImage->setText(QCoreApplication::translate("MainWindow", "IMAGE", nullptr));
        MuscleRangeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        MuscleNumberLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        AverageValueLabel->setText(QCoreApplication::translate("MainWindow", "Average Value:", nullptr));
        AverageValueNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        LeftTotalLabel->setText(QCoreApplication::translate("MainWindow", "Left:", nullptr));
        LeftTotalNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RightTotalLabel->setText(QCoreApplication::translate("MainWindow", "Right:", nullptr));
        RightTotalNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        LeftRightTotalLabel->setText(QCoreApplication::translate("MainWindow", "Left/Right:", nullptr));
        LeftRightTotalNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        UpperTotalLabel->setText(QCoreApplication::translate("MainWindow", "Upper:", nullptr));
        UpperTotalNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        LowerTotalLabel->setText(QCoreApplication::translate("MainWindow", "Lower:", nullptr));
        LowerTotalNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        UpperLowerTotalLabel->setText(QCoreApplication::translate("MainWindow", "Upper/Lower:", nullptr));
        UpperLowerTotalNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ResultsTabWidget->setTabText(ResultsTabWidget->indexOf(Indicators), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        ResultsTabWidget->setTabText(ResultsTabWidget->indexOf(Visulization), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        CommentsLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ResultsTabWidget->setTabText(ResultsTabWidget->indexOf(Comments), QCoreApplication::translate("MainWindow", "Page", nullptr));
        ResultsTabWidget->setTabText(ResultsTabWidget->indexOf(Recommendation), QCoreApplication::translate("MainWindow", "Page", nullptr));
        BloodPressure->setText(QCoreApplication::translate("MainWindow", "Blood Pressure", nullptr));
        BodyTemp->setText(QCoreApplication::translate("MainWindow", "Body Tempreture", nullptr));
        HeartRate->setText(QCoreApplication::translate("MainWindow", "Heart Rate", nullptr));
        SleepTime->setText(QCoreApplication::translate("MainWindow", "Sleep Time (h)", nullptr));
        BodyWeight->setText(QCoreApplication::translate("MainWindow", "Body Weight", nullptr));
        Notes->setText(QCoreApplication::translate("MainWindow", "Notes", nullptr));
        EmotionalState->setText(QCoreApplication::translate("MainWindow", "Emotional State (1 to 5)", nullptr));
        OverallFeeling->setText(QCoreApplication::translate("MainWindow", "Overall Feeling (1 to 5)", nullptr));
        SaveButtonNotes->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        HomePageButton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        MeasureNowButton->setText(QCoreApplication::translate("MainWindow", "Measure Now", nullptr));
        HistoryPageButton->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
        ProfilePageButton->setText(QCoreApplication::translate("MainWindow", "Profiles", nullptr));
        VisulizationPageButton->setText(QCoreApplication::translate("MainWindow", "Visulization", nullptr));
        IndicatorButton->setText(QCoreApplication::translate("MainWindow", "Indicators", nullptr));
        CommentsButton->setText(QCoreApplication::translate("MainWindow", "Comment", nullptr));
        RecommendationsButton->setText(QCoreApplication::translate("MainWindow", "Recommendations", nullptr));
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
