#include "personalfinancesystem.h"
#include "ui_personalfinancesystem.h"

PersonalFinanceSystem::PersonalFinanceSystem(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PersonalFinanceSystem)
{
    ui->setupUi(this);
}

PersonalFinanceSystem::~PersonalFinanceSystem()
{
    delete ui;
}

