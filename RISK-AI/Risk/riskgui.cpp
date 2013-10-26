#include "riskgui.h"
#include "ui_riskgui.h"

RiskGUI::RiskGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RiskGUI)
{
    ui->setupUi(this);
}

RiskGUI::~RiskGUI()
{
    delete ui;
}
