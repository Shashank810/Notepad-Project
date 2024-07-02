#include "notepad.h"
#include "./ui_notepad.h"

Notepad::Notepad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    isSup=false;
    isSub=false;

    // Get a pointer to the toolbar
    toolBar = ui->toolBar;

    // Get a pointer to the text edit widget
    textEdit = ui->textEdit;

    // Create superscript and subscript actions
    QAction *superscriptAction = new QAction("Superscript", this);
    QAction *subscriptAction = new QAction("Subscript", this);

    // Connect the actions to their respective slots
    connect(superscriptAction, &QAction::triggered, this, &Notepad::on_actionSuperscript_triggered);
    connect(subscriptAction, &QAction::triggered, this, &Notepad::on_actionSubscript_triggered);
    isBold=false;

}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText("");
}

void Notepad::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the File");
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QIODevice::ReadOnly | QFile:: Text)){
        QMessageBox::warning(this, "Warning", "Cannot open File : "+ file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void Notepad::on_actionSave_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this, "Save");
    QFile file(fileName);
    currentFile= fileName;
    if(!file.open(QFile::WriteOnly | QFile:: Text)){
        QMessageBox::warning(this, "Warning", "Cannot Save File : "+ file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out<<text;
    file.close();
}

void Notepad::on_actionExit_triggered()
{
    QApplication::quit();
}

void Notepad::on_actionPaste_triggered()
{
    ui->textEdit->copy();
}

void Notepad::on_actionBold_triggered()
{
    // Get the current text cursor
        QTextCursor cursor = ui->textEdit->textCursor();

        // Check if there's a selection
        if (cursor.hasSelection()) {
            // Get the selected text
            QString selectedText = cursor.selectedText();

            if(isBold){
                QTextCharFormat format;
                format.setFontWeight(QFont::Normal);
                cursor.mergeCharFormat(format);
                cursor.insertText(selectedText, format);
            }
            else{

                // Create a new text format with bold font
                QTextCharFormat format;
                format.setFontWeight(QFont::Bold);

                // Apply the bold format to the selected text
                cursor.mergeCharFormat(format);

                // Insert the formatted text back into the text edit
                cursor.insertText(selectedText, format);
            }
            isBold = !isBold;
        }
}

void Notepad::on_actionSubscript_triggered()
{
    // Get the current cursor position
    QTextCursor cursor = textEdit->textCursor();
    QString selectedText = cursor.selectedText();

    if(isSub){
        QTextCharFormat format;
        format.setFontWeight(QFont::Normal);
        cursor.mergeCharFormat(format);
        cursor.insertText(selectedText, format);
    }
    else{
            // Insert a subscript character

    cursor.insertHtml("<sub>" + cursor.selectedText() + "</sub>");
    }
    isSub = !isSub;
}

void Notepad::on_actionSuperscript_triggered()
{
    // Get the current cursor position
    QTextCursor cursor = textEdit->textCursor();
    QString selectedText = cursor.selectedText();

    if(isSup){
        QTextCharFormat format;
        format.setFontWeight(QFont::Normal);
        cursor.mergeCharFormat(format);
        cursor.insertText(selectedText, format);
    }
    else{
        cursor.insertHtml("<sup>" + cursor.selectedText() + "</sup>");
    }
    isSup = !isSup;
}

void Notepad::on_actionAboutMe_triggered()
{
    QString about_me;
    about_me="Name : Shashank Shekhar Mishra\n"
            "DOB : 08/10/2002\n"
            "Gender : Male\n"
            "Cureently Stuying : B.Tech from Haldia Institute of Technology\n"
            "Branch : Electronics and Communication Engineering\n"
            "Passing Year : 2026\n"
            "Skills : C++,DSA,HTML,CSS,JavaScript\n";
    QMessageBox::about(this,"About Me",about_me);
}

