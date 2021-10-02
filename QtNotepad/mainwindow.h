#ifndef MAINWINDOW_H //makes sure the header files are not loaded more than one time
#define MAINWINDOW_H

#include <QMainWindow> //provides the main application window
#include <QFile> //work with files
#include <QFileDialog>
#include <QTextStream> //reading text from files
#include <QMessageBox> //allows a message box to pop-up
#include <QPrinter> //in case the user wants to print the file
#include <QPrintDialog> //allows the user to select what printer they want to use

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; } //use the standard Ui namespace that is tied to "mainwindow.ui"
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT //the class is declared as a Q_OBJECT, which is the base class for all of the Qt objects

public:
    MainWindow(QWidget *parent = nullptr); //declaring a constructor that specifies that it has no parents
    ~MainWindow(); //destructor for freeing resources

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

private:
    Ui::MainWindow *ui; //pointing to the UI class
    QString currentFile = "";
};
#endif // MAINWINDOW_H
