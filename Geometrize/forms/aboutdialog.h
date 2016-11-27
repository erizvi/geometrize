#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

namespace Ui {
class AboutDialog;
}

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent = 0);
    ~AboutDialog();

public slots:
    void on_closeButton_released();

    void on_licenseButton_released();

    void on_creditsButton_released();

private:
    Ui::AboutDialog *ui;
};

#endif // ABOUTDIALOG_H
