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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *OnButton;
    QPushButton *OffButton;
    QPushButton *ChargeButton;
    QPushButton *PairButton;
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
    QPushButton *HistoryHomePageButton;
    QPushButton *MeasureNowHomePageButton;
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
    QListWidget *ProfileListWidget;
    QPushButton *ViewProfileDetailsButton;
    QPushButton *DeleteProfileButton;
    QWidget *ProfileDetailsPage;
    QLabel *GenderLabelUpdate;
    QLabel *loginImageUpdate;
    QPushButton *SavePushButtonUpdate;
    QLabel *WeightLabelUpdate;
    QTextEdit *ProfileNameTextEditUpdate;
    QLabel *HeightLabelUpdate;
    QDateEdit *DOBEditUpdate;
    QTextEdit *WeightTextEditUpdate;
    QLabel *DateOfBirthLabelUpdate;
    QTextEdit *HeightTextEditUpdate;
    QComboBox *GenderComboBoxUpdate;
    QLabel *label;
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
    QTabWidget *ChartsTabWidget;
    QWidget *BarChart;
    QWidget *ChartWidget;
    QWidget *CircleChart;
    QWidget *CircleChartWidget;
    QWidget *BodyChart;
    QWidget *BodyChartWidget;
    QLabel *BodyLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *Lungs;
    QLabel *rightLungStatus;
    QLabel *leftLungStatus;
    QLabel *leftLungLabel;
    QLabel *rightLungLabel;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *Heart;
    QLabel *heartLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *rightHeartStatus;
    QLabel *leftHeartStatus;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *veins;
    QLabel *veinsLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *rightVeinsStatus;
    QLabel *leftVeinsStatus;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *liverLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *rightLiverStatus;
    QLabel *leftLiverStatus;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *stomachLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *rightStomachStatus;
    QLabel *leftStomachStatus;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *gallbladderLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *rightGallbladderStatus;
    QLabel *leftGallbladderStatus;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *kidneyLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *leftKidneyStatus;
    QLabel *rightKidneyStatus;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *bladderLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *rightBladderStatus;
    QLabel *leftBladderStatus;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *intestineLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *rightSmallIntestineStatus;
    QLabel *leftSmallIntestineStatus;
    QLabel *rightLargeIntestineStatus;
    QLabel *leftLargeIntestineStatus;
    QWidget *Comments;
    QLabel *CommentsLabel;
    QWidget *Recommendation;
    QFrame *HyperActiveFrame;
    QLabel *HyperactiveTitle;
    QLabel *HyperactiveLabel;
    QFrame *InsufficiencyFrame;
    QLabel *InsufficiencyTitle;
    QLabel *InsufficiencyLabel;
    QFrame *DietFrame;
    QLabel *DietTitle;
    QLabel *DietLabel;
    QFrame *FoodFrame;
    QLabel *FoodTitle;
    QLabel *FoodLabel;
    QFrame *ExcludeFrame;
    QLabel *ExcludeTitle;
    QLabel *ExcludeLabel;
    QFrame *GeneralFrame;
    QLabel *GeneralTitle;
    QLabel *GeneralLabel;
    QFrame *ActivityFrame;
    QLabel *ActivityTitle;
    QLabel *ActivityLabel;
    QFrame *SupplementFrame;
    QLabel *SupplementTitle;
    QLabel *SupplementLabel;
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
        verticalLayoutWidget_2->setGeometry(QRect(10, 100, 381, 83));
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
        verticalLayoutWidget_3 = new QWidget(DeviceView);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 190, 259, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        OnButton = new QPushButton(verticalLayoutWidget_3);
        OnButton->setObjectName(QString::fromUtf8("OnButton"));

        horizontalLayout->addWidget(OnButton);

        OffButton = new QPushButton(verticalLayoutWidget_3);
        OffButton->setObjectName(QString::fromUtf8("OffButton"));

        horizontalLayout->addWidget(OffButton);


        verticalLayout_3->addLayout(horizontalLayout);

        ChargeButton = new QPushButton(verticalLayoutWidget_3);
        ChargeButton->setObjectName(QString::fromUtf8("ChargeButton"));

        verticalLayout_3->addWidget(ChargeButton);

        PairButton = new QPushButton(verticalLayoutWidget_3);
        PairButton->setObjectName(QString::fromUtf8("PairButton"));

        verticalLayout_3->addWidget(PairButton);

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
        HistoryHomePageButton = new QPushButton(HomePage);
        HistoryHomePageButton->setObjectName(QString::fromUtf8("HistoryHomePageButton"));
        HistoryHomePageButton->setGeometry(QRect(210, 120, 83, 25));
        MeasureNowHomePageButton = new QPushButton(HomePage);
        MeasureNowHomePageButton->setObjectName(QString::fromUtf8("MeasureNowHomePageButton"));
        MeasureNowHomePageButton->setGeometry(QRect(200, 150, 101, 31));
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
        ProfileListLabel->setGeometry(QRect(20, 230, 301, 191));
        AddNewProfileButton = new QPushButton(ProfilePage);
        AddNewProfileButton->setObjectName(QString::fromUtf8("AddNewProfileButton"));
        AddNewProfileButton->setGeometry(QRect(400, 30, 111, 25));
        ProfileListWidget = new QListWidget(ProfilePage);
        ProfileListWidget->setObjectName(QString::fromUtf8("ProfileListWidget"));
        ProfileListWidget->setGeometry(QRect(10, 30, 381, 231));
        ViewProfileDetailsButton = new QPushButton(ProfilePage);
        ViewProfileDetailsButton->setObjectName(QString::fromUtf8("ViewProfileDetailsButton"));
        ViewProfileDetailsButton->setGeometry(QRect(400, 60, 111, 25));
        DeleteProfileButton = new QPushButton(ProfilePage);
        DeleteProfileButton->setObjectName(QString::fromUtf8("DeleteProfileButton"));
        DeleteProfileButton->setGeometry(QRect(400, 90, 111, 25));
        AppStackedWidget->addWidget(ProfilePage);
        ProfileDetailsPage = new QWidget();
        ProfileDetailsPage->setObjectName(QString::fromUtf8("ProfileDetailsPage"));
        GenderLabelUpdate = new QLabel(ProfileDetailsPage);
        GenderLabelUpdate->setObjectName(QString::fromUtf8("GenderLabelUpdate"));
        GenderLabelUpdate->setGeometry(QRect(110, 70, 62, 17));
        loginImageUpdate = new QLabel(ProfileDetailsPage);
        loginImageUpdate->setObjectName(QString::fromUtf8("loginImageUpdate"));
        loginImageUpdate->setGeometry(QRect(30, 30, 81, 71));
        SavePushButtonUpdate = new QPushButton(ProfileDetailsPage);
        SavePushButtonUpdate->setObjectName(QString::fromUtf8("SavePushButtonUpdate"));
        SavePushButtonUpdate->setGeometry(QRect(70, 230, 231, 25));
        WeightLabelUpdate = new QLabel(ProfileDetailsPage);
        WeightLabelUpdate->setObjectName(QString::fromUtf8("WeightLabelUpdate"));
        WeightLabelUpdate->setGeometry(QRect(20, 120, 81, 17));
        ProfileNameTextEditUpdate = new QTextEdit(ProfileDetailsPage);
        ProfileNameTextEditUpdate->setObjectName(QString::fromUtf8("ProfileNameTextEditUpdate"));
        ProfileNameTextEditUpdate->setGeometry(QRect(110, 40, 211, 21));
        HeightLabelUpdate = new QLabel(ProfileDetailsPage);
        HeightLabelUpdate->setObjectName(QString::fromUtf8("HeightLabelUpdate"));
        HeightLabelUpdate->setGeometry(QRect(20, 150, 81, 17));
        DOBEditUpdate = new QDateEdit(ProfileDetailsPage);
        DOBEditUpdate->setObjectName(QString::fromUtf8("DOBEditUpdate"));
        DOBEditUpdate->setGeometry(QRect(110, 185, 201, 31));
        WeightTextEditUpdate = new QTextEdit(ProfileDetailsPage);
        WeightTextEditUpdate->setObjectName(QString::fromUtf8("WeightTextEditUpdate"));
        WeightTextEditUpdate->setGeometry(QRect(100, 120, 211, 21));
        DateOfBirthLabelUpdate = new QLabel(ProfileDetailsPage);
        DateOfBirthLabelUpdate->setObjectName(QString::fromUtf8("DateOfBirthLabelUpdate"));
        DateOfBirthLabelUpdate->setGeometry(QRect(20, 190, 91, 17));
        HeightTextEditUpdate = new QTextEdit(ProfileDetailsPage);
        HeightTextEditUpdate->setObjectName(QString::fromUtf8("HeightTextEditUpdate"));
        HeightTextEditUpdate->setGeometry(QRect(100, 150, 211, 21));
        GenderComboBoxUpdate = new QComboBox(ProfileDetailsPage);
        GenderComboBoxUpdate->addItem(QString());
        GenderComboBoxUpdate->addItem(QString());
        GenderComboBoxUpdate->addItem(QString());
        GenderComboBoxUpdate->setObjectName(QString::fromUtf8("GenderComboBoxUpdate"));
        GenderComboBoxUpdate->setGeometry(QRect(110, 90, 86, 25));
        label = new QLabel(ProfileDetailsPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 111, 17));
        AppStackedWidget->addWidget(ProfileDetailsPage);
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
        ChartsTabWidget = new QTabWidget(Visulization);
        ChartsTabWidget->setObjectName(QString::fromUtf8("ChartsTabWidget"));
        ChartsTabWidget->setGeometry(QRect(0, 10, 521, 481));
        BarChart = new QWidget();
        BarChart->setObjectName(QString::fromUtf8("BarChart"));
        ChartWidget = new QWidget(BarChart);
        ChartWidget->setObjectName(QString::fromUtf8("ChartWidget"));
        ChartWidget->setGeometry(QRect(0, 0, 531, 491));
        ChartsTabWidget->addTab(BarChart, QString());
        CircleChart = new QWidget();
        CircleChart->setObjectName(QString::fromUtf8("CircleChart"));
        CircleChartWidget = new QWidget(CircleChart);
        CircleChartWidget->setObjectName(QString::fromUtf8("CircleChartWidget"));
        CircleChartWidget->setGeometry(QRect(0, 0, 521, 451));
        ChartsTabWidget->addTab(CircleChart, QString());
        BodyChart = new QWidget();
        BodyChart->setObjectName(QString::fromUtf8("BodyChart"));
        BodyChartWidget = new QWidget(BodyChart);
        BodyChartWidget->setObjectName(QString::fromUtf8("BodyChartWidget"));
        BodyChartWidget->setGeometry(QRect(-1, -1, 521, 451));
        BodyLabel = new QLabel(BodyChartWidget);
        BodyLabel->setObjectName(QString::fromUtf8("BodyLabel"));
        BodyLabel->setGeometry(QRect(0, 10, 521, 441));
        gridLayoutWidget = new QWidget(BodyChartWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(180, 40, 151, 111));
        Lungs = new QGridLayout(gridLayoutWidget);
        Lungs->setObjectName(QString::fromUtf8("Lungs"));
        Lungs->setHorizontalSpacing(6);
        Lungs->setVerticalSpacing(1);
        Lungs->setContentsMargins(0, 0, 0, 0);
        rightLungStatus = new QLabel(gridLayoutWidget);
        rightLungStatus->setObjectName(QString::fromUtf8("rightLungStatus"));
        QFont font2;
        font2.setPointSize(7);
        rightLungStatus->setFont(font2);
        rightLungStatus->setAlignment(Qt::AlignCenter);
        rightLungStatus->setWordWrap(true);

        Lungs->addWidget(rightLungStatus, 1, 1, 1, 1);

        leftLungStatus = new QLabel(gridLayoutWidget);
        leftLungStatus->setObjectName(QString::fromUtf8("leftLungStatus"));
        leftLungStatus->setFont(font2);
        leftLungStatus->setAlignment(Qt::AlignCenter);
        leftLungStatus->setWordWrap(true);

        Lungs->addWidget(leftLungStatus, 1, 0, 1, 1);

        leftLungLabel = new QLabel(gridLayoutWidget);
        leftLungLabel->setObjectName(QString::fromUtf8("leftLungLabel"));

        Lungs->addWidget(leftLungLabel, 0, 0, 1, 1);

        rightLungLabel = new QLabel(gridLayoutWidget);
        rightLungLabel->setObjectName(QString::fromUtf8("rightLungLabel"));

        Lungs->addWidget(rightLungLabel, 0, 1, 1, 1);

        verticalLayoutWidget_4 = new QWidget(BodyChartWidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 50, 160, 80));
        Heart = new QVBoxLayout(verticalLayoutWidget_4);
        Heart->setObjectName(QString::fromUtf8("Heart"));
        Heart->setContentsMargins(0, 0, 0, 0);
        heartLabel = new QLabel(verticalLayoutWidget_4);
        heartLabel->setObjectName(QString::fromUtf8("heartLabel"));

        Heart->addWidget(heartLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rightHeartStatus = new QLabel(verticalLayoutWidget_4);
        rightHeartStatus->setObjectName(QString::fromUtf8("rightHeartStatus"));
        rightHeartStatus->setFont(font2);
        rightHeartStatus->setAlignment(Qt::AlignCenter);
        rightHeartStatus->setWordWrap(true);

        horizontalLayout_2->addWidget(rightHeartStatus);

        leftHeartStatus = new QLabel(verticalLayoutWidget_4);
        leftHeartStatus->setObjectName(QString::fromUtf8("leftHeartStatus"));
        leftHeartStatus->setFont(font2);
        leftHeartStatus->setAlignment(Qt::AlignCenter);
        leftHeartStatus->setWordWrap(true);

        horizontalLayout_2->addWidget(leftHeartStatus);


        Heart->addLayout(horizontalLayout_2);

        verticalLayoutWidget_5 = new QWidget(BodyChartWidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(350, 60, 160, 80));
        veins = new QVBoxLayout(verticalLayoutWidget_5);
        veins->setObjectName(QString::fromUtf8("veins"));
        veins->setContentsMargins(0, 0, 0, 0);
        veinsLabel = new QLabel(verticalLayoutWidget_5);
        veinsLabel->setObjectName(QString::fromUtf8("veinsLabel"));

        veins->addWidget(veinsLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rightVeinsStatus = new QLabel(verticalLayoutWidget_5);
        rightVeinsStatus->setObjectName(QString::fromUtf8("rightVeinsStatus"));
        rightVeinsStatus->setFont(font2);
        rightVeinsStatus->setAlignment(Qt::AlignCenter);
        rightVeinsStatus->setWordWrap(true);

        horizontalLayout_3->addWidget(rightVeinsStatus);

        leftVeinsStatus = new QLabel(verticalLayoutWidget_5);
        leftVeinsStatus->setObjectName(QString::fromUtf8("leftVeinsStatus"));
        leftVeinsStatus->setFont(font2);
        leftVeinsStatus->setLayoutDirection(Qt::LeftToRight);
        leftVeinsStatus->setAlignment(Qt::AlignCenter);
        leftVeinsStatus->setWordWrap(true);

        horizontalLayout_3->addWidget(leftVeinsStatus);


        veins->addLayout(horizontalLayout_3);

        verticalLayoutWidget_6 = new QWidget(BodyChartWidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 150, 160, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        liverLabel = new QLabel(verticalLayoutWidget_6);
        liverLabel->setObjectName(QString::fromUtf8("liverLabel"));

        verticalLayout_4->addWidget(liverLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rightLiverStatus = new QLabel(verticalLayoutWidget_6);
        rightLiverStatus->setObjectName(QString::fromUtf8("rightLiverStatus"));
        rightLiverStatus->setFont(font2);
        rightLiverStatus->setAlignment(Qt::AlignCenter);
        rightLiverStatus->setWordWrap(true);

        horizontalLayout_4->addWidget(rightLiverStatus);

        leftLiverStatus = new QLabel(verticalLayoutWidget_6);
        leftLiverStatus->setObjectName(QString::fromUtf8("leftLiverStatus"));
        leftLiverStatus->setFont(font2);
        leftLiverStatus->setAlignment(Qt::AlignCenter);
        leftLiverStatus->setWordWrap(true);

        horizontalLayout_4->addWidget(leftLiverStatus);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalLayoutWidget_7 = new QWidget(BodyChartWidget);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(180, 160, 160, 80));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        stomachLabel = new QLabel(verticalLayoutWidget_7);
        stomachLabel->setObjectName(QString::fromUtf8("stomachLabel"));

        verticalLayout_5->addWidget(stomachLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        rightStomachStatus = new QLabel(verticalLayoutWidget_7);
        rightStomachStatus->setObjectName(QString::fromUtf8("rightStomachStatus"));
        rightStomachStatus->setFont(font2);
        rightStomachStatus->setAlignment(Qt::AlignCenter);
        rightStomachStatus->setWordWrap(true);

        horizontalLayout_5->addWidget(rightStomachStatus);

        leftStomachStatus = new QLabel(verticalLayoutWidget_7);
        leftStomachStatus->setObjectName(QString::fromUtf8("leftStomachStatus"));
        leftStomachStatus->setFont(font2);
        leftStomachStatus->setAlignment(Qt::AlignCenter);
        leftStomachStatus->setWordWrap(true);

        horizontalLayout_5->addWidget(leftStomachStatus);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayoutWidget_8 = new QWidget(BodyChartWidget);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(350, 160, 160, 80));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gallbladderLabel = new QLabel(verticalLayoutWidget_8);
        gallbladderLabel->setObjectName(QString::fromUtf8("gallbladderLabel"));

        verticalLayout_6->addWidget(gallbladderLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rightGallbladderStatus = new QLabel(verticalLayoutWidget_8);
        rightGallbladderStatus->setObjectName(QString::fromUtf8("rightGallbladderStatus"));
        rightGallbladderStatus->setFont(font2);
        rightGallbladderStatus->setAlignment(Qt::AlignCenter);
        rightGallbladderStatus->setWordWrap(true);

        horizontalLayout_6->addWidget(rightGallbladderStatus);

        leftGallbladderStatus = new QLabel(verticalLayoutWidget_8);
        leftGallbladderStatus->setObjectName(QString::fromUtf8("leftGallbladderStatus"));
        leftGallbladderStatus->setFont(font2);
        leftGallbladderStatus->setAlignment(Qt::AlignCenter);
        leftGallbladderStatus->setWordWrap(true);

        horizontalLayout_6->addWidget(leftGallbladderStatus);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalLayoutWidget_9 = new QWidget(BodyChartWidget);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(10, 250, 160, 80));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        kidneyLabel = new QLabel(verticalLayoutWidget_9);
        kidneyLabel->setObjectName(QString::fromUtf8("kidneyLabel"));

        verticalLayout_7->addWidget(kidneyLabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        leftKidneyStatus = new QLabel(verticalLayoutWidget_9);
        leftKidneyStatus->setObjectName(QString::fromUtf8("leftKidneyStatus"));
        leftKidneyStatus->setFont(font2);
        leftKidneyStatus->setAlignment(Qt::AlignCenter);
        leftKidneyStatus->setWordWrap(true);

        horizontalLayout_7->addWidget(leftKidneyStatus);

        rightKidneyStatus = new QLabel(verticalLayoutWidget_9);
        rightKidneyStatus->setObjectName(QString::fromUtf8("rightKidneyStatus"));
        rightKidneyStatus->setFont(font2);
        rightKidneyStatus->setAlignment(Qt::AlignCenter);
        rightKidneyStatus->setWordWrap(true);

        horizontalLayout_7->addWidget(rightKidneyStatus);


        verticalLayout_7->addLayout(horizontalLayout_7);

        verticalLayoutWidget_10 = new QWidget(BodyChartWidget);
        verticalLayoutWidget_10->setObjectName(QString::fromUtf8("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(180, 250, 160, 80));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        bladderLabel = new QLabel(verticalLayoutWidget_10);
        bladderLabel->setObjectName(QString::fromUtf8("bladderLabel"));

        verticalLayout_8->addWidget(bladderLabel);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        rightBladderStatus = new QLabel(verticalLayoutWidget_10);
        rightBladderStatus->setObjectName(QString::fromUtf8("rightBladderStatus"));
        rightBladderStatus->setFont(font2);
        rightBladderStatus->setAlignment(Qt::AlignCenter);
        rightBladderStatus->setWordWrap(true);

        horizontalLayout_8->addWidget(rightBladderStatus);

        leftBladderStatus = new QLabel(verticalLayoutWidget_10);
        leftBladderStatus->setObjectName(QString::fromUtf8("leftBladderStatus"));
        leftBladderStatus->setFont(font2);
        leftBladderStatus->setAlignment(Qt::AlignCenter);
        leftBladderStatus->setWordWrap(true);

        horizontalLayout_8->addWidget(leftBladderStatus);


        verticalLayout_8->addLayout(horizontalLayout_8);

        verticalLayoutWidget_11 = new QWidget(BodyChartWidget);
        verticalLayoutWidget_11->setObjectName(QString::fromUtf8("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(140, 350, 194, 80));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        intestineLabel = new QLabel(verticalLayoutWidget_11);
        intestineLabel->setObjectName(QString::fromUtf8("intestineLabel"));

        verticalLayout_9->addWidget(intestineLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        rightSmallIntestineStatus = new QLabel(verticalLayoutWidget_11);
        rightSmallIntestineStatus->setObjectName(QString::fromUtf8("rightSmallIntestineStatus"));
        rightSmallIntestineStatus->setFont(font2);
        rightSmallIntestineStatus->setAlignment(Qt::AlignCenter);
        rightSmallIntestineStatus->setWordWrap(true);

        horizontalLayout_9->addWidget(rightSmallIntestineStatus);

        leftSmallIntestineStatus = new QLabel(verticalLayoutWidget_11);
        leftSmallIntestineStatus->setObjectName(QString::fromUtf8("leftSmallIntestineStatus"));
        leftSmallIntestineStatus->setFont(font2);
        leftSmallIntestineStatus->setAlignment(Qt::AlignCenter);
        leftSmallIntestineStatus->setWordWrap(true);

        horizontalLayout_9->addWidget(leftSmallIntestineStatus);

        rightLargeIntestineStatus = new QLabel(verticalLayoutWidget_11);
        rightLargeIntestineStatus->setObjectName(QString::fromUtf8("rightLargeIntestineStatus"));
        rightLargeIntestineStatus->setFont(font2);
        rightLargeIntestineStatus->setAlignment(Qt::AlignCenter);
        rightLargeIntestineStatus->setWordWrap(true);

        horizontalLayout_9->addWidget(rightLargeIntestineStatus);

        leftLargeIntestineStatus = new QLabel(verticalLayoutWidget_11);
        leftLargeIntestineStatus->setObjectName(QString::fromUtf8("leftLargeIntestineStatus"));
        leftLargeIntestineStatus->setFont(font2);
        leftLargeIntestineStatus->setAlignment(Qt::AlignCenter);
        leftLargeIntestineStatus->setWordWrap(true);

        horizontalLayout_9->addWidget(leftLargeIntestineStatus);


        verticalLayout_9->addLayout(horizontalLayout_9);

        ChartsTabWidget->addTab(BodyChart, QString());
        ResultsTabWidget->addTab(Visulization, QString());
        Comments = new QWidget();
        Comments->setObjectName(QString::fromUtf8("Comments"));
        CommentsLabel = new QLabel(Comments);
        CommentsLabel->setObjectName(QString::fromUtf8("CommentsLabel"));
        CommentsLabel->setGeometry(QRect(50, 50, 381, 351));
        ResultsTabWidget->addTab(Comments, QString());
        Recommendation = new QWidget();
        Recommendation->setObjectName(QString::fromUtf8("Recommendation"));
        HyperActiveFrame = new QFrame(Recommendation);
        HyperActiveFrame->setObjectName(QString::fromUtf8("HyperActiveFrame"));
        HyperActiveFrame->setGeometry(QRect(10, 10, 241, 81));
        HyperActiveFrame->setFrameShape(QFrame::StyledPanel);
        HyperActiveFrame->setFrameShadow(QFrame::Raised);
        HyperactiveTitle = new QLabel(HyperActiveFrame);
        HyperactiveTitle->setObjectName(QString::fromUtf8("HyperactiveTitle"));
        HyperactiveTitle->setGeometry(QRect(10, 10, 221, 17));
        HyperactiveTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        HyperactiveLabel = new QLabel(HyperActiveFrame);
        HyperactiveLabel->setObjectName(QString::fromUtf8("HyperactiveLabel"));
        HyperactiveLabel->setGeometry(QRect(10, 30, 221, 41));
        InsufficiencyFrame = new QFrame(Recommendation);
        InsufficiencyFrame->setObjectName(QString::fromUtf8("InsufficiencyFrame"));
        InsufficiencyFrame->setGeometry(QRect(260, 10, 241, 81));
        InsufficiencyFrame->setFrameShape(QFrame::StyledPanel);
        InsufficiencyFrame->setFrameShadow(QFrame::Raised);
        InsufficiencyTitle = new QLabel(InsufficiencyFrame);
        InsufficiencyTitle->setObjectName(QString::fromUtf8("InsufficiencyTitle"));
        InsufficiencyTitle->setGeometry(QRect(10, 10, 221, 17));
        InsufficiencyTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        InsufficiencyLabel = new QLabel(InsufficiencyFrame);
        InsufficiencyLabel->setObjectName(QString::fromUtf8("InsufficiencyLabel"));
        InsufficiencyLabel->setGeometry(QRect(10, 30, 221, 41));
        DietFrame = new QFrame(Recommendation);
        DietFrame->setObjectName(QString::fromUtf8("DietFrame"));
        DietFrame->setGeometry(QRect(10, 100, 241, 81));
        DietFrame->setFrameShape(QFrame::StyledPanel);
        DietFrame->setFrameShadow(QFrame::Raised);
        DietTitle = new QLabel(DietFrame);
        DietTitle->setObjectName(QString::fromUtf8("DietTitle"));
        DietTitle->setGeometry(QRect(10, 10, 221, 17));
        DietTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        DietLabel = new QLabel(DietFrame);
        DietLabel->setObjectName(QString::fromUtf8("DietLabel"));
        DietLabel->setGeometry(QRect(10, 30, 221, 41));
        FoodFrame = new QFrame(Recommendation);
        FoodFrame->setObjectName(QString::fromUtf8("FoodFrame"));
        FoodFrame->setGeometry(QRect(260, 100, 241, 81));
        FoodFrame->setFrameShape(QFrame::StyledPanel);
        FoodFrame->setFrameShadow(QFrame::Raised);
        FoodTitle = new QLabel(FoodFrame);
        FoodTitle->setObjectName(QString::fromUtf8("FoodTitle"));
        FoodTitle->setGeometry(QRect(10, 10, 221, 17));
        FoodTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        FoodLabel = new QLabel(FoodFrame);
        FoodLabel->setObjectName(QString::fromUtf8("FoodLabel"));
        FoodLabel->setGeometry(QRect(10, 30, 221, 41));
        ExcludeFrame = new QFrame(Recommendation);
        ExcludeFrame->setObjectName(QString::fromUtf8("ExcludeFrame"));
        ExcludeFrame->setGeometry(QRect(10, 190, 241, 81));
        ExcludeFrame->setFrameShape(QFrame::StyledPanel);
        ExcludeFrame->setFrameShadow(QFrame::Raised);
        ExcludeTitle = new QLabel(ExcludeFrame);
        ExcludeTitle->setObjectName(QString::fromUtf8("ExcludeTitle"));
        ExcludeTitle->setGeometry(QRect(10, 10, 221, 17));
        ExcludeTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        ExcludeLabel = new QLabel(ExcludeFrame);
        ExcludeLabel->setObjectName(QString::fromUtf8("ExcludeLabel"));
        ExcludeLabel->setGeometry(QRect(10, 30, 221, 41));
        GeneralFrame = new QFrame(Recommendation);
        GeneralFrame->setObjectName(QString::fromUtf8("GeneralFrame"));
        GeneralFrame->setGeometry(QRect(260, 190, 241, 81));
        GeneralFrame->setFrameShape(QFrame::StyledPanel);
        GeneralFrame->setFrameShadow(QFrame::Raised);
        GeneralTitle = new QLabel(GeneralFrame);
        GeneralTitle->setObjectName(QString::fromUtf8("GeneralTitle"));
        GeneralTitle->setGeometry(QRect(10, 10, 221, 17));
        GeneralTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        GeneralLabel = new QLabel(GeneralFrame);
        GeneralLabel->setObjectName(QString::fromUtf8("GeneralLabel"));
        GeneralLabel->setGeometry(QRect(10, 30, 221, 41));
        ActivityFrame = new QFrame(Recommendation);
        ActivityFrame->setObjectName(QString::fromUtf8("ActivityFrame"));
        ActivityFrame->setGeometry(QRect(10, 280, 241, 81));
        ActivityFrame->setFrameShape(QFrame::StyledPanel);
        ActivityFrame->setFrameShadow(QFrame::Raised);
        ActivityTitle = new QLabel(ActivityFrame);
        ActivityTitle->setObjectName(QString::fromUtf8("ActivityTitle"));
        ActivityTitle->setGeometry(QRect(10, 10, 221, 17));
        ActivityTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        ActivityLabel = new QLabel(ActivityFrame);
        ActivityLabel->setObjectName(QString::fromUtf8("ActivityLabel"));
        ActivityLabel->setGeometry(QRect(10, 30, 221, 41));
        SupplementFrame = new QFrame(Recommendation);
        SupplementFrame->setObjectName(QString::fromUtf8("SupplementFrame"));
        SupplementFrame->setGeometry(QRect(260, 280, 241, 81));
        SupplementFrame->setFrameShape(QFrame::StyledPanel);
        SupplementFrame->setFrameShadow(QFrame::Raised);
        SupplementTitle = new QLabel(SupplementFrame);
        SupplementTitle->setObjectName(QString::fromUtf8("SupplementTitle"));
        SupplementTitle->setGeometry(QRect(10, 10, 221, 17));
        SupplementTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81);"));
        SupplementLabel = new QLabel(SupplementFrame);
        SupplementLabel->setObjectName(QString::fromUtf8("SupplementLabel"));
        SupplementLabel->setGeometry(QRect(10, 30, 221, 41));
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
        ChartsTabWidget->setCurrentIndex(0);


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
        OnButton->setText(QCoreApplication::translate("MainWindow", "Turn On", nullptr));
        OffButton->setText(QCoreApplication::translate("MainWindow", "Turn Off", nullptr));
        ChargeButton->setText(QCoreApplication::translate("MainWindow", "Charge the Device", nullptr));
        PairButton->setText(QCoreApplication::translate("MainWindow", "Pair the Device with App", nullptr));
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
        HistoryHomePageButton->setText(QCoreApplication::translate("MainWindow", "Details", nullptr));
        MeasureNowHomePageButton->setText(QCoreApplication::translate("MainWindow", "Measure Now", nullptr));
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
        ViewProfileDetailsButton->setText(QCoreApplication::translate("MainWindow", "View Details", nullptr));
        DeleteProfileButton->setText(QCoreApplication::translate("MainWindow", "Delete Profile", nullptr));
        GenderLabelUpdate->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        loginImageUpdate->setText(QCoreApplication::translate("MainWindow", "IMAGE", nullptr));
        SavePushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        WeightLabelUpdate->setText(QCoreApplication::translate("MainWindow", "Weight, kg", nullptr));
        ProfileNameTextEditUpdate->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Profile Name</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        HeightLabelUpdate->setText(QCoreApplication::translate("MainWindow", "Height, cm", nullptr));
        WeightTextEditUpdate->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Your Weight</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        DateOfBirthLabelUpdate->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        HeightTextEditUpdate->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Your Height</p></body></html>", nullptr));
        GenderComboBoxUpdate->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        GenderComboBoxUpdate->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        GenderComboBoxUpdate->setItemText(2, QCoreApplication::translate("MainWindow", "Other", nullptr));

        GenderComboBoxUpdate->setCurrentText(QCoreApplication::translate("MainWindow", "Male", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Profile Details", nullptr));
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
        ChartsTabWidget->setTabText(ChartsTabWidget->indexOf(BarChart), QCoreApplication::translate("MainWindow", "Bar Graph", nullptr));
        ChartsTabWidget->setTabText(ChartsTabWidget->indexOf(CircleChart), QCoreApplication::translate("MainWindow", "Circle Graph", nullptr));
        BodyLabel->setText(QString());
        rightLungStatus->setText(QString());
        leftLungStatus->setText(QString());
        leftLungLabel->setText(QString());
        rightLungLabel->setText(QString());
        heartLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightHeartStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftHeartStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        veinsLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightVeinsStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftVeinsStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        liverLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightLiverStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftLiverStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        stomachLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightStomachStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftStomachStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        gallbladderLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightGallbladderStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftGallbladderStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        kidneyLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftKidneyStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightKidneyStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        bladderLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightBladderStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftBladderStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        intestineLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightSmallIntestineStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftSmallIntestineStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightLargeIntestineStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        leftLargeIntestineStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ChartsTabWidget->setTabText(ChartsTabWidget->indexOf(BodyChart), QCoreApplication::translate("MainWindow", "Body Graph", nullptr));
        ResultsTabWidget->setTabText(ResultsTabWidget->indexOf(Visulization), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        CommentsLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ResultsTabWidget->setTabText(ResultsTabWidget->indexOf(Comments), QCoreApplication::translate("MainWindow", "Page", nullptr));
        HyperactiveTitle->setText(QCoreApplication::translate("MainWindow", "  Hyperactive", nullptr));
        HyperactiveLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        InsufficiencyTitle->setText(QCoreApplication::translate("MainWindow", "  Insufficiency", nullptr));
        InsufficiencyLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        DietTitle->setText(QCoreApplication::translate("MainWindow", "  Diet", nullptr));
        DietLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        FoodTitle->setText(QCoreApplication::translate("MainWindow", "  Food", nullptr));
        FoodLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ExcludeTitle->setText(QCoreApplication::translate("MainWindow", "  Exclude", nullptr));
        ExcludeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        GeneralTitle->setText(QCoreApplication::translate("MainWindow", "  General", nullptr));
        GeneralLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ActivityTitle->setText(QCoreApplication::translate("MainWindow", "  Activity", nullptr));
        ActivityLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        SupplementTitle->setText(QCoreApplication::translate("MainWindow", "  Supplements", nullptr));
        SupplementLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
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
