#ifndef RISKGUI_H
#define RISKGUI_H

#include <QMainWindow>

namespace Ui {
class RiskGUI;
}

class RiskGUI : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit RiskGUI(QWidget *parent = 0);
    ~RiskGUI();
    
private:
    Ui::RiskGUI *ui;
};

#endif // RISKGUI_H
