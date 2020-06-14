#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QQmlContext>
#include <QGraphicsDropShadowEffect>

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    SetupUIComponents();
    InstallEventFilters();
}

MainMenu::~MainMenu()
{

    delete ui;
}

bool MainMenu::eventFilter(QObject *watched, QEvent *event)
{
    // Converts the event to mouse events if necessary
    QMouseEvent* mouse_event = static_cast<QMouseEvent*>(event);

    if(watched == ui->AddPublication_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {

            return true;
        }
    }
    if(watched == ui->DeletePublication_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {

            return true;
        }
    }
    if(watched == ui->EditPublication_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {

            return true;
        }
    }
    if(watched == ui->PrintReport_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {

            return true;
        }
    }
    if(watched == ui->Search_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {
            dialog.SetMessage("Test Title", "This is a really long message: the quick brown fox jumped over the lazy dog, Humpty dumpty sat on a wall, humpty dumpty had a great fall, all the kings horses and all of the kings men, couldnt put humpty together again!");
            dialog.show();
            return true;
        }
    }
    if(watched == ui->ResetSearch_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {

            return true;
        }
    }
    if(watched == ui->MaximizeRestore_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {
            if(this->windowState() == Qt::WindowState::WindowNoState)
            {
                this->setWindowState(Qt::WindowState::WindowFullScreen);
                return true;
            }
            else if(this->windowState() == Qt::WindowState::WindowFullScreen)
            {
                this->setWindowState(Qt::WindowState::WindowNoState);
                return true;
            }
        }
    }
    if(watched == ui->Minimize_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {
            this->setWindowState(Qt::WindowState::WindowMinimized);
            return true;
        }
    }
    if(watched == ui->Close_BTN)
    {
        if(mouse_event->button() == Qt::MouseButton::LeftButton &&
                mouse_event->type() == QEvent::MouseButtonPress)
        {
            QApplication::quit();
            return true;
        }
    }

    return false;
}

void MainMenu::SetupUIComponents()
{
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setMouseTracking(false);
    this->setWindowFlag(Qt::FramelessWindowHint);

    SetUpButton(ui->MaximizeRestore_BTN, ButtonStyles::Green, "", 10.0, true);
    SetUpButton(ui->Minimize_BTN, ButtonStyles::Yellow, "", 10, true);
    SetUpButton(ui->Close_BTN, ButtonStyles::Red, "", 10, true);
    SetUpButton(ui->AddPublication_BTN, ButtonStyles::Green, "Add Publication", 10, true);
    SetUpButton(ui->DeletePublication_BTN, ButtonStyles::Red, "Delete Publication", 10, true);
    SetUpButton(ui->EditPublication_BTN, ButtonStyles::Blue, "Edit Publication", 10, true);
    SetUpButton(ui->PrintReport_BTN, ButtonStyles::Yellow, "Print Report", 10, true);
    SetUpButton(ui->Search_BTN, ButtonStyles::Blue, "Search", 10, true);
    SetUpButton(ui->ResetSearch_BTN, ButtonStyles::Black, "Reset", 10, true);
}

void MainMenu::InstallEventFilters()
{
    ui->AddPublication_BTN->installEventFilter(this);
    ui->EditPublication_BTN->installEventFilter(this);
    ui->DeletePublication_BTN->installEventFilter(this);
    ui->Minimize_BTN->installEventFilter(this);
    ui->MaximizeRestore_BTN->installEventFilter(this);
    ui->Close_BTN->installEventFilter(this);
    ui->Search_BTN->installEventFilter(this);
    ui->ResetSearch_BTN->installEventFilter(this);
}

void MainMenu::SetUpButton(QQuickWidget* button, ButtonStyles style, QString text, qreal fontSize, bool transparency)
{
    switch(style)
    {
        case this->ButtonStyles::Red:
        {
            button->setSource(QUrl(QStringLiteral("qrc:/RedButton.qml")));
            break;
        }
        case this->ButtonStyles::Blue:
        {
            button->setSource(QUrl(QStringLiteral("qrc:/BlueButton.qml")));
            break;
        }
        case this->ButtonStyles::Black:
        {
            button->setSource(QUrl(QStringLiteral("qrc:/BlackButton.qml")));
            break;
        }
        case this->ButtonStyles::Green:
        {
            button->setSource(QUrl(QStringLiteral("qrc:/GreenButton.qml")));
            break;
        }
        case this->ButtonStyles::Yellow:
        {
            button->setSource(QUrl(QStringLiteral("qrc:/YellowButton.qml")));
            break;
        }
        default:
        {
            button->setSource(QUrl(QStringLiteral("qrc:/BlackButton.qml")));
            break;
        }
    }
    button->rootContext()->setContextProperty("displayText", text);
    button->rootContext()->setContextProperty("displayFontSize", fontSize);
    if(transparency)
    {
        button->setClearColor(Qt::transparent);
    }
    button->setAttribute(Qt::WA_AlwaysStackOnTop);
}

void MainMenu::SetupGraphicsEffects()
{
    ui->ButtonSection->setGraphicsEffect(GraphicsHelper::ReturnNewDropShadowEffect());
}
