/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *Combo_Race;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *Combo_Gender;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *Txt_Name;
    QHBoxLayout *horizontalLayout;
    QPushButton *Btn_Set;
    QPushButton *Btn_Name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(182, 170);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        Combo_Race = new QComboBox(centralwidget);
        Combo_Race->setObjectName(QStringLiteral("Combo_Race"));

        horizontalLayout_3->addWidget(Combo_Race);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        Combo_Gender = new QComboBox(centralwidget);
        Combo_Gender->setObjectName(QStringLiteral("Combo_Gender"));

        horizontalLayout_4->addWidget(Combo_Gender);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        Txt_Name = new QLineEdit(centralwidget);
        Txt_Name->setObjectName(QStringLiteral("Txt_Name"));

        horizontalLayout_2->addWidget(Txt_Name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Btn_Set = new QPushButton(centralwidget);
        Btn_Set->setObjectName(QStringLiteral("Btn_Set"));

        horizontalLayout->addWidget(Btn_Set);

        Btn_Name = new QPushButton(centralwidget);
        Btn_Name->setObjectName(QStringLiteral("Btn_Name"));

        horizontalLayout->addWidget(Btn_Name);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 182, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Anoname", 0));
        label_2->setText(QApplication::translate("MainWindow", "Race", 0));
        Combo_Race->clear();
        Combo_Race->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Nain", 0)
         << QApplication::translate("MainWindow", "Elfe", 0)
         << QApplication::translate("MainWindow", "Humain", 0)
         << QApplication::translate("MainWindow", "Orque", 0)
         << QApplication::translate("MainWindow", "Gnome", 0)
         << QApplication::translate("MainWindow", "Halfelin", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "Sexe", 0));
        Combo_Gender->clear();
        Combo_Gender->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Homme", 0)
         << QApplication::translate("MainWindow", "Femme", 0)
        );
        Combo_Gender->setCurrentText(QApplication::translate("MainWindow", "Homme", 0));
        label->setText(QApplication::translate("MainWindow", "Nom", 0));
        Btn_Set->setText(QApplication::translate("MainWindow", "G\303\251n\303\251rer .set", 0));
        Btn_Name->setText(QApplication::translate("MainWindow", "G\303\251n\303\251rer nom", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
