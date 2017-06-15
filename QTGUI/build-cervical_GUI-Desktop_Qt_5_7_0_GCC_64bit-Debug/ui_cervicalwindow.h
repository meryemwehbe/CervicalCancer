/********************************************************************************
** Form generated from reading UI file 'cervicalwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERVICALWINDOW_H
#define UI_CERVICALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "customlabel.h"

QT_BEGIN_NAMESPACE

class Ui_CervicalWindow
{
public:
    QWidget *centralWidget;
    QPushButton *browse;
    QGroupBox *groupBox;
    QRadioButton *check_neg;
    QRadioButton *check_pos;
    QWidget *widget;
    QFrame *line_1;
    QFrame *line_2;
    QFrame *line_4;
    QFrame *line_3;
    CustomLabel *frameViewer;
    QLabel *label_path;
    QGroupBox *groupBox_destination;
    QLineEdit *output_path;
    QLabel *label_path_2;
    QLineEdit *output_name;
    QLabel *label_path_3;
    QPushButton *browse_path;
    QPushButton *generate;
    QGroupBox *groupBox_2;
    QCheckBox *checkNorm;
    QGroupBox *groupBox_3;
    QRadioButton *check_exp;
    QRadioButton *check_log;
    QGroupBox *groupBox_4;
    QLineEdit *x1;
    QLineEdit *x2;
    QLineEdit *y1;
    QLineEdit *y2;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *apply;
    QPushButton *reset;
    QPushButton *crop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CervicalWindow)
    {
        if (CervicalWindow->objectName().isEmpty())
            CervicalWindow->setObjectName(QStringLiteral("CervicalWindow"));
        CervicalWindow->resize(480, 641);
        CervicalWindow->setMinimumSize(QSize(480, 400));
        CervicalWindow->setMaximumSize(QSize(480, 800));
        CervicalWindow->setTabShape(QTabWidget::Triangular);
        centralWidget = new QWidget(CervicalWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        browse = new QPushButton(centralWidget);
        browse->setObjectName(QStringLiteral("browse"));
        browse->setGeometry(QRect(10, 0, 110, 41));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 310, 111, 91));
        check_neg = new QRadioButton(groupBox);
        check_neg->setObjectName(QStringLiteral("check_neg"));
        check_neg->setGeometry(QRect(10, 60, 97, 18));
        check_pos = new QRadioButton(groupBox);
        check_pos->setObjectName(QStringLiteral("check_pos"));
        check_pos->setGeometry(QRect(10, 30, 97, 18));
        check_pos->setChecked(true);
        check_neg->raise();
        check_pos->raise();
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 461, 261));
        widget->setCursor(QCursor(Qt::ArrowCursor));
        widget->setMouseTracking(false);
        line_1 = new QFrame(widget);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setGeometry(QRect(0, 0, 461, 5));
        line_1->setFrameShadow(QFrame::Plain);
        line_1->setLineWidth(5);
        line_1->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 257, 461, 5));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(5);
        line_2->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(widget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 0, 5, 261));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(5);
        line_4->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(widget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(458, 0, 5, 261));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(5);
        line_3->setFrameShape(QFrame::VLine);
        frameViewer = new CustomLabel(widget);
        frameViewer->setObjectName(QStringLiteral("frameViewer"));
        frameViewer->setGeometry(QRect(0, 0, 458, 257));
        frameViewer->setAutoFillBackground(true);
        frameViewer->setFrameShape(QFrame::Box);
        frameViewer->setFrameShadow(QFrame::Plain);
        frameViewer->setMidLineWidth(-2);
        frameViewer->setPixmap(QPixmap(QString::fromUtf8("../../../Desktop/my_photo_CV.png")));
        frameViewer->setScaledContents(true);
        frameViewer->setWordWrap(false);
        frameViewer->setOpenExternalLinks(false);
        frameViewer->raise();
        frameViewer->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_1->raise();
        label_path = new QLabel(centralWidget);
        label_path->setObjectName(QStringLiteral("label_path"));
        label_path->setGeometry(QRect(120, 10, 301, 16));
        groupBox_destination = new QGroupBox(centralWidget);
        groupBox_destination->setObjectName(QStringLiteral("groupBox_destination"));
        groupBox_destination->setGeometry(QRect(10, 490, 451, 101));
        output_path = new QLineEdit(groupBox_destination);
        output_path->setObjectName(QStringLiteral("output_path"));
        output_path->setGeometry(QRect(80, 30, 281, 21));
        label_path_2 = new QLabel(groupBox_destination);
        label_path_2->setObjectName(QStringLiteral("label_path_2"));
        label_path_2->setGeometry(QRect(10, 30, 71, 21));
        output_name = new QLineEdit(groupBox_destination);
        output_name->setObjectName(QStringLiteral("output_name"));
        output_name->setGeometry(QRect(80, 60, 131, 21));
        label_path_3 = new QLabel(groupBox_destination);
        label_path_3->setObjectName(QStringLiteral("label_path_3"));
        label_path_3->setGeometry(QRect(40, 60, 41, 21));
        browse_path = new QPushButton(groupBox_destination);
        browse_path->setObjectName(QStringLiteral("browse_path"));
        browse_path->setGeometry(QRect(370, 20, 81, 41));
        generate = new QPushButton(groupBox_destination);
        generate->setObjectName(QStringLiteral("generate"));
        generate->setGeometry(QRect(320, 60, 131, 41));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 310, 211, 91));
        checkNorm = new QCheckBox(groupBox_2);
        checkNorm->setObjectName(QStringLiteral("checkNorm"));
        checkNorm->setGeometry(QRect(10, 30, 151, 18));
        checkNorm->setChecked(true);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(130, 310, 111, 91));
        check_exp = new QRadioButton(groupBox_3);
        check_exp->setObjectName(QStringLiteral("check_exp"));
        check_exp->setGeometry(QRect(10, 60, 97, 18));
        check_exp->setChecked(true);
        check_log = new QRadioButton(groupBox_3);
        check_log->setObjectName(QStringLiteral("check_log"));
        check_log->setGeometry(QRect(10, 30, 97, 18));
        check_log->setChecked(false);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 400, 451, 91));
        x1 = new QLineEdit(groupBox_4);
        x1->setObjectName(QStringLiteral("x1"));
        x1->setGeometry(QRect(30, 30, 71, 21));
        x2 = new QLineEdit(groupBox_4);
        x2->setObjectName(QStringLiteral("x2"));
        x2->setGeometry(QRect(130, 30, 71, 21));
        y1 = new QLineEdit(groupBox_4);
        y1->setObjectName(QStringLiteral("y1"));
        y1->setGeometry(QRect(30, 60, 71, 21));
        y2 = new QLineEdit(groupBox_4);
        y2->setObjectName(QStringLiteral("y2"));
        y2->setGeometry(QRect(130, 60, 71, 21));
        label_1 = new QLabel(groupBox_4);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(10, 30, 41, 21));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 30, 41, 21));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 41, 21));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 60, 41, 21));
        apply = new QPushButton(groupBox_4);
        apply->setObjectName(QStringLiteral("apply"));
        apply->setGeometry(QRect(290, 20, 81, 41));
        reset = new QPushButton(groupBox_4);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(210, 20, 81, 41));
        crop = new QPushButton(groupBox_4);
        crop->setObjectName(QStringLiteral("crop"));
        crop->setEnabled(true);
        crop->setGeometry(QRect(370, 20, 81, 41));
        CervicalWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        browse->raise();
        label_path->raise();
        groupBox_destination->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        widget->raise();
        menuBar = new QMenuBar(CervicalWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 22));
        CervicalWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CervicalWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CervicalWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CervicalWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CervicalWindow->setStatusBar(statusBar);

        retranslateUi(CervicalWindow);

        QMetaObject::connectSlotsByName(CervicalWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CervicalWindow)
    {
        CervicalWindow->setWindowTitle(QApplication::translate("CervicalWindow", "CervicalWindow", 0));
        browse->setText(QApplication::translate("CervicalWindow", "Open", 0));
        groupBox->setTitle(QApplication::translate("CervicalWindow", "Choose pixel ...", 0));
        check_neg->setText(QApplication::translate("CervicalWindow", "negative", 0));
        check_pos->setText(QApplication::translate("CervicalWindow", "positive", 0));
        frameViewer->setText(QString());
        label_path->setText(QApplication::translate("CervicalWindow", "No file selected", 0));
        groupBox_destination->setTitle(QApplication::translate("CervicalWindow", "Output", 0));
        output_path->setText(QApplication::translate("CervicalWindow", "/Users/saeed/Desktop", 0));
        label_path_2->setText(QApplication::translate("CervicalWindow", "Destination:", 0));
        output_name->setText(QApplication::translate("CervicalWindow", "testt", 0));
        label_path_3->setText(QApplication::translate("CervicalWindow", "Name:", 0));
        browse_path->setText(QApplication::translate("CervicalWindow", "Browse", 0));
        generate->setText(QApplication::translate("CervicalWindow", "Generate", 0));
        groupBox_2->setTitle(QApplication::translate("CervicalWindow", "Training properties", 0));
        checkNorm->setText(QApplication::translate("CervicalWindow", "Color Normalization", 0));
        groupBox_3->setTitle(QApplication::translate("CervicalWindow", "Fitting model", 0));
        check_exp->setText(QApplication::translate("CervicalWindow", "Exponential", 0));
        check_log->setText(QApplication::translate("CervicalWindow", "Logarithmic", 0));
        groupBox_4->setTitle(QApplication::translate("CervicalWindow", "Cropping", 0));
        x1->setText(QApplication::translate("CervicalWindow", "0", 0));
        x2->setText(QApplication::translate("CervicalWindow", "458", 0));
        y1->setText(QApplication::translate("CervicalWindow", "0", 0));
        y2->setText(QApplication::translate("CervicalWindow", "257", 0));
        label_1->setText(QApplication::translate("CervicalWindow", "X1:", 0));
        label_2->setText(QApplication::translate("CervicalWindow", "X2:", 0));
        label_3->setText(QApplication::translate("CervicalWindow", "Y1:", 0));
        label_4->setText(QApplication::translate("CervicalWindow", "Y2:", 0));
        apply->setText(QApplication::translate("CervicalWindow", "Preview", 0));
        reset->setText(QApplication::translate("CervicalWindow", "Reset", 0));
        crop->setText(QApplication::translate("CervicalWindow", "Crop", 0));
    } // retranslateUi

};

namespace Ui {
    class CervicalWindow: public Ui_CervicalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERVICALWINDOW_H
