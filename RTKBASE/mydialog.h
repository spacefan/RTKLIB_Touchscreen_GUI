#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QLineEdit>

#include "rnx2rtkp.h"

#include "mainthreadreadfile.h"
#include <QDialog>
#include "MainthreadStr2str.h"
#include "magraphicsscene.h"

#include "mylineedit.h"


extern QString Autostart_Base;
extern int closestr2str;
extern int debugUI;


namespace Ui {
class MyDialog;
}

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = 0);
    ~MyDialog();

    QString Radmax;
    QString Radmax7;
 int CaptureTimer;



private:
Ui::MyDialog *ui;
MainthreadStr2str* m_tstr2str=new MainthreadStr2str;
MainThreadReadFile* m_readfile=new MainThreadReadFile;
std::vector<std::string> args;
std::vector<std::string> args1;
std::vector<std::string> arga;

public slots:
void recupdonneesStr2str(QStringList i);
void FermeStr2str();
void finThread(bool a);
void Close_Window();
void Start_AutoPP();
void Test_start();
void Test_stop();



private slots:
    void on_pushButton_run_rnx2rtk_process_RGP_clicked();

    void on_progressBar_valueChanged(int value);

    void Save_Options();



    // void FermeStr2str2();
    // void finThread2(bool a);



signals:
    void closeSignal(int);

};

#endif // MYDIALOG_H
