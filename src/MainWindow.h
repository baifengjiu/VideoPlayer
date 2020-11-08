
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow:public QMainWindow
{

public:
    MainWindow();
    ~MainWindow();

private:
    Ui::MainWindow* ui;

};

