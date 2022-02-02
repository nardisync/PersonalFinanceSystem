#ifndef PERSONALFINANCESYSTEM_H
#define PERSONALFINANCESYSTEM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PersonalFinanceSystem; }
QT_END_NAMESPACE

class PersonalFinanceSystem : public QMainWindow
{
    Q_OBJECT

public:
    PersonalFinanceSystem(QWidget *parent = nullptr);
    ~PersonalFinanceSystem();

private:
    Ui::PersonalFinanceSystem *ui;
};
#endif // PERSONALFINANCESYSTEM_H
