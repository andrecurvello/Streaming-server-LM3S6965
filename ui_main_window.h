/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created: Sun Dec 19 19:30:57 2010
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *mediaPlayWidget;
    QWidget *seekWidget;
    QHBoxLayout *horizontalLayout_2;
    QSlider *progressSlider;
    QLabel *progressLabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QDockWidget *playlistWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QListView *playlistView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addFileButton;
    QPushButton *removeFileButton;
    QDockWidget *mediaControlWidget;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout;
    QPushButton *toggleButton;
    QPushButton *stopButton;
    QPushButton *prevFileButton;
    QPushButton *nextFileButton;
    QDockWidget *streamingSettingsWidget;
    QWidget *dockWidgetContents_4;
    QFormLayout *formLayout;
    QLabel *controlPortLabel;
    QLabel *dataPortLabel;
    QSpinBox *controlPortBox;
    QSpinBox *dataPortBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1080, 453);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mediaPlayWidget = new QWidget(centralwidget);
        mediaPlayWidget->setObjectName(QString::fromUtf8("mediaPlayWidget"));

        verticalLayout_2->addWidget(mediaPlayWidget);

        seekWidget = new QWidget(centralwidget);
        seekWidget->setObjectName(QString::fromUtf8("seekWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(seekWidget->sizePolicy().hasHeightForWidth());
        seekWidget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(seekWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        progressSlider = new QSlider(seekWidget);
        progressSlider->setObjectName(QString::fromUtf8("progressSlider"));
        progressSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(progressSlider);

        progressLabel = new QLabel(seekWidget);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));

        horizontalLayout_2->addWidget(progressLabel);


        verticalLayout_2->addWidget(seekWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1080, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        playlistWidget = new QDockWidget(MainWindow);
        playlistWidget->setObjectName(QString::fromUtf8("playlistWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        playlistView = new QListView(dockWidgetContents);
        playlistView->setObjectName(QString::fromUtf8("playlistView"));

        verticalLayout->addWidget(playlistView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addFileButton = new QPushButton(dockWidgetContents);
        addFileButton->setObjectName(QString::fromUtf8("addFileButton"));

        horizontalLayout->addWidget(addFileButton);

        removeFileButton = new QPushButton(dockWidgetContents);
        removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));

        horizontalLayout->addWidget(removeFileButton);


        verticalLayout->addLayout(horizontalLayout);

        playlistWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), playlistWidget);
        mediaControlWidget = new QDockWidget(MainWindow);
        mediaControlWidget->setObjectName(QString::fromUtf8("mediaControlWidget"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout = new QGridLayout(dockWidgetContents_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toggleButton = new QPushButton(dockWidgetContents_3);
        toggleButton->setObjectName(QString::fromUtf8("toggleButton"));

        gridLayout->addWidget(toggleButton, 0, 0, 1, 1);

        stopButton = new QPushButton(dockWidgetContents_3);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        gridLayout->addWidget(stopButton, 0, 1, 1, 1);

        prevFileButton = new QPushButton(dockWidgetContents_3);
        prevFileButton->setObjectName(QString::fromUtf8("prevFileButton"));

        gridLayout->addWidget(prevFileButton, 1, 0, 1, 1);

        nextFileButton = new QPushButton(dockWidgetContents_3);
        nextFileButton->setObjectName(QString::fromUtf8("nextFileButton"));

        gridLayout->addWidget(nextFileButton, 1, 1, 1, 1);

        mediaControlWidget->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), mediaControlWidget);
        streamingSettingsWidget = new QDockWidget(MainWindow);
        streamingSettingsWidget->setObjectName(QString::fromUtf8("streamingSettingsWidget"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        formLayout = new QFormLayout(dockWidgetContents_4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        controlPortLabel = new QLabel(dockWidgetContents_4);
        controlPortLabel->setObjectName(QString::fromUtf8("controlPortLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, controlPortLabel);

        dataPortLabel = new QLabel(dockWidgetContents_4);
        dataPortLabel->setObjectName(QString::fromUtf8("dataPortLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dataPortLabel);

        controlPortBox = new QSpinBox(dockWidgetContents_4);
        controlPortBox->setObjectName(QString::fromUtf8("controlPortBox"));
        controlPortBox->setMaximum(65535);
        controlPortBox->setValue(58001);

        formLayout->setWidget(2, QFormLayout::FieldRole, controlPortBox);

        dataPortBox = new QSpinBox(dockWidgetContents_4);
        dataPortBox->setObjectName(QString::fromUtf8("dataPortBox"));
        dataPortBox->setMaximum(65535);
        dataPortBox->setValue(58002);

        formLayout->setWidget(1, QFormLayout::FieldRole, dataPortBox);

        streamingSettingsWidget->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), streamingSettingsWidget);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        progressLabel->setText(QApplication::translate("MainWindow", "xx:xx:xx/xx:xx:xx", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        playlistWidget->setWindowTitle(QApplication::translate("MainWindow", "Playlist", 0, QApplication::UnicodeUTF8));
        addFileButton->setText(QApplication::translate("MainWindow", "Add New", 0, QApplication::UnicodeUTF8));
        removeFileButton->setText(QApplication::translate("MainWindow", "Remove", 0, QApplication::UnicodeUTF8));
        mediaControlWidget->setWindowTitle(QApplication::translate("MainWindow", "Media Cotrol", 0, QApplication::UnicodeUTF8));
        toggleButton->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        prevFileButton->setText(QApplication::translate("MainWindow", "Prev", 0, QApplication::UnicodeUTF8));
        nextFileButton->setText(QApplication::translate("MainWindow", "Next", 0, QApplication::UnicodeUTF8));
        streamingSettingsWidget->setWindowTitle(QApplication::translate("MainWindow", "Steaming settings", 0, QApplication::UnicodeUTF8));
        controlPortLabel->setText(QApplication::translate("MainWindow", "Port control:", 0, QApplication::UnicodeUTF8));
        dataPortLabel->setText(QApplication::translate("MainWindow", "Port data:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
