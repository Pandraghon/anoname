#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <string>
#include <map>

#include "tablegenerator.hpp"
#include "namegenerator.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_Btn_Set_clicked();
    void on_Btn_Name_clicked();

private:
    Ui::MainWindow *ui;
    std::map< QString, std::string > $race;
    std::map< QString, std::string > $gender;
};

#endif // MAINWINDOW_H
