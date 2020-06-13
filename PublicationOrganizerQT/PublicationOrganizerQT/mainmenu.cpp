#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QQmlContext>

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    SetupUIComponents();
}

MainMenu::~MainMenu()
{
    delete ui;
}

bool MainMenu::eventFilter(QObject *watched, QEvent *event)
{
    // Converts the event to mouse events if necessary

    return false;
}

void MainMenu::SetupUIComponents()
{
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setMouseTracking(false);
    this->setWindowFlag(Qt::FramelessWindowHint);

    // Add Publication Button
    ui->AddPublication_BTN->setSource(QUrl(QStringLiteral("qrc:/GreenButton.qml")));
    ui->AddPublication_BTN->rootContext()->setContextProperty("displayText", "Add Publication");
    ui->AddPublication_BTN->rootContext()->setContextProperty("displayFontSize", 10.0);
    ui->AddPublication_BTN->setClearColor(Qt::transparent);
    ui->AddPublication_BTN->setAttribute(Qt::WA_AlwaysStackOnTop);

    // Delete Publication Button
    ui->DeletePublication_BTN->setSource(QUrl(QStringLiteral("qrc:/RedButton.qml")));
    ui->DeletePublication_BTN->rootContext()->setContextProperty("displayText", "Delete Publication");
    ui->DeletePublication_BTN->rootContext()->setContextProperty("displayFontSize", 10.0);
    ui->DeletePublication_BTN->setClearColor(Qt::transparent);
    ui->DeletePublication_BTN->setAttribute(Qt::WA_AlwaysStackOnTop);

    // Edit Publication Button
    ui->EditPublication_BTN->setSource(QUrl(QStringLiteral("qrc:/BlueButton.qml")));
    ui->EditPublication_BTN->rootContext()->setContextProperty("displayText", "Edit Publication");
    ui->EditPublication_BTN->rootContext()->setContextProperty("displayFontSize", 10.0);
    ui->EditPublication_BTN->setClearColor(Qt::transparent);
    ui->EditPublication_BTN->setAttribute(Qt::WA_AlwaysStackOnTop);

    // Print Report Button
    ui->PrintReport_BTN->setSource(QUrl(QStringLiteral("qrc:/YellowButton.qml")));
    ui->PrintReport_BTN->rootContext()->setContextProperty("displayText", "Print Report");
    ui->PrintReport_BTN->rootContext()->setContextProperty("displayFontSize", 10.0);
    ui->PrintReport_BTN->setClearColor(Qt::transparent);
    ui->PrintReport_BTN->setAttribute(Qt::WA_AlwaysStackOnTop);

    ui->Close_BTN->setSource(QUrl(QStringLiteral("qrc:/RedButton.qml")));
    ui->Close_BTN->rootContext()->setContextProperty("displayText", "");
    ui->Close_BTN->rootContext()->setContextProperty("displayFontSize", 10.0);
    ui->Close_BTN->setClearColor(Qt::transparent);
    ui->Close_BTN->setAttribute(Qt::WA_AlwaysStackOnTop);

    ui->Minimize_BTN->setSource(QUrl(QStringLiteral("qrc:/YellowButton.qml")));
    ui->Minimize_BTN->rootContext()->setContextProperty("displayText", "");
    ui->Minimize_BTN->rootContext()->setContextProperty("displayFontSize", 10.0);
    ui->Minimize_BTN->setClearColor(Qt::transparent);
    ui->Minimize_BTN->setAttribute(Qt::WA_AlwaysStackOnTop);

    ui->MaximizeRestore_BTN->setSource(QUrl(QStringLiteral("qrc:/GreenButton.qml")));
    ui->MaximizeRestore_BTN->rootContext()->setContextProperty("displayText", "");
    ui->MaximizeRestore_BTN->rootContext()->setContextProperty("displayFontSize", 10.0);
    ui->MaximizeRestore_BTN->setClearColor(Qt::transparent);
    ui->MaximizeRestore_BTN->setAttribute(Qt::WA_AlwaysStackOnTop);
}
