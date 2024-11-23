#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect Device View to App View button
    connect(ui->GoToAppViewButton, &QPushButton::clicked, this, &MainWindow::showAppView);

    // Connect App View to Device View button
    connect(ui->GoToDeviceViewButton, &QPushButton::clicked, this, &MainWindow::showDeviceView);

    // Connect App View buttons to respective pages
    connect(ui->HomePageButton, &QPushButton::clicked, this, &MainWindow::showHomePage);
    connect(ui->MeasureNowButton, &QPushButton::clicked, this, &MainWindow::showMeasureNowPage);
    connect(ui->HistoricalPageButton, &QPushButton::clicked, this, &MainWindow::showHistoricalPage);
    connect(ui->ProfilePageButton, &QPushButton::clicked, this, &MainWindow::showProfilePage);
    connect(ui->VisulizationPageButton, &QPushButton::clicked, this, &MainWindow::showVisualizationPage);
    connect(ui->CreateProfileButton, &QPushButton::clicked, this, &MainWindow::showCreateProfilePage);
    connect(ui->EnterButton, &QPushButton::clicked, this, &MainWindow::showLoginPage);

    //Images
    QPixmap pix("/home/student/Desktop/FinalProject/3004-Final-Project/images/loginImage.png");
    ui->loginImage->setPixmap(pix.scaled(81,71,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


// Switch to App View
void MainWindow::showAppView()
{
    // TODO: When we implement login and create profile, here we do if statement of which view to first go to after device view
    ui->ViewsStackedWidget->setCurrentWidget(ui->AppStartPage);
}

// Switch to Device View
void MainWindow::showDeviceView()
{
    ui->ViewsStackedWidget->setCurrentWidget(ui->DeviceView);
}

// Show Home Page in App View
void MainWindow::showHomePage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->HomePage);
}

void MainWindow::showCreateProfilePage()
{
    ui->ViewsStackedWidget->setCurrentWidget(ui->AppView);
    ui->AppStackedWidget->setCurrentWidget(ui->CreateProfilePage);

}

void MainWindow::showLoginPage()
{
    ui->ViewsStackedWidget->setCurrentWidget(ui->AppView);
    ui->AppStackedWidget->setCurrentWidget(ui->LoginPage);
}

// Show Measure Now Page in App View
void MainWindow::showMeasureNowPage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->MeasureNowPage);
}

// Show Historical Data Page in App View
void MainWindow::showHistoricalPage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->HistoricalPage);
}

// Show Profile Page in App View
void MainWindow::showProfilePage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->ProfilePage);
}

// Show Visualization Page in App View
void MainWindow::showVisualizationPage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->VisulizationPage);
}


