/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionBold;
    QAction *actionSuperscript;
    QAction *actionSubscript;
    QAction *actionAboutMe;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(841, 641);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/Resourse/Icons/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon.addFile(QString::fromUtf8(":/icons/Resourse/Icons/add-file.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName("actionOpen");
        actionOpen->setCheckable(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Resourse/Icons/folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon1.addFile(QString::fromUtf8("Resourse/Icons/folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/Resourse/Icons/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon2.addFile(QString::fromUtf8(":/icons/Resourse/Icons/data-storage.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionSave->setIcon(icon2);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName("actionExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Resourse/Icons/exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExit->setIcon(icon3);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName("actionCopy");
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName("actionPaste");
        actionCut = new QAction(Notepad);
        actionCut->setObjectName("actionCut");
        actionBold = new QAction(Notepad);
        actionBold->setObjectName("actionBold");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Resourse/Icons/bold-text.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionBold->setIcon(icon4);
        actionSuperscript = new QAction(Notepad);
        actionSuperscript->setObjectName("actionSuperscript");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Resourse/Icons/superscript (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionSuperscript->setIcon(icon5);
        actionSubscript = new QAction(Notepad);
        actionSubscript->setObjectName("actionSubscript");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Resourse/Icons/subscript.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionSubscript->setIcon(icon6);
        actionAboutMe = new QAction(Notepad);
        actionAboutMe->setObjectName("actionAboutMe");
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Sans Typewriter")});
        font.setBold(true);
        actionAboutMe->setFont(font);
        actionAboutMe->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 20, 821, 511));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setBaseSize(QSize(0, 0));

        verticalLayout_2->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 841, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName("toolBar");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy1);
        toolBar->setMinimumSize(QSize(0, 0));
        Notepad->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionSuperscript);
        menuFormat->addAction(actionSubscript);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionSuperscript);
        toolBar->addAction(actionSubscript);
        toolBar->addAction(actionExit);
        toolBar->addSeparator();
        toolBar->addAction(actionAboutMe);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
        actionBold->setText(QCoreApplication::translate("Notepad", "Bold", nullptr));
        actionSuperscript->setText(QCoreApplication::translate("Notepad", "Superscript", nullptr));
        actionSubscript->setText(QCoreApplication::translate("Notepad", "Subscript", nullptr));
        actionAboutMe->setText(QCoreApplication::translate("Notepad", "AboutMe", nullptr));
#if QT_CONFIG(tooltip)
        actionAboutMe->setToolTip(QCoreApplication::translate("Notepad", "About Me", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("Notepad", "Format", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
