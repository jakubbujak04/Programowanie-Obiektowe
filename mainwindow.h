#include "calc.h"

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_add_clicked();

    void on_min_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_mod_clicked();

    void on_information_triggered();

    void on_author_triggered();

    void on_close_triggered();

    void on_equal_clicked();

    void on_clear_screen_triggered();

    void on_clear_memory_triggered();

    void on_get_memory_triggered();

private:
    Ui::MainWindow *ui;
    Calculator calc;
};
#endif // MAINWINDOW_H
