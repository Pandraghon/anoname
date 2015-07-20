#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    $race["Nain"] = "dwarf";
    $race["Humain"] = "human";
    $race["Elfe"] = "elf";
    $race["Orque"] = "orc";
    $race["Gnome"] = "gnome";
    $race["Halfelin"] = "halfelin";

    $gender["Homme"] = "male";
    $gender["Femme"] = "female";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Btn_Set_clicked()
{
    QString race{ui->Combo_Race->currentText()},
            gender{ui->Combo_Gender->currentText()};

    gob::TableGenerator{}.generate("names/"+$race[race]+"_"+$gender[gender]+".txt");
}

void MainWindow::on_Btn_Name_clicked()
{
    QString race{ui->Combo_Race->currentText()},
            gender{ui->Combo_Gender->currentText()};

    ui->Txt_Name->setText(QString(gob::NameGenerator{}.generate("names/"+$race[race]+"_"+$gender[gender]+".set").c_str()));
}
