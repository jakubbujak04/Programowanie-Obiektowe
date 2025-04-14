#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Wprowadzenie danych do programu

void MainWindow::on_button1_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button1->text());
}

void MainWindow::on_button2_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button2->text());
}

void MainWindow::on_button3_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button3->text());
}

void MainWindow::on_button4_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button4->text());
}

void MainWindow::on_button5_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button5->text());
}

void MainWindow::on_button6_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button6->text());
}

void MainWindow::on_button7_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button7->text());
}

void MainWindow::on_button8_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button8->text());
}

void MainWindow::on_button9_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button9->text());
}

void MainWindow::on_button0_clicked()
{
    ui->text_window->setText(ui->text_window->text() + ui->button0->text());
}

//Operacje dodawanie/odejmowanie itp

void MainWindow::on_add_clicked()
{
    calc.arg1 = (ui->text_window->text().toInt());
    ui->op_memory->setText(ui->text_window->text());
    ui->text_window->setText("");
    ui->text_window->setText(ui->text_window->text() + ui->add->text());
    calc.op = (ui->add->text().at(0).toLatin1());
    ui->op_memory->setText(ui->op_memory->text() + ui->add->text());
    ui->text_window->setText("");

}

void MainWindow::on_min_clicked()
{
    calc.arg1 = (ui->text_window->text().toInt());
    ui->op_memory->setText(ui->text_window->text());
    ui->text_window->setText("");
    ui->text_window->setText(ui->text_window->text() + ui->min->text());
    calc.op = (ui->min->text().at(0).toLatin1());
    ui->op_memory->setText(ui->op_memory->text() + ui->min->text());
    ui->text_window->setText("");
}

void MainWindow::on_mul_clicked()
{
    calc.arg1 = (ui->text_window->text().toInt());
    ui->op_memory->setText(ui->text_window->text());
    ui->text_window->setText("");
    ui->text_window->setText(ui->text_window->text() + ui->mul->text());
    calc.op = (ui->mul->text().at(0).toLatin1());
    ui->op_memory->setText(ui->op_memory->text() + ui->mul->text());
    ui->text_window->setText("");
}

void MainWindow::on_div_clicked()
{
    calc.arg1 = (ui->text_window->text().toInt());
    ui->op_memory->setText(ui->text_window->text());
    ui->text_window->setText("");
    ui->text_window->setText(ui->text_window->text() + ui->div->text());
    calc.op = (ui->div->text().at(0).toLatin1());
    ui->op_memory->setText(ui->op_memory->text() + ui->div->text());
    ui->text_window->setText("");
}

void MainWindow::on_mod_clicked()
{
    calc.arg1 = (ui->text_window->text().toInt());
    ui->op_memory->setText(ui->text_window->text());
    ui->text_window->setText("");
    ui->text_window->setText(ui->text_window->text() + ui->mod->text());
    calc.op = (ui->mod->text().at(0).toLatin1());
    ui->op_memory->setText(ui->op_memory->text() + ui->mod->text());
    ui->text_window->setText("");
}

void MainWindow::on_equal_clicked()
{
    calc.arg2 = (ui->text_window->text().toDouble());
    ui->op_memory->setText(ui->op_memory->text() + ui->text_window->text());

    if(calc.op == '/' and calc.arg2 == 0){
        QMessageBox::information(this, "Błąd", "Nie można dzielić przez 0!");
        ui->text_window->setText("");
    }
    if(calc.op == '%' and calc.arg2 ==0){
        QMessageBox::information(this, "Błąd", "Nie można wykonać reszty z dzielenia przez 0!");
        ui->text_window->setText("");
    }
    calc.get_result();
    ui->text_window->setText(QString::number(calc.result));
}

//Menu, opcje, informacje

void MainWindow::on_information_triggered()
{
    QMessageBox::information(this, "Informacje","Projekt prostego kalkulatora. \n Dostepne operacje: \n 1) Dodawanie \n 2) Odejmowanie \n 3) Mnozenie \n 4) Dzielenie \n 5) Reszta z dzielenia (modulo)");
}

void MainWindow::on_author_triggered()
{
    QMessageBox::information(this, "Autor","Prosty kalkulator \n Autor: Jakub Bujak \n Numer indeksu: 277799");
}

void MainWindow::on_close_triggered()
{
    close();
}

void MainWindow::on_clear_screen_triggered()
{
    ui->text_window->setText("");
}

void MainWindow::on_clear_memory_triggered()
{
    calc.erase();
    ui->text_window->setText("");
}


void MainWindow::on_get_memory_triggered()
{
    calc.get_memory();
    ui->text_window->setText(QString::number(calc.memory_show));
}
