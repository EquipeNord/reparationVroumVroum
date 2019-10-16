/********************************************************************************
** Form generated from reading UI file 'dialogmagasinier.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAGASINIER_H
#define UI_DIALOGMAGASINIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogMagasinier
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QTabWidget *tabWidget;
    QWidget *tabManageStock;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidgetStock;
    QWidget *widgetPartForm;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelFormPart;
    QLabel *labelRef;
    QLineEdit *lineEditRef;
    QLabel *labelLib;
    QLineEdit *lineEditLib;
    QLabel *labelQte;
    QSpinBox *spinBoxQte;
    QLabel *labelPU_HT;
    QDoubleSpinBox *doubleSpinBoxPU_HT;
    QLabel *label_PU_TTC;
    QDoubleSpinBox *doubleSpinBoxPU_TTC;
    QSpacerItem *verticalSpacer;
    QWidget *widgetFormButtons;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButtonAdd;
    QToolButton *toolButtonEdit;
    QToolButton *toolButtonCancel;
    QWidget *tabRepairsList;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidgetRepairsList;
    QWidget *widgetPartsUsed;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *labelRepairNumber;
    QTableWidget *tableWidgetPartsUsed;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelRepairAddPArt;
    QLabel *labelRefList;
    QComboBox *comboBoxParts;
    QLabel *labelQteList;
    QSpinBox *spinBoxPartsQuantity;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButtonAddToRepair;
    QToolButton *toolButtonEditToRepair;
    QToolButton *toolButtonRemoveToRepair;
    QToolButton *toolButtonCancelToRepair;
    QWidget *tabRefMatching;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelRefMatch;
    QLineEdit *lineEditRefMatch;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelSupplierMatch;
    QComboBox *comboBoxSupplierMatch;
    QTableWidget *tableWidgetRefMatching;

    void setupUi(QDialog *DialogMagasinier)
    {
        if (DialogMagasinier->objectName().isEmpty())
            DialogMagasinier->setObjectName(QStringLiteral("DialogMagasinier"));
        DialogMagasinier->resize(900, 600);
        DialogMagasinier->setMinimumSize(QSize(900, 600));
        verticalLayout = new QVBoxLayout(DialogMagasinier);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelTitle = new QLabel(DialogMagasinier);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);
        labelTitle->setTextFormat(Qt::PlainText);
        labelTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        tabWidget = new QTabWidget(DialogMagasinier);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabManageStock = new QWidget();
        tabManageStock->setObjectName(QStringLiteral("tabManageStock"));
        horizontalLayout = new QHBoxLayout(tabManageStock);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidgetStock = new QTableWidget(tabManageStock);
        if (tableWidgetStock->columnCount() < 5)
            tableWidgetStock->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetStock->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetStock->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetStock->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetStock->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetStock->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetStock->setObjectName(QStringLiteral("tableWidgetStock"));
        tableWidgetStock->setTabKeyNavigation(false);
        tableWidgetStock->setAlternatingRowColors(true);
        tableWidgetStock->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetStock->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetStock->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(tableWidgetStock);

        widgetPartForm = new QWidget(tabManageStock);
        widgetPartForm->setObjectName(QStringLiteral("widgetPartForm"));
        widgetPartForm->setMinimumSize(QSize(300, 0));
        widgetPartForm->setMaximumSize(QSize(250, 16777215));
        verticalLayout_2 = new QVBoxLayout(widgetPartForm);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelFormPart = new QLabel(widgetPartForm);
        labelFormPart->setObjectName(QStringLiteral("labelFormPart"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelFormPart->setFont(font1);

        verticalLayout_2->addWidget(labelFormPart);

        labelRef = new QLabel(widgetPartForm);
        labelRef->setObjectName(QStringLiteral("labelRef"));

        verticalLayout_2->addWidget(labelRef);

        lineEditRef = new QLineEdit(widgetPartForm);
        lineEditRef->setObjectName(QStringLiteral("lineEditRef"));
        lineEditRef->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(lineEditRef);

        labelLib = new QLabel(widgetPartForm);
        labelLib->setObjectName(QStringLiteral("labelLib"));

        verticalLayout_2->addWidget(labelLib);

        lineEditLib = new QLineEdit(widgetPartForm);
        lineEditLib->setObjectName(QStringLiteral("lineEditLib"));

        verticalLayout_2->addWidget(lineEditLib);

        labelQte = new QLabel(widgetPartForm);
        labelQte->setObjectName(QStringLiteral("labelQte"));

        verticalLayout_2->addWidget(labelQte);

        spinBoxQte = new QSpinBox(widgetPartForm);
        spinBoxQte->setObjectName(QStringLiteral("spinBoxQte"));
        spinBoxQte->setButtonSymbols(QAbstractSpinBox::PlusMinus);

        verticalLayout_2->addWidget(spinBoxQte);

        labelPU_HT = new QLabel(widgetPartForm);
        labelPU_HT->setObjectName(QStringLiteral("labelPU_HT"));

        verticalLayout_2->addWidget(labelPU_HT);

        doubleSpinBoxPU_HT = new QDoubleSpinBox(widgetPartForm);
        doubleSpinBoxPU_HT->setObjectName(QStringLiteral("doubleSpinBoxPU_HT"));

        verticalLayout_2->addWidget(doubleSpinBoxPU_HT);

        label_PU_TTC = new QLabel(widgetPartForm);
        label_PU_TTC->setObjectName(QStringLiteral("label_PU_TTC"));

        verticalLayout_2->addWidget(label_PU_TTC);

        doubleSpinBoxPU_TTC = new QDoubleSpinBox(widgetPartForm);
        doubleSpinBoxPU_TTC->setObjectName(QStringLiteral("doubleSpinBoxPU_TTC"));

        verticalLayout_2->addWidget(doubleSpinBoxPU_TTC);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widgetFormButtons = new QWidget(widgetPartForm);
        widgetFormButtons->setObjectName(QStringLiteral("widgetFormButtons"));
        horizontalLayout_2 = new QHBoxLayout(widgetFormButtons);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButtonAdd = new QToolButton(widgetFormButtons);
        toolButtonAdd->setObjectName(QStringLiteral("toolButtonAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonAdd->sizePolicy().hasHeightForWidth());
        toolButtonAdd->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonAdd->setIcon(icon);
        toolButtonAdd->setIconSize(QSize(32, 32));
        toolButtonAdd->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(toolButtonAdd);

        toolButtonEdit = new QToolButton(widgetFormButtons);
        toolButtonEdit->setObjectName(QStringLiteral("toolButtonEdit"));
        sizePolicy.setHeightForWidth(toolButtonEdit->sizePolicy().hasHeightForWidth());
        toolButtonEdit->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonEdit->setIcon(icon1);
        toolButtonEdit->setIconSize(QSize(32, 32));
        toolButtonEdit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(toolButtonEdit);


        verticalLayout_2->addWidget(widgetFormButtons);

        toolButtonCancel = new QToolButton(widgetPartForm);
        toolButtonCancel->setObjectName(QStringLiteral("toolButtonCancel"));
        sizePolicy.setHeightForWidth(toolButtonCancel->sizePolicy().hasHeightForWidth());
        toolButtonCancel->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonCancel->setIcon(icon2);
        toolButtonCancel->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(toolButtonCancel);


        horizontalLayout->addWidget(widgetPartForm);

        tabWidget->addTab(tabManageStock, QString());
        tabRepairsList = new QWidget();
        tabRepairsList->setObjectName(QStringLiteral("tabRepairsList"));
        horizontalLayout_3 = new QHBoxLayout(tabRepairsList);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableWidgetRepairsList = new QTableWidget(tabRepairsList);
        if (tableWidgetRepairsList->columnCount() < 10)
            tableWidgetRepairsList->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetRepairsList->setHorizontalHeaderItem(9, __qtablewidgetitem14);
        tableWidgetRepairsList->setObjectName(QStringLiteral("tableWidgetRepairsList"));
        tableWidgetRepairsList->setTabKeyNavigation(false);
        tableWidgetRepairsList->setAlternatingRowColors(true);
        tableWidgetRepairsList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetRepairsList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetRepairsList->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(tableWidgetRepairsList);

        widgetPartsUsed = new QWidget(tabRepairsList);
        widgetPartsUsed->setObjectName(QStringLiteral("widgetPartsUsed"));
        widgetPartsUsed->setMinimumSize(QSize(427, 0));
        widgetPartsUsed->setMaximumSize(QSize(300, 16777215));
        verticalLayout_3 = new QVBoxLayout(widgetPartsUsed);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(widgetPartsUsed);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        label_3->setFont(font2);

        horizontalLayout_5->addWidget(label_3);

        labelRepairNumber = new QLabel(widgetPartsUsed);
        labelRepairNumber->setObjectName(QStringLiteral("labelRepairNumber"));
        labelRepairNumber->setFont(font1);

        horizontalLayout_5->addWidget(labelRepairNumber);


        verticalLayout_3->addLayout(horizontalLayout_5);

        tableWidgetPartsUsed = new QTableWidget(widgetPartsUsed);
        if (tableWidgetPartsUsed->columnCount() < 3)
            tableWidgetPartsUsed->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetPartsUsed->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetPartsUsed->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetPartsUsed->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        tableWidgetPartsUsed->setObjectName(QStringLiteral("tableWidgetPartsUsed"));
        tableWidgetPartsUsed->setTabKeyNavigation(false);
        tableWidgetPartsUsed->setAlternatingRowColors(true);
        tableWidgetPartsUsed->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetPartsUsed->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetPartsUsed->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableWidgetPartsUsed);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        labelRepairAddPArt = new QLabel(widgetPartsUsed);
        labelRepairAddPArt->setObjectName(QStringLiteral("labelRepairAddPArt"));
        labelRepairAddPArt->setFont(font1);

        verticalLayout_3->addWidget(labelRepairAddPArt);

        labelRefList = new QLabel(widgetPartsUsed);
        labelRefList->setObjectName(QStringLiteral("labelRefList"));

        verticalLayout_3->addWidget(labelRefList);

        comboBoxParts = new QComboBox(widgetPartsUsed);
        comboBoxParts->setObjectName(QStringLiteral("comboBoxParts"));

        verticalLayout_3->addWidget(comboBoxParts);

        labelQteList = new QLabel(widgetPartsUsed);
        labelQteList->setObjectName(QStringLiteral("labelQteList"));

        verticalLayout_3->addWidget(labelQteList);

        spinBoxPartsQuantity = new QSpinBox(widgetPartsUsed);
        spinBoxPartsQuantity->setObjectName(QStringLiteral("spinBoxPartsQuantity"));
        spinBoxPartsQuantity->setButtonSymbols(QAbstractSpinBox::PlusMinus);

        verticalLayout_3->addWidget(spinBoxPartsQuantity);

        widget_2 = new QWidget(widgetPartsUsed);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        toolButtonAddToRepair = new QToolButton(widget_2);
        toolButtonAddToRepair->setObjectName(QStringLiteral("toolButtonAddToRepair"));
        sizePolicy.setHeightForWidth(toolButtonAddToRepair->sizePolicy().hasHeightForWidth());
        toolButtonAddToRepair->setSizePolicy(sizePolicy);
        toolButtonAddToRepair->setIcon(icon);
        toolButtonAddToRepair->setIconSize(QSize(32, 32));
        toolButtonAddToRepair->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_4->addWidget(toolButtonAddToRepair);

        toolButtonEditToRepair = new QToolButton(widget_2);
        toolButtonEditToRepair->setObjectName(QStringLiteral("toolButtonEditToRepair"));
        sizePolicy.setHeightForWidth(toolButtonEditToRepair->sizePolicy().hasHeightForWidth());
        toolButtonEditToRepair->setSizePolicy(sizePolicy);
        toolButtonEditToRepair->setIcon(icon1);
        toolButtonEditToRepair->setIconSize(QSize(32, 32));
        toolButtonEditToRepair->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_4->addWidget(toolButtonEditToRepair);

        toolButtonRemoveToRepair = new QToolButton(widget_2);
        toolButtonRemoveToRepair->setObjectName(QStringLiteral("toolButtonRemoveToRepair"));
        sizePolicy.setHeightForWidth(toolButtonRemoveToRepair->sizePolicy().hasHeightForWidth());
        toolButtonRemoveToRepair->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonRemoveToRepair->setIcon(icon3);
        toolButtonRemoveToRepair->setIconSize(QSize(32, 32));
        toolButtonRemoveToRepair->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_4->addWidget(toolButtonRemoveToRepair);


        verticalLayout_3->addWidget(widget_2);

        toolButtonCancelToRepair = new QToolButton(widgetPartsUsed);
        toolButtonCancelToRepair->setObjectName(QStringLiteral("toolButtonCancelToRepair"));
        sizePolicy.setHeightForWidth(toolButtonCancelToRepair->sizePolicy().hasHeightForWidth());
        toolButtonCancelToRepair->setSizePolicy(sizePolicy);
        toolButtonCancelToRepair->setIcon(icon2);
        toolButtonCancelToRepair->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(toolButtonCancelToRepair);


        horizontalLayout_3->addWidget(widgetPartsUsed);

        tabWidget->addTab(tabRepairsList, QString());
        tabRefMatching = new QWidget();
        tabRefMatching->setObjectName(QStringLiteral("tabRefMatching"));
        verticalLayout_4 = new QVBoxLayout(tabRefMatching);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(tabRefMatching);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        verticalLayout_4->addWidget(label);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelRefMatch = new QLabel(tabRefMatching);
        labelRefMatch->setObjectName(QStringLiteral("labelRefMatch"));

        horizontalLayout_6->addWidget(labelRefMatch);

        lineEditRefMatch = new QLineEdit(tabRefMatching);
        lineEditRefMatch->setObjectName(QStringLiteral("lineEditRefMatch"));

        horizontalLayout_6->addWidget(lineEditRefMatch);

        pushButton = new QPushButton(tabRefMatching);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setIcon(icon2);
        pushButton->setFlat(true);

        horizontalLayout_6->addWidget(pushButton);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        labelSupplierMatch = new QLabel(tabRefMatching);
        labelSupplierMatch->setObjectName(QStringLiteral("labelSupplierMatch"));

        horizontalLayout_7->addWidget(labelSupplierMatch);

        comboBoxSupplierMatch = new QComboBox(tabRefMatching);
        comboBoxSupplierMatch->setObjectName(QStringLiteral("comboBoxSupplierMatch"));
        sizePolicy.setHeightForWidth(comboBoxSupplierMatch->sizePolicy().hasHeightForWidth());
        comboBoxSupplierMatch->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(comboBoxSupplierMatch);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout_8);

        tableWidgetRefMatching = new QTableWidget(tabRefMatching);
        if (tableWidgetRefMatching->columnCount() < 6)
            tableWidgetRefMatching->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetRefMatching->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetRefMatching->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidgetRefMatching->setHorizontalHeaderItem(2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidgetRefMatching->setHorizontalHeaderItem(3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidgetRefMatching->setHorizontalHeaderItem(4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidgetRefMatching->setHorizontalHeaderItem(5, __qtablewidgetitem23);
        tableWidgetRefMatching->setObjectName(QStringLiteral("tableWidgetRefMatching"));
        tableWidgetRefMatching->setTabKeyNavigation(false);
        tableWidgetRefMatching->setAlternatingRowColors(true);
        tableWidgetRefMatching->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetRefMatching->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetRefMatching->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableWidgetRefMatching);

        tabWidget->addTab(tabRefMatching, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, tableWidgetStock);
        QWidget::setTabOrder(tableWidgetStock, lineEditRef);
        QWidget::setTabOrder(lineEditRef, lineEditLib);
        QWidget::setTabOrder(lineEditLib, spinBoxQte);
        QWidget::setTabOrder(spinBoxQte, doubleSpinBoxPU_HT);
        QWidget::setTabOrder(doubleSpinBoxPU_HT, doubleSpinBoxPU_TTC);
        QWidget::setTabOrder(doubleSpinBoxPU_TTC, toolButtonAdd);
        QWidget::setTabOrder(toolButtonAdd, toolButtonEdit);
        QWidget::setTabOrder(toolButtonEdit, toolButtonCancel);
        QWidget::setTabOrder(toolButtonCancel, tableWidgetRepairsList);
        QWidget::setTabOrder(tableWidgetRepairsList, tableWidgetPartsUsed);
        QWidget::setTabOrder(tableWidgetPartsUsed, comboBoxParts);
        QWidget::setTabOrder(comboBoxParts, spinBoxPartsQuantity);
        QWidget::setTabOrder(spinBoxPartsQuantity, toolButtonAddToRepair);
        QWidget::setTabOrder(toolButtonAddToRepair, toolButtonEditToRepair);
        QWidget::setTabOrder(toolButtonEditToRepair, toolButtonRemoveToRepair);
        QWidget::setTabOrder(toolButtonRemoveToRepair, toolButtonCancelToRepair);
        QWidget::setTabOrder(toolButtonCancelToRepair, tableWidgetRefMatching);

        retranslateUi(DialogMagasinier);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogMagasinier);
    } // setupUi

    void retranslateUi(QDialog *DialogMagasinier)
    {
        DialogMagasinier->setWindowTitle(QApplication::translate("DialogMagasinier", "Storekeeper | R\303\251paration Garage", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DialogMagasinier", "Storekeeper", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetStock->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogMagasinier", "Ref. number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetStock->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogMagasinier", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetStock->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogMagasinier", "Quantity available", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetStock->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogMagasinier", "Unit Price (ex. Taxes, \342\202\254)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetStock->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogMagasinier", "Unit Price (incl. Taxes, \342\202\254)", Q_NULLPTR));
        labelFormPart->setText(QApplication::translate("DialogMagasinier", "Add a part", Q_NULLPTR));
        labelRef->setText(QApplication::translate("DialogMagasinier", "Reference number :", Q_NULLPTR));
        labelLib->setText(QApplication::translate("DialogMagasinier", "Name :", Q_NULLPTR));
        labelQte->setText(QApplication::translate("DialogMagasinier", "Quantity available :", Q_NULLPTR));
        labelPU_HT->setText(QApplication::translate("DialogMagasinier", "Unit Price (ex. Taxes) :", Q_NULLPTR));
        doubleSpinBoxPU_HT->setSuffix(QApplication::translate("DialogMagasinier", " \342\202\254", Q_NULLPTR));
        label_PU_TTC->setText(QApplication::translate("DialogMagasinier", "Unit Price (incl. Taxes) :", Q_NULLPTR));
        doubleSpinBoxPU_TTC->setSuffix(QApplication::translate("DialogMagasinier", " \342\202\254", Q_NULLPTR));
        toolButtonAdd->setText(QApplication::translate("DialogMagasinier", "Add", Q_NULLPTR));
        toolButtonEdit->setText(QApplication::translate("DialogMagasinier", "Edit", Q_NULLPTR));
        toolButtonCancel->setText(QApplication::translate("DialogMagasinier", "Cancel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabManageStock), QApplication::translate("DialogMagasinier", "Manage stock", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetRepairsList->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogMagasinier", "Repair number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetRepairsList->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogMagasinier", "Begin date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetRepairsList->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogMagasinier", "End date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetRepairsList->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("DialogMagasinier", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetRepairsList->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("DialogMagasinier", "Customer name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetRepairsList->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("DialogMagasinier", "Repairer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetRepairsList->horizontalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("DialogMagasinier", "Vehicle brand", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetRepairsList->horizontalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("DialogMagasinier", "Vehicle model", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetRepairsList->horizontalHeaderItem(8);
        ___qtablewidgetitem13->setText(QApplication::translate("DialogMagasinier", "Vehicle number plate", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetRepairsList->horizontalHeaderItem(9);
        ___qtablewidgetitem14->setText(QApplication::translate("DialogMagasinier", "Duration (hours)", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogMagasinier", "Parts used for the repair number ", Q_NULLPTR));
        labelRepairNumber->setText(QApplication::translate("DialogMagasinier", "#", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetPartsUsed->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("DialogMagasinier", "Ref. number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetPartsUsed->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("DialogMagasinier", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetPartsUsed->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("DialogMagasinier", "Quantity used", Q_NULLPTR));
        labelRepairAddPArt->setText(QApplication::translate("DialogMagasinier", "Add a part", Q_NULLPTR));
        labelRefList->setText(QApplication::translate("DialogMagasinier", "Reference number :", Q_NULLPTR));
        labelQteList->setText(QApplication::translate("DialogMagasinier", "Quantity :", Q_NULLPTR));
        toolButtonAddToRepair->setText(QApplication::translate("DialogMagasinier", "Add", Q_NULLPTR));
        toolButtonEditToRepair->setText(QApplication::translate("DialogMagasinier", "Edit", Q_NULLPTR));
        toolButtonRemoveToRepair->setText(QApplication::translate("DialogMagasinier", "Remove", Q_NULLPTR));
        toolButtonCancelToRepair->setText(QApplication::translate("DialogMagasinier", "Cancel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabRepairsList), QApplication::translate("DialogMagasinier", "Repairs list", Q_NULLPTR));
        label->setText(QApplication::translate("DialogMagasinier", "Filter results", Q_NULLPTR));
        labelRefMatch->setText(QApplication::translate("DialogMagasinier", "Ref. number :", Q_NULLPTR));
        pushButton->setText(QString());
        labelSupplierMatch->setText(QApplication::translate("DialogMagasinier", "Supplier :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetRefMatching->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("DialogMagasinier", "Internal ref. number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetRefMatching->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QApplication::translate("DialogMagasinier", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetRefMatching->horizontalHeaderItem(2);
        ___qtablewidgetitem20->setText(QApplication::translate("DialogMagasinier", "Supplier name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidgetRefMatching->horizontalHeaderItem(3);
        ___qtablewidgetitem21->setText(QApplication::translate("DialogMagasinier", "Supplier ref. number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidgetRefMatching->horizontalHeaderItem(4);
        ___qtablewidgetitem22->setText(QApplication::translate("DialogMagasinier", "Supplier phone number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidgetRefMatching->horizontalHeaderItem(5);
        ___qtablewidgetitem23->setText(QApplication::translate("DialogMagasinier", "Supplier e-mail address", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabRefMatching), QApplication::translate("DialogMagasinier", "References matching", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogMagasinier: public Ui_DialogMagasinier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAGASINIER_H
