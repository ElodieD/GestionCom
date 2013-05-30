#ifndef DIALOGCLIENT_H
#define DIALOGCLIENT_H

#include <QDialog>

namespace Ui {
    class DialogClient;
}

class DialogClient : public QDialog {
    Q_OBJECT
public:
    DialogClient(QWidget *parent = 0);
    ~DialogClient();
    Ui::DialogClient *ui;

protected:
    void changeEvent(QEvent *e);

private:
   // Ui::DialogClient *ui;
};

#endif // DIALOGCLIENT_H
