#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>
#include <QMouseEvent>
#include <QtGui>
#include <iostream>
#include <animationcoordinator.h>
#include "animatedbackgroundbutton.h"
#include <QColor>
#include <QQmlContext>
#include <QGraphicsEffect>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Qt Special Component Setup

    ui->SpecialButtonTest->rootContext()->setContextProperty("mainWindow", ui->SpecialButtonTest);
    ui->SpecialButtonTest->setSource(QUrl(QStringLiteral("qrc:/GreenButton.qml")));
    ui->SpecialButtonTest->setClearColor(Qt::transparent);



    // End of special setup

    this->setWindowFlag(Qt::FramelessWindowHint);
    ui->ProgramLabel->installEventFilter(this);
    ui->AddPublication_BTN->installEventFilter(this);
    ui->EditPublication_BTN->installEventFilter(this);
    ui->DeletePublication_BTN->installEventFilter(this);
    SetItemEffects();

}

MainWindow::~MainWindow()
{
    // Cleanup Shadows
    delete ProgramLabelShadow;
    delete PublicationsPanelShadow;
    delete PublicationSearchTitleShadow;
    delete SearchAreaShadow;
    delete ButtonFrameShadow;

    // Delete UI element
    delete ui;
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    QMouseEvent* convertedEvent = static_cast<QMouseEvent*>(event);

    if(watched == ui->AddPublication_BTN
            || watched == ui->DeletePublication_BTN
            || watched == ui->EditPublication_BTN)
    {
        if(convertedEvent->type() == QMouseEvent::Type::Enter)
        {
            PushButtonAnimation pba = PushButtonAnimation();
            pba.AppearanceRestingToHover((QPushButton*)watched);
            return true;
        }
    }
    if(watched == ui->AddPublication_BTN
            || watched == ui->DeletePublication_BTN
            || watched == ui->EditPublication_BTN)
    {
        if(convertedEvent->type() == QMouseEvent::Type::Leave)
        {
            PushButtonAnimation pba = PushButtonAnimation();
            pba.ResumeNormalButtonAppearanceFromHover((QPushButton*)watched);
            return true;
        }
    }
    if(watched == ui->AddPublication_BTN
            || watched == ui->DeletePublication_BTN
            || watched == ui->EditPublication_BTN)
    {
        if(convertedEvent->type() == QMouseEvent::MouseButtonPress)
        {
            PushButtonAnimation pba = PushButtonAnimation();
            pba.AppearanceHoverToClicked((QPushButton*)watched);
            return true;
        }
    }
    if(watched == ui->AddPublication_BTN
            || watched == ui->DeletePublication_BTN
            || watched == ui->EditPublication_BTN)
    {
        if(convertedEvent->type() == QMouseEvent::MouseButtonRelease)
        {
            PushButtonAnimation pba = PushButtonAnimation();
            pba.ResumeNormalButtonAppearanceFromClicked((QPushButton*)watched);
            return true;
        }
    }
    return false;
}

void MainWindow::SetItemEffects()
{
    // Set shadow effects
    ui->ProgramLabel->setGraphicsEffect(ProgramLabelShadow);
    ui->ButtonFrame->setGraphicsEffect(ButtonFrameShadow);
    ui->DataFrame->setGraphicsEffect(PublicationsPanelShadow);
    ui->SearchBoxTitleFrame->setGraphicsEffect(PublicationSearchTitleShadow);
    ui->SearchFrame->setGraphicsEffect(SearchAreaShadow);
    // Set Transparency effects
    this->setAttribute(Qt::WA_TranslucentBackground, true);
}


void MainWindow::on_ExitButton_clicked()
{
    QApplication::exit();
}

void MainWindow::on_SizeButton_clicked()
{
    if(MainWindow::windowState() == Qt::WindowState::WindowMaximized)
    {
        MainWindow::setWindowState(Qt::WindowState::WindowNoState);
    }
    else
    {
        MainWindow::setWindowState(Qt::WindowState::WindowMaximized);
    }
}

