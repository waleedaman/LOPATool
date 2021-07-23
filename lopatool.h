#ifndef LOPATOOL_H
#define LOPATOOL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LOPATool; }
QT_END_NAMESPACE

class LOPATool : public QMainWindow
{
    Q_OBJECT

public:
    LOPATool(QWidget *parent = nullptr);
    ~LOPATool();

private:
    Ui::LOPATool *ui;
};
#endif // LOPATOOL_H
