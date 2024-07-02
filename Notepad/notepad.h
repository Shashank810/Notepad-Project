#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include <QTextEdit>
#include <QLabel>
#include <Qfont>



QT_BEGIN_NAMESPACE

namespace Ui {
class Notepad;
}
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionExit_triggered();

    void on_actionPaste_triggered();

    void on_actionBold_triggered();

    void on_actionSuperscript_triggered();

    void on_actionSubscript_triggered();

    void on_actionAboutMe_triggered();

private:
    Ui::Notepad *ui;
    bool isBold;
    bool isSup;
    bool isSub;
    QToolBar *toolBar; // add a pointer to the toolbar
    QTextEdit *textEdit; // add a pointer to the text edit widget
    QFont font;
    QString currentFile="";
};
#endif // NOTEPAD_H
