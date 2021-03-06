#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <qstring.h>
#include <stdio.h>

float TIMECOUNTER = 2.0;
float timeCounter = TIMECOUNTER;
int isPressed = 0; // button hop le duoc danh so tu 1 den 18
int isButton = 0; // button hop le duoc danh so tu 1 den 18
float gaze_x = 0.0;
float gaze_y = 0.0;

QString button_hover = "QPushButton{ \
                            Font: 40pt;\
                            background-color:rgb(230, 247, 255); \
                            border: 1px solid rgb(0, 0, 255) \
                        }";
QString button_default = "QPushButton{\
                            Font: 40pt;\
                        }";

QString button_isPressed = "QPushButton{ \
                            Font: 40pt;\
                            background-color: rgb(174, 229, 255); \
                            border: 1px solid rgb(0, 0, 255) \
                        }";

void setInitParameters() {
    timeCounter = TIMECOUNTER;
    isPressed = 0;
    isButton = 0;
}

void gaze_point_callback(tobii_gaze_point_t const* gaze_point, void* user_data) {
    if (gaze_point->validity == TOBII_VALIDITY_VALID) {

        // init gaze_point
        if (gaze_x == 0.0 && gaze_y == 0) {
            gaze_x = gaze_point->position_xy[0];
            gaze_y = gaze_point->position_xy[1];
            setInitParameters();
        }
        else {
            gaze_x = gaze_point->position_xy[0];
            gaze_y = gaze_point->position_xy[1];

            // dong 1
            if (gaze_y > 0 && gaze_y < 0.25) {
                // label
                if (gaze_x > 0 && gaze_x < 0.4) {
                    setInitParameters();
                }
                // button_17
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 17) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 17;
                        timeCounter = TIMECOUNTER;
                    }
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_16
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 16) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 16;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button _18
                else if (gaze_x > 0.8 && gaze_x < 1) {
                    if (isButton == 18) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 18;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 2
            else if (gaze_y > 0.25 && gaze_y < 0.5) {
                // button_1
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 1) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 1;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_2
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 2) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 2;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_3
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 3) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 3;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_4
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 4) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 4;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_5
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 5) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 5;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 3
            else if (gaze_y > 0.5 && gaze_y < 0.75) {
                // button_6
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 6) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 6;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_7
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 7) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 7;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_8
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 8) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 8;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_9
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 9) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 9;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_10
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 10) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 10;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 4
            else if (gaze_y > 0.75 && gaze_y < 1.0) {
                // button_11
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 11) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 11;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_12
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 12) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 12;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_13
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 13) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 13;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_14
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 14) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 14;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_15
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 15) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 15;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }
        }
    }
    else {
        gaze_x = 0;
        gaze_y = 0;
    }
}

void cursor_position(float x, float y) {
    if (x >= 0 && x <= 1 && y >= 0 && y <= 1) {
        // init gaze_point
        if (gaze_x == 0.0 && gaze_y == 0) {
            gaze_x = x;
            gaze_y = y;
            setInitParameters();
        }
        else {
            gaze_x = x;
            gaze_y = y;

            // dong 1
            if (gaze_y > 0 && gaze_y < 0.25) {
                // label
                if (gaze_x > 0 && gaze_x < 0.4) {
                    setInitParameters();
                }
                // button_17
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 17) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 17;
                        timeCounter = TIMECOUNTER;
                    }
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_16
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 16) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 16;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button _18
                else if (gaze_x > 0.8 && gaze_x < 1) {
                    if (isButton == 18) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 18;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 2
            else if (gaze_y > 0.25 && gaze_y < 0.5) {
                // button_1
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 1) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 1;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_2
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 2) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 2;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_3
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 3) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 3;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_4
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 4) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 4;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_5
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 5) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 5;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 3
            else if (gaze_y > 0.5 && gaze_y < 0.75) {
                // button_6
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 6) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 6;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_7
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 7) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 7;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_8
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 8) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 8;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_9
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 9) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 9;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_10
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 10) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 10;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 4
            else if (gaze_y > 0.75 && gaze_y < 1.0) {
                // button_11
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 11) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 11;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_12
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 12) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 12;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_13
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 13) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 13;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_14
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 14) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 14;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_15
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 15) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 15;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }
        }
    }
    else {
        gaze_x = 0;
        gaze_y = 0;
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText(" ");
    ui->label->setStyleSheet("QLabel{Font: 40pt}");
    ui->pushButton->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_2->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_3->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_4->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_5->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_6->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_7->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_8->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_9->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_10->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_11->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_12->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_13->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_14->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_15->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_16->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_17->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_18->setStyleSheet("QPushButton{Font: 40pt}");

    if (error == TOBII_ERROR_NO_ERROR) {
        error = tobii_gaze_point_subscribe(device, gaze_point_callback, 0);
        if (error != TOBII_ERROR_NO_ERROR) {
            qDebug() << tobii_error_message(error) << "\n";
        }
        timer = new QTimer(this);
        QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update()));
        timer->start(100);
    }
    else {
        QMessageBox::information(this, "Device not found", "B???n ??ang ??? ch??? ????? d??ng chu???t, ????? d??ng thi???t b???, vui l??ng c???m thi???t b??? v??o sau ???? b???t l???i ???ng d???ng", QMessageBox::Ok);
        timer = new QTimer(this);
        QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update_cursor_tracking()));
        timer->start(100);
    } 
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_cursor_tracking() {
    ui->label->setFixedWidth((int)(0.3925 * this->size().width()));
    
    QPoint point = QCursor::pos();
    float x = (float)this->mapFromGlobal(point).x() / this->size().width();
    float y = (float)this->mapFromGlobal(point).y() / this->size().height();
    cursor_position(x, y);
    
    //ui->label->setText(QString::number(timeCounter));
    if (isPressed == 1) {
        switch (isButton)
        {
        case 1:
            ui->pushButton->pressed();
            break;
        case 2:
            ui->pushButton_2->pressed();
            break;
        case 3:
            ui->pushButton_3->pressed();
            break;
        case 4:
            ui->pushButton_4->pressed();
            break;
        case 5:
            ui->pushButton_5->pressed();
            break;
        case 6:
            ui->pushButton_6->pressed();
            break;
        case 7:
            ui->pushButton_7->pressed();
            break;
        case 8:
            ui->pushButton_8->pressed();
            break;
        case 9:
            ui->pushButton_9->pressed();
            break;
        case 10:
            ui->pushButton_10->pressed();
            break;
        case 11:
            ui->pushButton_11->pressed();
            break;
        case 12:
            ui->pushButton_12->pressed();
            break;
        case 13:
            ui->pushButton_13->pressed();
            break;
        case 14:
            ui->pushButton_14->pressed();
            break;
        case 15:
            ui->pushButton_15->pressed();
            break;
        case 16:
            ui->pushButton_16->pressed();
            break;
        case 17:
            ui->pushButton_17->pressed();
            break;
        case 18:
            ui->pushButton_18->pressed();
            break;
        default:
            break;
        }
        setInitParameters();
    }

}

void MainWindow::update() {
    ui->label->setFixedWidth((int)(0.3925 * this->size().width()));
    
    // Optionally block this thread until data is available. Especially useful if running in a separate thread.
    error = tobii_wait_for_callbacks(1, &device);
    assert(error == TOBII_ERROR_NO_ERROR || error == TOBII_ERROR_TIMED_OUT);

    // Process callbacks on this thread if data is available
    error = tobii_device_process_callbacks(device);
    assert(error == TOBII_ERROR_NO_ERROR);

    //QString text = "isButton: " + QString::number(isButton) + "\n" + "isPressed: " + QString::number(isPressed);
    //ui->label->setText(text);

    // check nut nao duoc nhin
    switch (isButton)
    {
    case 0:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
    case 1:
        ui->pushButton->setStyleSheet(button_hover);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 2:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_hover);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 3:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_hover);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 4:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_hover);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 5:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_hover);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 6:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_hover);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 7:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_hover);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 8:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_hover);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 9:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_hover);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 10:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_hover);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 11:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_hover);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 12:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_hover);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 13:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_hover);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 14:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_hover);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 15:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_hover);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 16:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_hover);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 17:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_hover);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 18:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_hover);
        break;
    default:
        break;
    }

    // check nut nao duoc nhan
    if (isPressed == 1) {
        switch (isButton)
        {
        case 1:
            if (ui->pushButton->text() != "") {
                ui->pushButton->pressed();
            }
            break;
        case 2:
            if (ui->pushButton_2->text() != "") {
                ui->pushButton_2->pressed();
            }
            break;
        case 3:
            if (ui->pushButton_3->text() != "") {
                ui->pushButton_3->pressed();
            }
            break;
        case 4:
            if (ui->pushButton_4->text() != "") {
                ui->pushButton_4->pressed();
            }
            break;
        case 5:
            if (ui->pushButton_5->text() != "") {
                ui->pushButton_5->pressed();
            }
            break;
        case 6:
            if (ui->pushButton_6->text() != "") {
                ui->pushButton_6->pressed();
            }
            break;
        case 7:
            if (ui->pushButton_7->text() != "") {
                ui->pushButton_7->pressed();
            }
            break;
        case 8:
            if (ui->pushButton_8->text() != "") {
                ui->pushButton_8->pressed();
            }
            break;
        case 9:
            if (ui->pushButton_9->text() != "") {
                ui->pushButton_9->pressed();
            }
            break;
        case 10:
            if (ui->pushButton_10->text() != "") {
                ui->pushButton_10->pressed();
            }
            break;
        case 11:
            if (ui->pushButton_11->text() != "") {
                ui->pushButton_11->pressed();
            }
            break;
        case 12:
            if (ui->pushButton_12->text() != "") {
                ui->pushButton_12->pressed();
            }
            break;
        case 13:
            if (ui->pushButton_13->text() != "") {
                ui->pushButton_13->pressed();
            }
            break;
        case 14:
            if (ui->pushButton_14->text() != "") {
                ui->pushButton_14->pressed();
            }
            break;
        case 15:
            if (ui->pushButton_15->text() != "") {
                ui->pushButton_15->pressed();
            }
            break;
        case 16:
            if (ui->pushButton_16->text() != "") {
                ui->pushButton_16->pressed();
            }
            break;
        case 17:
            if (ui->pushButton_17->text() != "") {
                ui->pushButton_17->pressed();
            }
            break;
        case 18:
            if (ui->pushButton_18->text() != "") {
                ui->pushButton_18->pressed();
            }
            break;
        default:
            break;
        }
        setInitParameters();
    }
}

void MainWindow::addTo_Stack() {
    QVector<QString> vector;
    // label
    vector.push_back(comPress + " " + currentPress);
    // button 1 - 9 9- 15
    vector.push_back(ui->pushButton->text());
    vector.push_back(ui->pushButton_2->text());
    vector.push_back(ui->pushButton_3->text());
    vector.push_back(ui->pushButton_4->text());
    vector.push_back(ui->pushButton_5->text());
    vector.push_back(ui->pushButton_6->text());
    vector.push_back(ui->pushButton_7->text());
    vector.push_back(ui->pushButton_8->text());
    vector.push_back(ui->pushButton_9->text());
    vector.push_back(ui->pushButton_11->text());
    vector.push_back(ui->pushButton_12->text());
    vector.push_back(ui->pushButton_13->text());
    vector.push_back(ui->pushButton_14->text());
    vector.push_back(ui->pushButton_15->text());

    // add to stack
    stack.push(vector);
}

void MainWindow::on_pushButton_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        QString mystring = comPress + " " + currentPress;
        QString subString = mystring;
        /*if (mystring.size() > 15) {
            subString = mystring.mid(mystring.size() - 15, 15);

        }*/
        ui->label->setText(subString);
    }
    if (currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("b??");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("b??");
        ui->pushButton_5->setText("b??");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("b??");
        ui->pushButton_8->setText("b??");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??c") {

        ui->pushButton->setText("b???c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??ng") {

        ui->pushButton->setText("b???ng");
        ui->pushButton_2->setText("b???ng");
        ui->pushButton_3->setText("b???ng");
        ui->pushButton_4->setText("b???ng");
        ui->pushButton_5->setText("b???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b????c") {

        ui->pushButton->setText("b?????c");
        ui->pushButton_2->setText("b?????c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b????ng") {

        ui->pushButton->setText("b?????ng");
        ui->pushButton_2->setText("b?????ng");
        ui->pushButton_3->setText("b?????ng");
        ui->pushButton_4->setText("b?????ng");
        ui->pushButton_5->setText("b?????ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bac") {

        ui->pushButton->setText("bach");
        ui->pushButton_2->setText("b??c");
        ui->pushButton_3->setText("b???c");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bach") {

        ui->pushButton->setText("b??ch");
        ui->pushButton_2->setText("b???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bang") {

        ui->pushButton->setText("b???ng");
        ui->pushButton_2->setText("b??ng");
        ui->pushButton_3->setText("b??ng");
        ui->pushButton_4->setText("b???ng");
        ui->pushButton_5->setText("b??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??c") {

        ui->pushButton->setText("b???c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??ng") {

        ui->pushButton->setText("b???ng");
        ui->pushButton_2->setText("b???ng");
        ui->pushButton_3->setText("b???ng");
        ui->pushButton_4->setText("b???ng");
        ui->pushButton_5->setText("b???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??c") {

        ui->pushButton->setText("b???c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??ng") {

        ui->pushButton->setText("b???ng");
        ui->pushButton_2->setText("b???ng");
        ui->pushButton_3->setText("b???ng");
        ui->pushButton_4->setText("b???ng");
        ui->pushButton_5->setText("b???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "boc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bong") {

        ui->pushButton->setText("b???ng");
        ui->pushButton_2->setText("b??ng");
        ui->pushButton_3->setText("b??ng");
        ui->pushButton_4->setText("b???ng");
        ui->pushButton_5->setText("b??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??c") {

        ui->pushButton->setText("b???c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??ng") {

        ui->pushButton->setText("b???ng");
        ui->pushButton_2->setText("b???ng");
        ui->pushButton_3->setText("b???ng");
        ui->pushButton_4->setText("b???ng");
        ui->pushButton_5->setText("b???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??t") {

        ui->pushButton->setText("b???t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bic") {

        ui->pushButton->setText("bich");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bich") {

        ui->pushButton->setText("b??ch");
        ui->pushButton_2->setText("b???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "binh") {

        ui->pushButton->setText("b???nh");
        ui->pushButton_2->setText("b??nh");
        ui->pushButton_3->setText("b??nh");
        ui->pushButton_4->setText("b???nh");
        ui->pushButton_5->setText("b??nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bi??c") {

        ui->pushButton->setText("bi???c");
        ui->pushButton_2->setText("bi???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bi??ng") {

        ui->pushButton->setText("bi???ng");
        ui->pushButton_2->setText("bi???ng");
        ui->pushButton_3->setText("bi???ng");
        ui->pushButton_4->setText("bi???ng");
        ui->pushButton_5->setText("bi???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bet") {

        ui->pushButton->setText("b??t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "beng") {

        ui->pushButton->setText("b???ng");
        ui->pushButton_2->setText("b??ng");
        ui->pushButton_3->setText("b??ng");
        ui->pushButton_4->setText("b???ng");
        ui->pushButton_5->setText("b???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??c") {

        ui->pushButton->setText("b??ch");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??ch") {

        ui->pushButton->setText("b???ch");
        ui->pushButton_2->setText("b???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??nh") {

        ui->pushButton->setText("b???nh");
        ui->pushButton_2->setText("b???nh");
        ui->pushButton_3->setText("b???nh");
        ui->pushButton_4->setText("b???nh");
        ui->pushButton_5->setText("b???nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch") {

        ui->pushButton->setText("chu");
        ui->pushButton_2->setText("ch??");
        ui->pushButton_3->setText("cha");
        ui->pushButton_4->setText("ch??");
        ui->pushButton_5->setText("ch??");

        ui->pushButton_6->setText("cho");
        ui->pushButton_7->setText("ch??");
        ui->pushButton_8->setText("ch??");
        ui->pushButton_9->setText("chi");

        ui->pushButton_11->setText("che");
        ui->pushButton_12->setText("ch??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu") {

        ui->pushButton->setText("chuc");
        ui->pushButton_2->setText("chut");
        ui->pushButton_3->setText("chum");
        ui->pushButton_4->setText("chun");
        ui->pushButton_5->setText("chup");

        ui->pushButton_6->setText("chua");
        ui->pushButton_7->setText("chu??");
        ui->pushButton_8->setText("chuy");
        ui->pushButton_9->setText("chu??");

        ui->pushButton_11->setText("chui");
        ui->pushButton_12->setText("ch???");
        ui->pushButton_13->setText("ch??");
        ui->pushButton_14->setText("ch??");
        ui->pushButton_15->setText("ch???");
    }
    else if (currentPress == "chuc") {

        ui->pushButton->setText("ch??c");
        ui->pushButton_2->setText("ch???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chung") {

        ui->pushButton->setText("ch???ng");
        ui->pushButton_2->setText("ch??ng");
        ui->pushButton_3->setText("ch??ng");
        ui->pushButton_4->setText("ch???ng");
        ui->pushButton_5->setText("ch??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu??n") {

        ui->pushButton->setText("chu???n");
        ui->pushButton_2->setText("chu???n");
        ui->pushButton_3->setText("chu???n");
        ui->pushButton_4->setText("chu???n");
        ui->pushButton_5->setText("chu???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuy??") {

        ui->pushButton->setText("chuy??n");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuy??n") {

        ui->pushButton->setText("chuy???n");
        ui->pushButton_2->setText("chuy???n");
        ui->pushButton_3->setText("chuy???n");
        ui->pushButton_4->setText("chuy???n");
        ui->pushButton_5->setText("chuy???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu??c") {

        ui->pushButton->setText("chu???c");
        ui->pushButton_2->setText("chu???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu??ng") {

        ui->pushButton->setText("chu???ng");
        ui->pushButton_2->setText("chu???ng");
        ui->pushButton_3->setText("chu???ng");
        ui->pushButton_4->setText("chu???ng");
        ui->pushButton_5->setText("chu???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??c") {

        ui->pushButton->setText("ch???c");
        ui->pushButton_2->setText("ch???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??ng") {

        ui->pushButton->setText("ch???ng");
        ui->pushButton_2->setText("ch???ng");
        ui->pushButton_3->setText("ch???ng");
        ui->pushButton_4->setText("ch???ng");
        ui->pushButton_5->setText("ch???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch????c") {

        ui->pushButton->setText("ch?????c");
        ui->pushButton_2->setText("ch?????c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch????ng") {

        ui->pushButton->setText("ch?????ng");
        ui->pushButton_2->setText("ch?????ng");
        ui->pushButton_3->setText("ch?????ng");
        ui->pushButton_4->setText("ch?????ng");
        ui->pushButton_5->setText("ch?????ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chac") {

        ui->pushButton->setText("chach");
        ui->pushButton_2->setText("ch??c");
        ui->pushButton_3->setText("ch???c");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chach") {

        ui->pushButton->setText("ch??ch");
        ui->pushButton_2->setText("ch???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chang") {

        ui->pushButton->setText("ch???ng");
        ui->pushButton_2->setText("ch??ng");
        ui->pushButton_3->setText("ch??ng");
        ui->pushButton_4->setText("ch???ng");
        ui->pushButton_5->setText("ch??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??c") {

        ui->pushButton->setText("ch???c");
        ui->pushButton_2->setText("ch???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??ng") {

        ui->pushButton->setText("ch???ng");
        ui->pushButton_2->setText("ch???ng");
        ui->pushButton_3->setText("ch???ng");
        ui->pushButton_4->setText("ch???ng");
        ui->pushButton_5->setText("ch???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??t") {

        ui->pushButton->setText("ch???t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choc") {

        ui->pushButton->setText("ch??c");
        ui->pushButton_2->setText("ch???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chong") {

        ui->pushButton->setText("ch???ng");
        ui->pushButton_2->setText("ch??ng");
        ui->pushButton_3->setText("ch??ng");
        ui->pushButton_4->setText("ch???ng");
        ui->pushButton_5->setText("ch??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choac") {

        ui->pushButton->setText("cho??c");
        ui->pushButton_2->setText("cho???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choan") {

        ui->pushButton->setText("choang");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choang") {

        ui->pushButton->setText("cho??ng");
        ui->pushButton_2->setText("cho??ng");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cho??t") {

        ui->pushButton->setText("cho???t");
        ui->pushButton_2->setText("cho???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choet") {

        ui->pushButton->setText("cho??t");
        ui->pushButton_2->setText("cho???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??c") {

        ui->pushButton->setText("ch???c");
        ui->pushButton_2->setText("ch???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??ng") {

        ui->pushButton->setText("ch???ng");
        ui->pushButton_2->setText("ch???ng");
        ui->pushButton_3->setText("ch???ng");
        ui->pushButton_4->setText("ch???ng");
        ui->pushButton_5->setText("ch???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch???t") {

        ui->pushButton->setText("ch???t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chic") {

        ui->pushButton->setText("chich");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chich") {

        ui->pushButton->setText("ch??ch");
        ui->pushButton_2->setText("ch???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chinh") {

        ui->pushButton->setText("ch???nh");
        ui->pushButton_2->setText("ch??nh");
        ui->pushButton_3->setText("ch??nh");
        ui->pushButton_4->setText("ch???nh");
        ui->pushButton_5->setText("ch??nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??t") {

        ui->pushButton->setText("ch???t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi??c") {

        ui->pushButton->setText("chi???c");
        ui->pushButton_2->setText("chi???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi??ng") {

        ui->pushButton->setText("chi???ng");
        ui->pushButton_2->setText("chi???ng");
        ui->pushButton_3->setText("chi???ng");
        ui->pushButton_4->setText("chi???ng");
        ui->pushButton_5->setText("chi???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chet") {

        ui->pushButton->setText("ch??t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cheng") {

        ui->pushButton->setText("ch???ng");
        ui->pushButton_2->setText("ch??ng");
        ui->pushButton_3->setText("ch??ng");
        ui->pushButton_4->setText("ch???ng");
        ui->pushButton_5->setText("ch???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??c") {

        ui->pushButton->setText("ch??ch");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??ch") {

        ui->pushButton->setText("ch???ch");
        ui->pushButton_2->setText("ch???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??nh") {

        ui->pushButton->setText("ch???nh");
        ui->pushButton_2->setText("ch???nh");
        ui->pushButton_3->setText("ch???nh");
        ui->pushButton_4->setText("ch???nh");
        ui->pushButton_5->setText("ch???nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cuc") {

        ui->pushButton->setText("c??c");
        ui->pushButton_2->setText("c???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cung") {

        ui->pushButton->setText("c???ng");
        ui->pushButton_2->setText("c??ng");
        ui->pushButton_3->setText("c??ng");
        ui->pushButton_4->setText("c???ng");
        ui->pushButton_5->setText("c??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cu??c") {

        ui->pushButton->setText("cu???c");
        ui->pushButton_2->setText("cu???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cu??ng") {

        ui->pushButton->setText("cu???ng");
        ui->pushButton_2->setText("cu???ng");
        ui->pushButton_3->setText("cu???ng");
        ui->pushButton_4->setText("cu???ng");
        ui->pushButton_5->setText("cu???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??c") {

        ui->pushButton->setText("c???c");
        ui->pushButton_2->setText("c???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??ng") {

        ui->pushButton->setText("c???ng");
        ui->pushButton_2->setText("c???ng");
        ui->pushButton_3->setText("c???ng");
        ui->pushButton_4->setText("c???ng");
        ui->pushButton_5->setText("c???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c?????c") {

        ui->pushButton->setText("c?????c");
        ui->pushButton_2->setText("c?????c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c????ng") {

        ui->pushButton->setText("c?????ng");
        ui->pushButton_2->setText("c?????ng");
        ui->pushButton_3->setText("c?????ng");
        ui->pushButton_4->setText("c?????ng");
        ui->pushButton_5->setText("c?????ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cac") {

        ui->pushButton->setText("canh");
        ui->pushButton_2->setText("c??c");
        ui->pushButton_3->setText("c???c");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cach") {

        ui->pushButton->setText("c??ch");
        ui->pushButton_2->setText("c???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cang") {

        ui->pushButton->setText("c???ng");
        ui->pushButton_2->setText("c??ng");
        ui->pushButton_3->setText("c??ng");
        ui->pushButton_4->setText("c???ng");
        ui->pushButton_5->setText("c??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??c") {

        ui->pushButton->setText("c???c");
        ui->pushButton_2->setText("c???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??ng") {

        ui->pushButton->setText("c???ng");
        ui->pushButton_2->setText("c???ng");
        ui->pushButton_3->setText("c???ng");
        ui->pushButton_4->setText("c???ng");
        ui->pushButton_5->setText("c???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??c") {

        ui->pushButton->setText("c???c");
        ui->pushButton_2->setText("c???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??ng") {

        ui->pushButton->setText("c???ng");
        ui->pushButton_2->setText("c???ng");
        ui->pushButton_3->setText("c???ng");
        ui->pushButton_4->setText("c???ng");
        ui->pushButton_5->setText("c???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "coc") {

        ui->pushButton->setText("c??c");
        ui->pushButton_2->setText("c???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cong") {

        ui->pushButton->setText("c???ng");
        ui->pushButton_2->setText("c??ng");
        ui->pushButton_3->setText("c??ng");
        ui->pushButton_4->setText("c???ng");
        ui->pushButton_5->setText("c??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??c") {

        ui->pushButton->setText("c???c");
        ui->pushButton_2->setText("c???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??ng") {

        ui->pushButton->setText("c???ng");
        ui->pushButton_2->setText("c???ng");
        ui->pushButton_3->setText("c???ng");
        ui->pushButton_4->setText("c???ng");
        ui->pushButton_5->setText("c???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "du") {

        ui->pushButton->setText("duc");
        ui->pushButton_2->setText("dut");
        ui->pushButton_3->setText("dum");
        ui->pushButton_4->setText("dun");
        ui->pushButton_5->setText("dua");

        ui->pushButton_6->setText("duy");
        ui->pushButton_7->setText("du??");
        ui->pushButton_8->setText("dui");
        ui->pushButton_9->setText("du??");

        ui->pushButton_11->setText("d???");
        ui->pushButton_12->setText("d??");
        ui->pushButton_13->setText("d??");
        ui->pushButton_14->setText("d???");
        ui->pushButton_15->setText("d??");
    }
    else if (currentPress == "duc") {

        ui->pushButton->setText("d??c");
        ui->pushButton_2->setText("d???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dung") {

        ui->pushButton->setText("d???ng");
        ui->pushButton_2->setText("d??ng");
        ui->pushButton_3->setText("d??ng");
        ui->pushButton_4->setText("d???ng");
        ui->pushButton_5->setText("d??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duy??") {

        ui->pushButton->setText("duy??t");
        ui->pushButton_2->setText("duy??n");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duy??t") {

        ui->pushButton->setText("duy???t");
        ui->pushButton_2->setText("duy???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "du??c") {

        ui->pushButton->setText("du???c");
        ui->pushButton_2->setText("du???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??c") {

        ui->pushButton->setText("d???c");
        ui->pushButton_2->setText("d???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??ng") {

        ui->pushButton->setText("d???ng");
        ui->pushButton_2->setText("d???ng");
        ui->pushButton_3->setText("d???ng");
        ui->pushButton_4->setText("d???ng");
        ui->pushButton_5->setText("d???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d????c") {

        ui->pushButton->setText("d?????c");
        ui->pushButton_2->setText("d?????c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d????ng") {

        ui->pushButton->setText("d?????ng");
        ui->pushButton_2->setText("d?????ng");
        ui->pushButton_3->setText("d?????ng");
        ui->pushButton_4->setText("d?????ng");
        ui->pushButton_5->setText("d?????ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dac") {

        ui->pushButton->setText("dach");
        ui->pushButton_2->setText("d??c");
        ui->pushButton_3->setText("d???c");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dach") {

        ui->pushButton->setText("d??ch");
        ui->pushButton_2->setText("d???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dang") {

        ui->pushButton->setText("d???ng");
        ui->pushButton_2->setText("d??ng");
        ui->pushButton_3->setText("d??ng");
        ui->pushButton_4->setText("d???ng");
        ui->pushButton_5->setText("d??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??c") {

        ui->pushButton->setText("d???c");
        ui->pushButton_2->setText("d???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??ng") {

        ui->pushButton->setText("d???ng");
        ui->pushButton_2->setText("d???ng");
        ui->pushButton_3->setText("d???ng");
        ui->pushButton_4->setText("d???ng");
        ui->pushButton_5->setText("d???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??t") {

        ui->pushButton->setText("d???t");
        ui->pushButton_2->setText("d???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??ng") {

        ui->pushButton->setText("d???ng");
        ui->pushButton_2->setText("d???ng");
        ui->pushButton_3->setText("d???ng");
        ui->pushButton_4->setText("d???ng");
        ui->pushButton_5->setText("d???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "doc") {

        ui->pushButton->setText("d??c");
        ui->pushButton_2->setText("d???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dong") {

        ui->pushButton->setText("d???ng");
        ui->pushButton_2->setText("d??ng");
        ui->pushButton_3->setText("d??ng");
        ui->pushButton_4->setText("d???ng");
        ui->pushButton_5->setText("d??ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??c") {

        ui->pushButton->setText("d???c");
        ui->pushButton_2->setText("d???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??ng") {

        ui->pushButton->setText("d???ng");
        ui->pushButton_2->setText("d???ng");
        ui->pushButton_3->setText("d???ng");
        ui->pushButton_4->setText("d???ng");
        ui->pushButton_5->setText("d???ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??n") {

        ui->pushButton->setText("d???n");
        ui->pushButton_2->setText("d???n");
        ui->pushButton_3->setText("d???n");
        ui->pushButton_4->setText("d???n");
        ui->pushButton_5->setText("d???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dic") {

        ui->pushButton->setText("dich");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dich") {

        ui->pushButton->setText("d??ch");
        ui->pushButton_2->setText("d???ch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dinh") {

        ui->pushButton->setText("d???nh");
        ui->pushButton_2->setText("d??nh");
        ui->pushButton_3->setText("d??nh");
        ui->pushButton_4->setText("d???nh");
        ui->pushButton_5->setText("d??nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "di??c") {

        ui->pushButton->setText("di???c");
        ui->pushButton_2->setText("di???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "det") {

        ui->pushButton->setText("d??t");
        ui->pushButton_2->setText("d???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??t") {

        ui->pushButton->setText("d???t");
        ui->pushButton_2->setText("d???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??nh") {

        ui->pushButton->setText("d???nh");
        ui->pushButton_2->setText("d???nh");
        ui->pushButton_3->setText("d???nh");
        ui->pushButton_4->setText("d???nh");
        ui->pushButton_5->setText("d???nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??u") {

        ui->pushButton->setText("??uc");
        ui->pushButton_2->setText("??ut");
        ui->pushButton_3->setText("??um");
        ui->pushButton_4->setText("??un");
        ui->pushButton_5->setText("??up");

        ui->pushButton_6->setText("??ua");
        ui->pushButton_7->setText("??uy");
        ui->pushButton_8->setText("??u??");
        ui->pushButton_9->setText("??ui");

        ui->pushButton_11->setText("??u??");
        ui->pushButton_12->setText("?????");
        ui->pushButton_13->setText("????");
        ui->pushButton_14->setText("????");
        ui->pushButton_15->setText("?????");
    }
    else if (currentPress == "??uc") {

        ui->pushButton->setText("????c");
        ui->pushButton_2->setText("?????c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??ung") {

        ui->pushButton->setText("?????ng");
        ui->pushButton_2->setText("????ng");
        ui->pushButton_3->setText("????ng");
        ui->pushButton_4->setText("?????ng");
        ui->pushButton_5->setText("????ng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??uya") {

        ui->pushButton->setText("??u???a");
        ui->pushButton_2->setText("??u??a");
        ui->pushButton_3->setText("??u???a");
        ui->pushButton_4->setText("??u???a");
        ui->pushButton_5->setText("??u???a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??u??c") {

        ui->pushButton->setText("??u???c");
        ui->pushButton_2->setText("??u???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_2_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_2->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "but") {
        ui->pushButton->setText("b??t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b??t");
        ui->pushButton_3->setText("b??n");
        ui->pushButton_4->setText("b??u");
        ui->pushButton_5->setText("b??a");

        ui->pushButton_6->setText("b????");
        ui->pushButton_7->setText("b???");
        ui->pushButton_8->setText("b???");
        ui->pushButton_9->setText("b???");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b???");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??t") {

        ui->pushButton->setText("b???t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b????") {

        ui->pushButton->setText("b?????");
        ui->pushButton_2->setText("b?????");
        ui->pushButton_3->setText("b?????");
        ui->pushButton_4->setText("b?????");
        ui->pushButton_5->setText("b?????");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bat") {

        ui->pushButton->setText("b??t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "banh") {

        ui->pushButton->setText("b???nh");
        ui->pushButton_2->setText("b??nh");
        ui->pushButton_3->setText("b??nh");
        ui->pushButton_4->setText("b???nh");
        ui->pushButton_5->setText("b??nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??t") {

        ui->pushButton->setText("b???t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??t") {

        ui->pushButton->setText("b???t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bot") {

        ui->pushButton->setText("b??t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??t") {

        ui->pushButton->setText("b???t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??m") {

        ui->pushButton->setText("b???m");
        ui->pushButton_2->setText("b???m");
        ui->pushButton_3->setText("b???m");
        ui->pushButton_4->setText("b???m");
        ui->pushButton_5->setText("b???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bit") {

        ui->pushButton->setText("b??t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bem") {

        ui->pushButton->setText("b???m");
        ui->pushButton_2->setText("b??m");
        ui->pushButton_3->setText("b??m");
        ui->pushButton_4->setText("b???m");
        ui->pushButton_5->setText("b???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??t") {

        ui->pushButton->setText("b???t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c") {

        ui->pushButton->setText("ch");
        ui->pushButton_2->setText("cu");
        ui->pushButton_3->setText("c??");
        ui->pushButton_4->setText("ca");
        ui->pushButton_5->setText("c??");

        ui->pushButton_6->setText("c??");
        ui->pushButton_7->setText("co");
        ui->pushButton_8->setText("c??");
        ui->pushButton_9->setText("c??");

        ui->pushButton_11->setText("ci");
        ui->pushButton_12->setText("c??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cu") {

        ui->pushButton->setText("cuc");
        ui->pushButton_2->setText("cut");
        ui->pushButton_3->setText("cum");
        ui->pushButton_4->setText("cun");
        ui->pushButton_5->setText("cup");

        ui->pushButton_6->setText("cua");
        ui->pushButton_7->setText("cu??");
        ui->pushButton_8->setText("cui");
        ui->pushButton_9->setText("c???");

        ui->pushButton_11->setText("c??");
        ui->pushButton_12->setText("c??");
        ui->pushButton_13->setText("c???");
        ui->pushButton_14->setText("c??");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cut") {

        ui->pushButton->setText("c??t");
        ui->pushButton_2->setText("c???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??") {

        ui->pushButton->setText("ch??c");
        ui->pushButton_2->setText("ch??n");
        ui->pushButton_3->setText("ch??a");
        ui->pushButton_4->setText("ch????");
        ui->pushButton_5->setText("ch??i");

        ui->pushButton_6->setText("ch???");
        ui->pushButton_7->setText("ch???");
        ui->pushButton_8->setText("ch???");
        ui->pushButton_9->setText("ch???");

        ui->pushButton_11->setText("ch???");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??n") {

        ui->pushButton->setText("ch??ng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch????n") {

        ui->pushButton->setText("ch????ng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chut") {

        ui->pushButton->setText("ch??t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu??t") {

        ui->pushButton->setText("chu???t");
        ui->pushButton_2->setText("chu???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chat") {

        ui->pushButton->setText("ch??t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chanh") {

        ui->pushButton->setText("ch???nh");
        ui->pushButton_2->setText("ch??nh");
        ui->pushButton_3->setText("ch??nh");
        ui->pushButton_4->setText("ch???nh");
        ui->pushButton_5->setText("ch??nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??t") {

        ui->pushButton->setText("ch???t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??m") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch???m");
        ui->pushButton_3->setText("ch???m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chot") {

        ui->pushButton->setText("ch??t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cho??n") {

        ui->pushButton->setText("cho???n");
        ui->pushButton_2->setText("cho???n");
        ui->pushButton_3->setText("cho???n");
        ui->pushButton_4->setText("cho???n");
        ui->pushButton_5->setText("cho???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choen") {

        ui->pushButton->setText("cho???n");
        ui->pushButton_2->setText("cho??n");
        ui->pushButton_3->setText("cho??n");
        ui->pushButton_4->setText("cho???n");
        ui->pushButton_5->setText("cho???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??t") {

        ui->pushButton->setText("ch???t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??m") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch???m");
        ui->pushButton_3->setText("ch???m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chit") {

        ui->pushButton->setText("ch??t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi??t") {

        ui->pushButton->setText("chi???t");
        ui->pushButton_2->setText("chi???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chem") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch??m");
        ui->pushButton_3->setText("ch??m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??t") {

        ui->pushButton->setText("ch???t");
        ui->pushButton_2->setText("ch???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??t") {

        ui->pushButton->setText("c???t");
        ui->pushButton_2->setText("c???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c????m") {

        ui->pushButton->setText("c?????m");
        ui->pushButton_2->setText("c?????m");
        ui->pushButton_3->setText("c?????m");
        ui->pushButton_4->setText("c?????m");
        ui->pushButton_5->setText("c?????m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cat") {

        ui->pushButton->setText("c??t");
        ui->pushButton_2->setText("c???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "canh") {

        ui->pushButton->setText("c???nh");
        ui->pushButton_2->setText("c??nh");
        ui->pushButton_3->setText("c??nh");
        ui->pushButton_4->setText("c???nh");
        ui->pushButton_5->setText("c??nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??t") {

        ui->pushButton->setText("c???t");
        ui->pushButton_2->setText("c???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??t") {

        ui->pushButton->setText("c???t");
        ui->pushButton_2->setText("c???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cot") {

        ui->pushButton->setText("c??t");
        ui->pushButton_2->setText("c???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??t") {

        ui->pushButton->setText("c???t");
        ui->pushButton_2->setText("c???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??m") {

        ui->pushButton->setText("c???m");
        ui->pushButton_2->setText("c???m");
        ui->pushButton_3->setText("c???m");
        ui->pushButton_4->setText("c???m");
        ui->pushButton_5->setText("c???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??") {

        ui->pushButton->setText("d??c");
        ui->pushButton_2->setText("d??t");
        ui->pushButton_3->setText("d??a");
        ui->pushButton_4->setText("d????");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d????t") {

        ui->pushButton->setText("d?????t");
        ui->pushButton_2->setText("d?????t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "du??i") {

        ui->pushButton->setText("du???i");
        ui->pushButton_2->setText("du???i");
        ui->pushButton_3->setText("du???i");
        ui->pushButton_4->setText("du???i");
        ui->pushButton_5->setText("du???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "danh") {

        ui->pushButton->setText("d???nh");
        ui->pushButton_2->setText("d??nh");
        ui->pushButton_3->setText("d??nh");
        ui->pushButton_4->setText("d???nh");
        ui->pushButton_5->setText("d??nh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??t") {

        ui->pushButton->setText("d???t");
        ui->pushButton_2->setText("d???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??m") {

        ui->pushButton->setText("d???m");
        ui->pushButton_2->setText("d???m");
        ui->pushButton_3->setText("d???m");
        ui->pushButton_4->setText("d???m");
        ui->pushButton_5->setText("d???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dot") {

        ui->pushButton->setText("d??t");
        ui->pushButton_2->setText("d???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??t") {

        ui->pushButton->setText("d???t");
        ui->pushButton_2->setText("d???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??p") {

        ui->pushButton->setText("d???p");
        ui->pushButton_2->setText("d???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dim") {

        ui->pushButton->setText("d???m");
        ui->pushButton_2->setText("d??m");
        ui->pushButton_3->setText("d??m");
        ui->pushButton_4->setText("d???m");
        ui->pushButton_5->setText("d??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diet") {

        ui->pushButton->setText("di???t");
        ui->pushButton_2->setText("di???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "den") {

        ui->pushButton->setText("d???n");
        ui->pushButton_2->setText("d??n");
        ui->pushButton_3->setText("d??n");
        ui->pushButton_4->setText("d???n");
        ui->pushButton_5->setText("d???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??n") {

        ui->pushButton->setText("d??nh");
        ui->pushButton_2->setText("d???n");
        ui->pushButton_3->setText("d???n");
        ui->pushButton_4->setText("d???n");
        ui->pushButton_5->setText("d???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_3_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_3->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bum") {
        ui->pushButton->setText("b???m");
        ui->pushButton_2->setText("b??m");
        ui->pushButton_3->setText("b??m");
        ui->pushButton_4->setText("b???m");
        ui->pushButton_5->setText("b??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??n") {

        ui->pushButton->setText("b??ng");
        ui->pushButton_2->setText("b???n");
        ui->pushButton_3->setText("b???n");
        ui->pushButton_4->setText("b???n");
        ui->pushButton_5->setText("b???n");

        ui->pushButton_6->setText("b???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b????n") {

        ui->pushButton->setText("b????ng");
        ui->pushButton_2->setText("b?????n");
        ui->pushButton_3->setText("b?????n");
        ui->pushButton_4->setText("b?????n");
        ui->pushButton_5->setText("b?????n");

        ui->pushButton_6->setText("b?????n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??t") {

        ui->pushButton->setText("b???t");
        ui->pushButton_2->setText("b???t");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??") {

        ui->pushButton->setText("c??c");
        ui->pushButton_2->setText("c??t");
        ui->pushButton_3->setText("c??n");
        ui->pushButton_4->setText("c??u");
        ui->pushButton_5->setText("c??a");

        ui->pushButton_6->setText("c????");
        ui->pushButton_7->setText("c??i");
        ui->pushButton_8->setText("c???");
        ui->pushButton_9->setText("c???");

        ui->pushButton_11->setText("c???");
        ui->pushButton_12->setText("c???");
        ui->pushButton_13->setText("c???");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chum") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch??m");
        ui->pushButton_3->setText("ch??m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu??m") {

        ui->pushButton->setText("chu???m");
        ui->pushButton_2->setText("chu???m");
        ui->pushButton_3->setText("chu???m");
        ui->pushButton_4->setText("chu???m");
        ui->pushButton_5->setText("chu???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cha") {

        ui->pushButton->setText("chac");
        ui->pushButton_2->setText("chat");
        ui->pushButton_3->setText("cham");
        ui->pushButton_4->setText("chan");
        ui->pushButton_5->setText("chap");

        ui->pushButton_6->setText("chau");
        ui->pushButton_7->setText("chay");
        ui->pushButton_8->setText("chao");
        ui->pushButton_9->setText("chai");

        ui->pushButton_11->setText("ch???");
        ui->pushButton_12->setText("ch??");
        ui->pushButton_13->setText("ch??");
        ui->pushButton_14->setText("ch???");
        ui->pushButton_15->setText("ch??");
    }

    else if (currentPress == "ch??a") {

        ui->pushButton->setText("ch???a");
        ui->pushButton_2->setText("ch???a");
        ui->pushButton_3->setText("ch???a");
        ui->pushButton_4->setText("ch???a");
        ui->pushButton_5->setText("ch???a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch????p") {

        ui->pushButton->setText("ch?????p");
        ui->pushButton_2->setText("ch?????p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cham") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch??m");
        ui->pushButton_3->setText("ch??m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??m") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch???m");
        ui->pushButton_3->setText("ch???m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??n") {

        ui->pushButton->setText("ch???n");
        ui->pushButton_2->setText("ch???n");
        ui->pushButton_3->setText("ch???n");
        ui->pushButton_4->setText("ch???n");
        ui->pushButton_5->setText("ch???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chom") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch??m");
        ui->pushButton_3->setText("ch??m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choai") {

        ui->pushButton->setText("cho??i");
        ui->pushButton_2->setText("cho??i");
        ui->pushButton_3->setText("cho??i");
        ui->pushButton_4->setText("cho???i");
        ui->pushButton_5->setText("cho??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??m") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch???m");
        ui->pushButton_3->setText("ch???m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??n") {

        ui->pushButton->setText("ch???n");
        ui->pushButton_2->setText("ch???n");
        ui->pushButton_3->setText("ch???n");
        ui->pushButton_4->setText("ch???n");
        ui->pushButton_5->setText("ch???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chim") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch??m");
        ui->pushButton_3->setText("ch??m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi??m") {

        ui->pushButton->setText("chi???m");
        ui->pushButton_2->setText("chi???m");
        ui->pushButton_3->setText("chi???m");
        ui->pushButton_4->setText("chi???m");
        ui->pushButton_5->setText("chi???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chen") {

        ui->pushButton->setText("cheng");
        ui->pushButton_2->setText("ch???n");
        ui->pushButton_3->setText("ch??n");
        ui->pushButton_4->setText("ch??n");
        ui->pushButton_5->setText("ch???n");

        ui->pushButton_6->setText("ch???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??m") {

        ui->pushButton->setText("ch???m");
        ui->pushButton_2->setText("ch???m");
        ui->pushButton_3->setText("ch???m");
        ui->pushButton_4->setText("ch???m");
        ui->pushButton_5->setText("ch???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cum") {

        ui->pushButton->setText("c???m");
        ui->pushButton_2->setText("c??m");
        ui->pushButton_3->setText("c??m");
        ui->pushButton_4->setText("c???m");
        ui->pushButton_5->setText("c??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cu??n") {

        ui->pushButton->setText("cu??ng");
        ui->pushButton_2->setText("cu???n");
        ui->pushButton_3->setText("cu???n");
        ui->pushButton_4->setText("cu???n");
        ui->pushButton_5->setText("cu???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??n") {

        ui->pushButton->setText("c??ng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c????n") {

        ui->pushButton->setText("c????ng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cam") {

        ui->pushButton->setText("c???m");
        ui->pushButton_2->setText("c??m");
        ui->pushButton_3->setText("c??m");
        ui->pushButton_4->setText("c???m");
        ui->pushButton_5->setText("c??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??m") {

        ui->pushButton->setText("c???m");
        ui->pushButton_2->setText("c???m");
        ui->pushButton_3->setText("c???m");
        ui->pushButton_4->setText("c???m");
        ui->pushButton_5->setText("c???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??m") {

        ui->pushButton->setText("c???m");
        ui->pushButton_2->setText("c???m");
        ui->pushButton_3->setText("c???m");
        ui->pushButton_4->setText("c???m");
        ui->pushButton_5->setText("c???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "com") {

        ui->pushButton->setText("c???m");
        ui->pushButton_2->setText("c??m");
        ui->pushButton_3->setText("c??m");
        ui->pushButton_4->setText("c???m");
        ui->pushButton_5->setText("c??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??m") {

        ui->pushButton->setText("c???m");
        ui->pushButton_2->setText("c???m");
        ui->pushButton_3->setText("c???m");
        ui->pushButton_4->setText("c???m");
        ui->pushButton_5->setText("c???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??n") {

        ui->pushButton->setText("c???n");
        ui->pushButton_2->setText("c???n");
        ui->pushButton_3->setText("c???n");
        ui->pushButton_4->setText("c???n");
        ui->pushButton_5->setText("c???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d") {

        ui->pushButton->setText("du");
        ui->pushButton_2->setText("d??");
        ui->pushButton_3->setText("da");
        ui->pushButton_4->setText("d??");
        ui->pushButton_5->setText("d??");

        ui->pushButton_6->setText("do");
        ui->pushButton_7->setText("d??");
        ui->pushButton_8->setText("d??");
        ui->pushButton_9->setText("di");

        ui->pushButton_11->setText("de");
        ui->pushButton_12->setText("d??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "da") {

        ui->pushButton->setText("dac");
        ui->pushButton_2->setText("dat");
        ui->pushButton_3->setText("dam");
        ui->pushButton_4->setText("dan");
        ui->pushButton_5->setText("dau");

        ui->pushButton_6->setText("day");
        ui->pushButton_7->setText("dao");
        ui->pushButton_8->setText("di");
        ui->pushButton_9->setText("d???");

        ui->pushButton_11->setText("d??");
        ui->pushButton_12->setText("d??");
        ui->pushButton_13->setText("d???");
        ui->pushButton_14->setText("d??");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dam") {

        ui->pushButton->setText("d???m");
        ui->pushButton_2->setText("d??m");
        ui->pushButton_3->setText("d??m");
        ui->pushButton_4->setText("d???m");
        ui->pushButton_5->setText("d??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dum") {

        ui->pushButton->setText("d???m");
        ui->pushButton_2->setText("d??m");
        ui->pushButton_3->setText("d??m");
        ui->pushButton_4->setText("d???m");
        ui->pushButton_5->setText("d??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??n") {

        ui->pushButton->setText("d??ng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d????n") {

        ui->pushButton->setText("d????ng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??m") {

        ui->pushButton->setText("d???m");
        ui->pushButton_2->setText("d???m");
        ui->pushButton_3->setText("d???m");
        ui->pushButton_4->setText("d???m");
        ui->pushButton_5->setText("d???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??n") {

        ui->pushButton->setText("d??ng");
        ui->pushButton_2->setText("d???n");
        ui->pushButton_3->setText("d???n");
        ui->pushButton_4->setText("d???n");
        ui->pushButton_5->setText("d???n");

        ui->pushButton_6->setText("d???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dom") {

        ui->pushButton->setText("d???m");
        ui->pushButton_2->setText("d??m");
        ui->pushButton_3->setText("d??m");
        ui->pushButton_4->setText("d???m");
        ui->pushButton_5->setText("d??m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??n") {

        ui->pushButton->setText("d??ng");
        ui->pushButton_2->setText("d???n");
        ui->pushButton_3->setText("d???n");
        ui->pushButton_4->setText("d???n");
        ui->pushButton_5->setText("d???n");

        ui->pushButton_6->setText("d???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??i") {

        ui->pushButton->setText("d???i");
        ui->pushButton_2->setText("d???i");
        ui->pushButton_3->setText("d???i");
        ui->pushButton_4->setText("d???i");
        ui->pushButton_5->setText("d???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "din") {

        ui->pushButton->setText("dinh");
        ui->pushButton_2->setText("d???n");
        ui->pushButton_3->setText("d??n");
        ui->pushButton_4->setText("d??n");
        ui->pushButton_5->setText("d???n");

        ui->pushButton_6->setText("d??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "di??m") {

        ui->pushButton->setText("di???m");
        ui->pushButton_2->setText("di???m");
        ui->pushButton_3->setText("di???m");
        ui->pushButton_4->setText("di???m");
        ui->pushButton_5->setText("di???m");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dep") {

        ui->pushButton->setText("d??p");
        ui->pushButton_2->setText("d???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_4_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_4->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bun") {
        ui->pushButton->setText("b???n");
        ui->pushButton_2->setText("b??n");
        ui->pushButton_3->setText("b??n");
        ui->pushButton_4->setText("b???n");
        ui->pushButton_5->setText("b??n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu??n") {

        ui->pushButton->setText("bu??ng");
        ui->pushButton_2->setText("bu???n");
        ui->pushButton_3->setText("bu???n");
        ui->pushButton_4->setText("bu???n");
        ui->pushButton_5->setText("bu???n");

        ui->pushButton_6->setText("bu???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??u") {

        ui->pushButton->setText("b???u");
        ui->pushButton_2->setText("b???u");
        ui->pushButton_3->setText("b???u");
        ui->pushButton_4->setText("b???u");
        ui->pushButton_5->setText("b???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b????p") {

        ui->pushButton->setText("b?????p");
        ui->pushButton_2->setText("b?????p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b??t");
        ui->pushButton_3->setText("b??m");
        ui->pushButton_4->setText("b??n");
        ui->pushButton_5->setText("b??p");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ban") {

        ui->pushButton->setText("bang");
        ui->pushButton_2->setText("banh");
        ui->pushButton_3->setText("b???n");
        ui->pushButton_4->setText("b??n");
        ui->pushButton_5->setText("b??n");

        ui->pushButton_6->setText("b???n");
        ui->pushButton_7->setText("b??n");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??n") {

        ui->pushButton->setText("b??ng");
        ui->pushButton_2->setText("b???n");
        ui->pushButton_3->setText("b???n");
        ui->pushButton_4->setText("b???n");
        ui->pushButton_5->setText("b???n");

        ui->pushButton_6->setText("b???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??n") {

        ui->pushButton->setText("b??ng");
        ui->pushButton_2->setText("b???n");
        ui->pushButton_3->setText("b???n");
        ui->pushButton_4->setText("b???n");
        ui->pushButton_5->setText("b???n");

        ui->pushButton_6->setText("b???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bon") {

        ui->pushButton->setText("bong");
        ui->pushButton_2->setText("b???n");
        ui->pushButton_3->setText("b??n");
        ui->pushButton_4->setText("b??n");
        ui->pushButton_5->setText("b???n");

        ui->pushButton_6->setText("b??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??n") {

        ui->pushButton->setText("b??ng");
        ui->pushButton_2->setText("b???n");
        ui->pushButton_3->setText("b???n");
        ui->pushButton_4->setText("b???n");
        ui->pushButton_5->setText("b???n");

        ui->pushButton_6->setText("b???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??p") {

        ui->pushButton->setText("b???p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bin") {

        ui->pushButton->setText("binh");
        ui->pushButton_2->setText("b???n");
        ui->pushButton_3->setText("b??n");
        ui->pushButton_4->setText("b??n");
        ui->pushButton_5->setText("b???n");

        ui->pushButton_6->setText("b??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bep") {

        ui->pushButton->setText("b??p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??p") {

        ui->pushButton->setText("b???p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ca") {

        ui->pushButton->setText("cac");
        ui->pushButton_2->setText("cat");
        ui->pushButton_3->setText("cam");
        ui->pushButton_4->setText("can");
        ui->pushButton_5->setText("cap");

        ui->pushButton_6->setText("cau");
        ui->pushButton_7->setText("cay");
        ui->pushButton_8->setText("cao");
        ui->pushButton_9->setText("cai");

        ui->pushButton_11->setText("c???");
        ui->pushButton_12->setText("c??");
        ui->pushButton_13->setText("c??");
        ui->pushButton_14->setText("c???");
        ui->pushButton_15->setText("c??");
    }
    else if (currentPress == "ch??") {

        ui->pushButton->setText("ch??c");
        ui->pushButton_2->setText("ch??t");
        ui->pushButton_3->setText("ch??m");
        ui->pushButton_4->setText("ch??n");
        ui->pushButton_5->setText("ch??p");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chun") {

        ui->pushButton->setText("chung");
        ui->pushButton_2->setText("ch???n");
        ui->pushButton_3->setText("ch??n");
        ui->pushButton_4->setText("ch??n");
        ui->pushButton_5->setText("ch???n");

        ui->pushButton_6->setText("ch??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu??n") {

        ui->pushButton->setText("chu??ng");
        ui->pushButton_2->setText("chu???n");
        ui->pushButton_3->setText("chu???n");
        ui->pushButton_4->setText("chu???n");
        ui->pushButton_5->setText("chu???n");

        ui->pushButton_6->setText("chu???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch????") {

        ui->pushButton->setText("ch????c");
        ui->pushButton_2->setText("ch????n");
        ui->pushButton_3->setText("ch????p");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chan") {

        ui->pushButton->setText("chang");
        ui->pushButton_2->setText("chanh");
        ui->pushButton_3->setText("ch???n");
        ui->pushButton_4->setText("ch??n");
        ui->pushButton_5->setText("ch??n");

        ui->pushButton_6->setText("ch???n");
        ui->pushButton_7->setText("ch??n");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??n") {

        ui->pushButton->setText("ch??ng");
        ui->pushButton_2->setText("ch???n");
        ui->pushButton_3->setText("ch???n");
        ui->pushButton_4->setText("ch???n");
        ui->pushButton_5->setText("ch???n");

        ui->pushButton_6->setText("ch???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??p") {

        ui->pushButton->setText("ch???p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chon") {

        ui->pushButton->setText("chong");
        ui->pushButton_2->setText("ch???n");
        ui->pushButton_3->setText("ch??n");
        ui->pushButton_4->setText("ch??n");
        ui->pushButton_5->setText("ch???n");

        ui->pushButton_6->setText("ch??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??n") {

        ui->pushButton->setText("ch??ng");
        ui->pushButton_2->setText("ch???n");
        ui->pushButton_3->setText("ch???n");
        ui->pushButton_4->setText("ch???n");
        ui->pushButton_5->setText("ch???n");

        ui->pushButton_6->setText("ch???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??p") {

        ui->pushButton->setText("ch???p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chin") {

        ui->pushButton->setText("chinh");
        ui->pushButton_2->setText("ch???n");
        ui->pushButton_3->setText("ch??n");
        ui->pushButton_4->setText("ch??n");
        ui->pushButton_5->setText("ch???n");

        ui->pushButton_6->setText("ch??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi??n") {

        ui->pushButton->setText("chi??ng");
        ui->pushButton_2->setText("chi???n");
        ui->pushButton_3->setText("chi???n");
        ui->pushButton_4->setText("chi???n");
        ui->pushButton_5->setText("chi???n");

        ui->pushButton_6->setText("chi???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chep") {

        ui->pushButton->setText("ch??p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??n") {

        ui->pushButton->setText("ch??nh");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cun") {

        ui->pushButton->setText("cung");
        ui->pushButton_2->setText("c???n");
        ui->pushButton_3->setText("c??n");
        ui->pushButton_4->setText("c??n");
        ui->pushButton_5->setText("c???n");

        ui->pushButton_6->setText("c??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cu??i") {

        ui->pushButton->setText("cu???i");
        ui->pushButton_2->setText("cu???i");
        ui->pushButton_3->setText("cu???i");
        ui->pushButton_4->setText("cu???i");
        ui->pushButton_5->setText("cu???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??u") {

        ui->pushButton->setText("c???u");
        ui->pushButton_2->setText("c???u");
        ui->pushButton_3->setText("c???u");
        ui->pushButton_4->setText("c???u");
        ui->pushButton_5->setText("c???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c????p") {

        ui->pushButton->setText("c?????p");
        ui->pushButton_2->setText("c?????p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "can") {

        ui->pushButton->setText("cang");
        ui->pushButton_2->setText("canh");
        ui->pushButton_3->setText("c???n");
        ui->pushButton_4->setText("c??n");
        ui->pushButton_5->setText("c??n");

        ui->pushButton_6->setText("c???n");
        ui->pushButton_7->setText("c??n");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??n") {

        ui->pushButton->setText("c??ng");
        ui->pushButton_2->setText("c???n");
        ui->pushButton_3->setText("c???n");
        ui->pushButton_4->setText("c???n");
        ui->pushButton_5->setText("c???n");

        ui->pushButton_6->setText("c???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??n") {

        ui->pushButton->setText("c??ng");
        ui->pushButton_2->setText("c???n");
        ui->pushButton_3->setText("c???n");
        ui->pushButton_4->setText("c???n");
        ui->pushButton_5->setText("c???n");

        ui->pushButton_6->setText("c???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "con") {

        ui->pushButton->setText("cong");
        ui->pushButton_2->setText("c???n");
        ui->pushButton_3->setText("c??n");
        ui->pushButton_4->setText("c??n");
        ui->pushButton_5->setText("c???n");

        ui->pushButton_6->setText("c??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??n") {

        ui->pushButton->setText("c??ng");
        ui->pushButton_2->setText("c???n");
        ui->pushButton_3->setText("c???n");
        ui->pushButton_4->setText("c???n");
        ui->pushButton_5->setText("c???n");

        ui->pushButton_6->setText("c???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??i") {

        ui->pushButton->setText("c???i");
        ui->pushButton_2->setText("c???i");
        ui->pushButton_3->setText("c???i");
        ui->pushButton_4->setText("c???i");
        ui->pushButton_5->setText("c???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??") {

        ui->pushButton->setText("d??c");
        ui->pushButton_2->setText("d??t");
        ui->pushButton_3->setText("d??m");
        ui->pushButton_4->setText("d??n");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dun") {

        ui->pushButton->setText("dung");
        ui->pushButton_2->setText("d???n");
        ui->pushButton_3->setText("d??n");
        ui->pushButton_4->setText("d??n");
        ui->pushButton_5->setText("d???n");

        ui->pushButton_6->setText("d??n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??a") {

        ui->pushButton->setText("d???a");
        ui->pushButton_2->setText("d???a");
        ui->pushButton_3->setText("d???a");
        ui->pushButton_4->setText("d???a");
        ui->pushButton_5->setText("d???a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d????i") {

        ui->pushButton->setText("d?????i");
        ui->pushButton_2->setText("d?????i");
        ui->pushButton_3->setText("d?????i");
        ui->pushButton_4->setText("d?????i");
        ui->pushButton_5->setText("d?????i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dan") {

        ui->pushButton->setText("dang");
        ui->pushButton_2->setText("danh");
        ui->pushButton_3->setText("d???n");
        ui->pushButton_4->setText("d??n");
        ui->pushButton_5->setText("d??n");

        ui->pushButton_6->setText("d???n");
        ui->pushButton_7->setText("d??n");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??n") {

        ui->pushButton->setText("d??ng");
        ui->pushButton_2->setText("d???n");
        ui->pushButton_3->setText("d???n");
        ui->pushButton_4->setText("d???n");
        ui->pushButton_5->setText("d???n");

        ui->pushButton_6->setText("d???n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??p") {

        ui->pushButton->setText("d???p");
        ui->pushButton_2->setText("d???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "don") {

        ui->pushButton->setText("dong");
        ui->pushButton_2->setText("d???ng");
        ui->pushButton_3->setText("d??ng");
        ui->pushButton_4->setText("d??ng");
        ui->pushButton_5->setText("d???ng");

        ui->pushButton_6->setText("d??ng");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??i") {

        ui->pushButton->setText("d???i");
        ui->pushButton_2->setText("d???i");
        ui->pushButton_3->setText("d???i");
        ui->pushButton_4->setText("d???i");
        ui->pushButton_5->setText("d???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dip") {

        ui->pushButton->setText("d??p");
        ui->pushButton_2->setText("d???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "di??n") {

        ui->pushButton->setText("di???n");
        ui->pushButton_2->setText("di???n");
        ui->pushButton_3->setText("di???n");
        ui->pushButton_4->setText("di???n");
        ui->pushButton_5->setText("di???n");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "deo") {

        ui->pushButton->setText("d???o");
        ui->pushButton_2->setText("d??o");
        ui->pushButton_3->setText("d??o");
        ui->pushButton_4->setText("d???o");
        ui->pushButton_5->setText("d???o");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??") {

        ui->pushButton->setText("??u");
        ui->pushButton_2->setText("????");
        ui->pushButton_3->setText("??a");
        ui->pushButton_4->setText("????");
        ui->pushButton_5->setText("????");

        ui->pushButton_6->setText("??o");
        ui->pushButton_7->setText("????");
        ui->pushButton_8->setText("????");
        ui->pushButton_9->setText("??i");

        ui->pushButton_11->setText("??e");
        ui->pushButton_12->setText("????");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "????") {

        ui->pushButton->setText("????c");
        ui->pushButton_2->setText("????t");
        ui->pushButton_3->setText("????m");
        ui->pushButton_4->setText("????n");
        ui->pushButton_5->setText("????p");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "????n") {

        ui->pushButton->setText("????ng");
        ui->pushButton_2->setText("?????n");
        ui->pushButton_3->setText("?????n");
        ui->pushButton_4->setText("?????n");
        ui->pushButton_5->setText("?????n");

        ui->pushButton_6->setText("?????n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??un") {

        ui->pushButton->setText("??ung");
        ui->pushButton_2->setText("?????n");
        ui->pushButton_3->setText("????n");
        ui->pushButton_4->setText("????n");
        ui->pushButton_5->setText("?????n");

        ui->pushButton_6->setText("????n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??u??i") {

        ui->pushButton->setText("??u???i");
        ui->pushButton_2->setText("??u???i");
        ui->pushButton_3->setText("??u???i");
        ui->pushButton_4->setText("??u???i");
        ui->pushButton_5->setText("??u???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "????a") {

        ui->pushButton->setText("?????a");
        ui->pushButton_2->setText("?????a");
        ui->pushButton_3->setText("?????a");
        ui->pushButton_4->setText("?????a");
        ui->pushButton_5->setText("?????a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??????i") {

        ui->pushButton->setText("???????i");
        ui->pushButton_2->setText("???????i");
        ui->pushButton_3->setText("???????i");
        ui->pushButton_4->setText("???????i");
        ui->pushButton_5->setText("???????i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??an") {

        ui->pushButton->setText("??ang");
        ui->pushButton_2->setText("??anh");
        ui->pushButton_3->setText("?????n");
        ui->pushButton_4->setText("????n");
        ui->pushButton_5->setText("????n");

        ui->pushButton_6->setText("?????n");
        ui->pushButton_7->setText("????n");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "????n") {

        ui->pushButton->setText("????ng");
        ui->pushButton_2->setText("?????n");
        ui->pushButton_3->setText("?????n");
        ui->pushButton_4->setText("?????n");
        ui->pushButton_5->setText("?????n");

        ui->pushButton_6->setText("?????n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "????p") {

        ui->pushButton->setText("?????p");
        ui->pushButton_2->setText("?????p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??on") {

        ui->pushButton->setText("??ong");
        ui->pushButton_2->setText("?????n");
        ui->pushButton_3->setText("????n");
        ui->pushButton_4->setText("????n");
        ui->pushButton_5->setText("?????n");

        ui->pushButton_6->setText("????n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "????n") {

        ui->pushButton->setText("????ng");
        ui->pushButton_2->setText("?????n");
        ui->pushButton_3->setText("?????n");
        ui->pushButton_4->setText("?????n");
        ui->pushButton_5->setText("?????n");

        ui->pushButton_6->setText("?????n");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "????p") {

        ui->pushButton->setText("?????p");
        ui->pushButton_2->setText("?????p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??iu") {

        ui->pushButton->setText("?????u");
        ui->pushButton_2->setText("????u");
        ui->pushButton_3->setText("????u");
        ui->pushButton_4->setText("?????u");
        ui->pushButton_5->setText("????u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??i??p") {

        ui->pushButton->setText("??i???p");
        ui->pushButton_2->setText("??i???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "??ep") {

        ui->pushButton->setText("????p");
        ui->pushButton_2->setText("?????p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "????p") {

        ui->pushButton->setText("?????p");
        ui->pushButton_2->setText("?????p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

}

void MainWindow::on_pushButton_5_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_5->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bup") {
        ui->pushButton->setText("b??p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??a") {

        ui->pushButton->setText("b???a");
        ui->pushButton_2->setText("b???a");
        ui->pushButton_3->setText("b???a");
        ui->pushButton_4->setText("b???a");
        ui->pushButton_5->setText("b???a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b????u") {

        ui->pushButton->setText("b?????u");
        ui->pushButton_2->setText("b?????u");
        ui->pushButton_3->setText("b?????u");
        ui->pushButton_4->setText("b?????u");
        ui->pushButton_5->setText("b?????u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b??t");
        ui->pushButton_3->setText("b??m");
        ui->pushButton_4->setText("b??n");
        ui->pushButton_5->setText("b??p");

        ui->pushButton_6->setText("b??u");
        ui->pushButton_7->setText("b??y");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bau") {

        ui->pushButton->setText("b???u");
        ui->pushButton_2->setText("b??u");
        ui->pushButton_3->setText("b??u");
        ui->pushButton_4->setText("b???u");
        ui->pushButton_5->setText("b??u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??p") {

        ui->pushButton->setText("b???p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??p") {

        ui->pushButton->setText("b???p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bop") {

        ui->pushButton->setText("b??p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??p") {

        ui->pushButton->setText("b???p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??i") {

        ui->pushButton->setText("b???i");
        ui->pushButton_2->setText("b???i");
        ui->pushButton_3->setText("b???i");
        ui->pushButton_4->setText("b???i");
        ui->pushButton_5->setText("b???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bip") {

        ui->pushButton->setText("b??p");
        ui->pushButton_2->setText("b???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "beo") {

        ui->pushButton->setText("b???o");
        ui->pushButton_2->setText("b??o");
        ui->pushButton_3->setText("b??o");
        ui->pushButton_4->setText("b???o");
        ui->pushButton_5->setText("b???o");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??u") {

        ui->pushButton->setText("b???u");
        ui->pushButton_2->setText("b???u");
        ui->pushButton_3->setText("b???u");
        ui->pushButton_4->setText("b???u");
        ui->pushButton_5->setText("b???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??") {

        ui->pushButton->setText("c??c");
        ui->pushButton_2->setText("c??t");
        ui->pushButton_3->setText("c??m");
        ui->pushButton_4->setText("c??n");
        ui->pushButton_5->setText("c??p");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chup") {

        ui->pushButton->setText("ch??p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu??i") {

        ui->pushButton->setText("chu???i");
        ui->pushButton_2->setText("chu???i");
        ui->pushButton_3->setText("chu???i");
        ui->pushButton_4->setText("chu???i");
        ui->pushButton_5->setText("chu???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??") {

        ui->pushButton->setText("ch??t");
        ui->pushButton_2->setText("ch??m");
        ui->pushButton_3->setText("ch??n");
        ui->pushButton_4->setText("ch??p");
        ui->pushButton_5->setText("ch??u");

        ui->pushButton_6->setText("ch??y");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??i") {

        ui->pushButton->setText("ch???i");
        ui->pushButton_2->setText("ch???i");
        ui->pushButton_3->setText("ch???i");
        ui->pushButton_4->setText("ch???i");
        ui->pushButton_5->setText("ch???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chap") {

        ui->pushButton->setText("ch??p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "ch??p") {

        ui->pushButton->setText("ch???p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??u") {

        ui->pushButton->setText("ch???u");
        ui->pushButton_2->setText("ch???u");
        ui->pushButton_3->setText("ch???u");
        ui->pushButton_4->setText("ch???u");
        ui->pushButton_5->setText("ch???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chop") {

        ui->pushButton->setText("ch??p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??p") {

        ui->pushButton->setText("ch???p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??i") {

        ui->pushButton->setText("ch???i");
        ui->pushButton_2->setText("ch???i");
        ui->pushButton_3->setText("ch???i");
        ui->pushButton_4->setText("ch???i");
        ui->pushButton_5->setText("ch???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chip") {

        ui->pushButton->setText("ch??p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi??p") {

        ui->pushButton->setText("chi???p");
        ui->pushButton_2->setText("chi???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cheo") {

        ui->pushButton->setText("ch???o");
        ui->pushButton_2->setText("ch??o");
        ui->pushButton_3->setText("ch??o");
        ui->pushButton_4->setText("ch???o");
        ui->pushButton_5->setText("ch???o");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??p") {

        ui->pushButton->setText("ch???p");
        ui->pushButton_2->setText("ch???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cup") {

        ui->pushButton->setText("c??p");
        ui->pushButton_2->setText("c???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "c??a") {

        ui->pushButton->setText("c???a");
        ui->pushButton_2->setText("c???a");
        ui->pushButton_3->setText("c???a");
        ui->pushButton_4->setText("c???a");
        ui->pushButton_5->setText("c???a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "c????i") {

        ui->pushButton->setText("c?????i");
        ui->pushButton_2->setText("c?????i");
        ui->pushButton_3->setText("c?????i");
        ui->pushButton_4->setText("c?????i");
        ui->pushButton_5->setText("c?????i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cap") {

        ui->pushButton->setText("c??p");
        ui->pushButton_2->setText("c???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??p") {

        ui->pushButton->setText("c???p");
        ui->pushButton_2->setText("c???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "c??p") {

        ui->pushButton->setText("c???p");
        ui->pushButton_2->setText("c???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cop") {

        ui->pushButton->setText("c??p");
        ui->pushButton_2->setText("c???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??p") {

        ui->pushButton->setText("c???p");
        ui->pushButton_2->setText("c???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??") {

        ui->pushButton->setText("d??t");
        ui->pushButton_2->setText("d??m");
        ui->pushButton_3->setText("d??n");
        ui->pushButton_4->setText("d??p");
        ui->pushButton_5->setText("d??u");

        ui->pushButton_6->setText("d??y");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dua") {

        ui->pushButton->setText("d???a");
        ui->pushButton_2->setText("d??a");
        ui->pushButton_3->setText("d??a");
        ui->pushButton_4->setText("d???a");
        ui->pushButton_5->setText("d??a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d????") {

        ui->pushButton->setText("d????c");
        ui->pushButton_2->setText("d????t");
        ui->pushButton_3->setText("d????n");
        ui->pushButton_4->setText("d????i");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dau") {

        ui->pushButton->setText("d???u");
        ui->pushButton_2->setText("d??u");
        ui->pushButton_3->setText("d??u");
        ui->pushButton_4->setText("d???u");
        ui->pushButton_5->setText("d??u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??u") {

        ui->pushButton->setText("d???u");
        ui->pushButton_2->setText("d???u");
        ui->pushButton_3->setText("d???u");
        ui->pushButton_4->setText("d???u");
        ui->pushButton_5->setText("d???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "doa") {

        ui->pushButton->setText("doan");
        ui->pushButton_2->setText("d???a");
        ui->pushButton_3->setText("d??a");
        ui->pushButton_4->setText("d??a");
        ui->pushButton_5->setText("d???a");

        ui->pushButton_6->setText("d??a");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diu") {

        ui->pushButton->setText("d???u");
        ui->pushButton_2->setText("d??u");
        ui->pushButton_3->setText("d??u");
        ui->pushButton_4->setText("d???u");
        ui->pushButton_5->setText("d??u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "di??p") {

        ui->pushButton->setText("di???p");
        ui->pushButton_2->setText("di???p");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }


}

void MainWindow::on_pushButton_6_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_6->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bua") {
        ui->pushButton->setText("b???a");
        ui->pushButton_2->setText("b??a");
        ui->pushButton_3->setText("b??a");
        ui->pushButton_4->setText("b???a");
        ui->pushButton_5->setText("b??a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "") {

        ui->pushButton->setText("");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b????") {

        ui->pushButton->setText("b????c");
        ui->pushButton_2->setText("b????");
        ui->pushButton_3->setText("b????n");
        ui->pushButton_4->setText("b????p");
        ui->pushButton_5->setText("b????u");

        ui->pushButton_6->setText("b????i");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b????i") {

        ui->pushButton->setText("b?????i");
        ui->pushButton_2->setText("b?????i");
        ui->pushButton_3->setText("b?????i");
        ui->pushButton_4->setText("b?????i");
        ui->pushButton_5->setText("b?????i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bo") {

        ui->pushButton->setText("boc");
        ui->pushButton_2->setText("bot");
        ui->pushButton_3->setText("bom");
        ui->pushButton_4->setText("bon");
        ui->pushButton_5->setText("bop");

        ui->pushButton_6->setText("boi");
        ui->pushButton_7->setText("b???");
        ui->pushButton_8->setText("b??");
        ui->pushButton_9->setText("b??");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bay") {

        ui->pushButton->setText("b???y");
        ui->pushButton_2->setText("b??y");
        ui->pushButton_3->setText("b??y");
        ui->pushButton_4->setText("b???y");
        ui->pushButton_5->setText("b??y");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??u") {

        ui->pushButton->setText("b???u");
        ui->pushButton_2->setText("b???u");
        ui->pushButton_3->setText("b???u");
        ui->pushButton_4->setText("b???u");
        ui->pushButton_5->setText("b???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "boi") {

        ui->pushButton->setText("b???i");
        ui->pushButton_2->setText("b??i");
        ui->pushButton_3->setText("b??i");
        ui->pushButton_4->setText("b???i");
        ui->pushButton_5->setText("b??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??i") {

        ui->pushButton->setText("b???i");
        ui->pushButton_2->setText("b???i");
        ui->pushButton_3->setText("b???i");
        ui->pushButton_4->setText("b???i");
        ui->pushButton_5->setText("b???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "biu") {

        ui->pushButton->setText("b???u");
        ui->pushButton_2->setText("b??u");
        ui->pushButton_3->setText("b??u");
        ui->pushButton_4->setText("b???u");
        ui->pushButton_5->setText("b??u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??") {

        ui->pushButton->setText("c??c");
        ui->pushButton_2->setText("c??t");
        ui->pushButton_3->setText("c??m");
        ui->pushButton_4->setText("c??n");
        ui->pushButton_5->setText("c??p");

        ui->pushButton_6->setText("c??u");
        ui->pushButton_7->setText("c??y");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cho") {

        ui->pushButton->setText("choc");
        ui->pushButton_2->setText("chot");
        ui->pushButton_3->setText("chom");
        ui->pushButton_4->setText("chon");
        ui->pushButton_5->setText("chop");

        ui->pushButton_6->setText("choa");
        ui->pushButton_7->setText("cho??");
        ui->pushButton_8->setText("choi");
        ui->pushButton_9->setText("choe");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chua") {

        ui->pushButton->setText("ch???a");
        ui->pushButton_2->setText("ch??a");
        ui->pushButton_3->setText("ch??a");
        ui->pushButton_4->setText("ch???a");
        ui->pushButton_5->setText("ch??a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chau") {

        ui->pushButton->setText("ch???u");
        ui->pushButton_2->setText("ch??u");
        ui->pushButton_3->setText("ch??u");
        ui->pushButton_4->setText("ch???u");
        ui->pushButton_5->setText("ch??u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "ch??y") {

        ui->pushButton->setText("ch???y");
        ui->pushButton_2->setText("ch???y");
        ui->pushButton_3->setText("ch???y");
        ui->pushButton_4->setText("ch???y");
        ui->pushButton_5->setText("ch???y");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choa") {

        ui->pushButton->setText("choac");
        ui->pushButton_2->setText("choan");
        ui->pushButton_3->setText("choai");
        ui->pushButton_4->setText("ch???a");
        ui->pushButton_5->setText("ch??a");

        ui->pushButton_6->setText("ch??a");
        ui->pushButton_7->setText("ch???a");
        ui->pushButton_8->setText("ch??a");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??i") {

        ui->pushButton->setText("ch???i");
        ui->pushButton_2->setText("ch???i");
        ui->pushButton_3->setText("ch???i");
        ui->pushButton_4->setText("ch???i");
        ui->pushButton_5->setText("ch???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chiu") {

        ui->pushButton->setText("ch???u");
        ui->pushButton_2->setText("ch??u");
        ui->pushButton_3->setText("ch??u");
        ui->pushButton_4->setText("ch???u");
        ui->pushButton_5->setText("ch??u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi??u") {

        ui->pushButton->setText("chi???u");
        ui->pushButton_2->setText("chi???u");
        ui->pushButton_3->setText("chi???u");
        ui->pushButton_4->setText("chi???u");
        ui->pushButton_5->setText("chi???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cua") {

        ui->pushButton->setText("c???a");
        ui->pushButton_2->setText("c??a");
        ui->pushButton_3->setText("c??a");
        ui->pushButton_4->setText("c???a");
        ui->pushButton_5->setText("c??a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c????") {

        ui->pushButton->setText("c????c");
        ui->pushButton_2->setText("c????m");
        ui->pushButton_3->setText("c????n");
        ui->pushButton_4->setText("c????p");
        ui->pushButton_5->setText("c????i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cau") {

        ui->pushButton->setText("c???u");
        ui->pushButton_2->setText("c??u");
        ui->pushButton_3->setText("c??u");
        ui->pushButton_4->setText("c???u");
        ui->pushButton_5->setText("c??u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??u") {

        ui->pushButton->setText("c???u");
        ui->pushButton_2->setText("c???u");
        ui->pushButton_3->setText("c???u");
        ui->pushButton_4->setText("c???u");
        ui->pushButton_5->setText("c???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "coi") {

        ui->pushButton->setText("c???i");
        ui->pushButton_2->setText("c??i");
        ui->pushButton_3->setText("c??i");
        ui->pushButton_4->setText("c???i");
        ui->pushButton_5->setText("c??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??i") {

        ui->pushButton->setText("c???i");
        ui->pushButton_2->setText("c???i");
        ui->pushButton_3->setText("c???i");
        ui->pushButton_4->setText("c???i");
        ui->pushButton_5->setText("c???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "do") {

        ui->pushButton->setText("doc");
        ui->pushButton_2->setText("dot");
        ui->pushButton_3->setText("dom");
        ui->pushButton_4->setText("don");
        ui->pushButton_5->setText("doa");

        ui->pushButton_6->setText("doi");
        ui->pushButton_7->setText("d???");
        ui->pushButton_8->setText("d??");
        ui->pushButton_9->setText("d??");

        ui->pushButton_11->setText("d???");
        ui->pushButton_12->setText("d??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duy") {

        ui->pushButton->setText("duy??");
        ui->pushButton_2->setText("d???y");
        ui->pushButton_3->setText("d??y");
        ui->pushButton_4->setText("d??y");
        ui->pushButton_5->setText("d???y");

        ui->pushButton_6->setText("d??y");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "day") {

        ui->pushButton->setText("d???y");
        ui->pushButton_2->setText("d??y");
        ui->pushButton_3->setText("d??y");
        ui->pushButton_4->setText("d???y");
        ui->pushButton_5->setText("d??y");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??y") {

        ui->pushButton->setText("d???y");
        ui->pushButton_2->setText("d???y");
        ui->pushButton_3->setText("d???y");
        ui->pushButton_4->setText("d???y");
        ui->pushButton_5->setText("d???y");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "doi") {

        ui->pushButton->setText("d???i");
        ui->pushButton_2->setText("d??i");
        ui->pushButton_3->setText("d??i");
        ui->pushButton_4->setText("d???i");
        ui->pushButton_5->setText("d??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dia") {

        ui->pushButton->setText("d???a");
        ui->pushButton_2->setText("d??a");
        ui->pushButton_3->setText("d??a");
        ui->pushButton_4->setText("d???a");
        ui->pushButton_5->setText("d??a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "di??u") {

        ui->pushButton->setText("di???u");
        ui->pushButton_2->setText("di???u");
        ui->pushButton_3->setText("di???u");
        ui->pushButton_4->setText("di???u");
        ui->pushButton_5->setText("di???u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

}

void MainWindow::on_pushButton_7_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_7->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "buy") {
        ui->pushButton->setText("buyt");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b??t");
        ui->pushButton_3->setText("b??m");
        ui->pushButton_4->setText("b??n");
        ui->pushButton_5->setText("b??p");

        ui->pushButton_6->setText("b??i");
        ui->pushButton_7->setText("b???");
        ui->pushButton_8->setText("b???");
        ui->pushButton_9->setText("b???");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b???");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bao") {

        ui->pushButton->setText("b???o");
        ui->pushButton_2->setText("b??o");
        ui->pushButton_3->setText("b??o");
        ui->pushButton_4->setText("b???o");
        ui->pushButton_5->setText("b??o");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??y") {

        ui->pushButton->setText("b???y");
        ui->pushButton_2->setText("b???y");
        ui->pushButton_3->setText("b???y");
        ui->pushButton_4->setText("b???y");
        ui->pushButton_5->setText("b???y");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bia") {

        ui->pushButton->setText("b???a");
        ui->pushButton_2->setText("b??a");
        ui->pushButton_3->setText("b??a");
        ui->pushButton_4->setText("b???a");
        ui->pushButton_5->setText("b??a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "co") {

        ui->pushButton->setText("coc");
        ui->pushButton_2->setText("cot");
        ui->pushButton_3->setText("com");
        ui->pushButton_4->setText("con");
        ui->pushButton_5->setText("cop");

        ui->pushButton_6->setText("coi");
        ui->pushButton_7->setText("c???");
        ui->pushButton_8->setText("c??");
        ui->pushButton_9->setText("c??");

        ui->pushButton_11->setText("c???");
        ui->pushButton_12->setText("c??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??") {

        ui->pushButton->setText("ch??c");
        ui->pushButton_2->setText("ch??t");
        ui->pushButton_3->setText("ch??m");
        ui->pushButton_4->setText("ch??n");
        ui->pushButton_5->setText("ch??t");

        ui->pushButton_6->setText("ch??i");
        ui->pushButton_7->setText("ch???");
        ui->pushButton_8->setText("ch???");
        ui->pushButton_9->setText("ch???");

        ui->pushButton_11->setText("ch???");
        ui->pushButton_12->setText("ch???");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu??") {

        ui->pushButton->setText("chu??n");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chay") {

        ui->pushButton->setText("ch???y");
        ui->pushButton_2->setText("ch??y");
        ui->pushButton_3->setText("ch??y");
        ui->pushButton_4->setText("ch???y");
        ui->pushButton_5->setText("ch??y");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cho??") {

        ui->pushButton->setText("cho??t");
        ui->pushButton_2->setText("cho??n");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chia") {

        ui->pushButton->setText("ch???a");
        ui->pushButton_2->setText("ch??a");
        ui->pushButton_3->setText("ch??a");
        ui->pushButton_4->setText("ch???a");
        ui->pushButton_5->setText("ch??a");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cu??") {

        ui->pushButton->setText("cu??c");
        ui->pushButton_2->setText("cu??m");
        ui->pushButton_3->setText("cu??n");
        ui->pushButton_4->setText("cu??i");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "c??i") {

        ui->pushButton->setText("c???i");
        ui->pushButton_2->setText("c???i");
        ui->pushButton_3->setText("c???i");
        ui->pushButton_4->setText("c???i");
        ui->pushButton_5->setText("c???i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "cay") {

        ui->pushButton->setText("c???y");
        ui->pushButton_2->setText("c??y");
        ui->pushButton_3->setText("c??y");
        ui->pushButton_4->setText("c???y");
        ui->pushButton_5->setText("c??y");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??y") {

        ui->pushButton->setText("c???y");
        ui->pushButton_2->setText("c???y");
        ui->pushButton_3->setText("c???y");
        ui->pushButton_4->setText("c???y");
        ui->pushButton_5->setText("c???y");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??") {

        ui->pushButton->setText("d??c");
        ui->pushButton_2->setText("d??t");
        ui->pushButton_3->setText("d??n");
        ui->pushButton_4->setText("d??i");
        ui->pushButton_5->setText("d???");

        ui->pushButton_6->setText("d???");
        ui->pushButton_7->setText("d???");
        ui->pushButton_8->setText("d???");
        ui->pushButton_9->setText("d???");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "du??") {

        ui->pushButton->setText("du??c");
        ui->pushButton_2->setText("du??i");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dao") {

        ui->pushButton->setText("d???o");
        ui->pushButton_2->setText("d??o");
        ui->pushButton_3->setText("d??o");
        ui->pushButton_4->setText("d???o");
        ui->pushButton_5->setText("d??o");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "di??") {

        ui->pushButton->setText("di??c");
        ui->pushButton_2->setText("di??t");
        ui->pushButton_3->setText("di??m");
        ui->pushButton_4->setText("di??n");
        ui->pushButton_5->setText("di??p");

        ui->pushButton_6->setText("di??u");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

}

void MainWindow::on_pushButton_8_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_8->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bu??") {
        ui->pushButton->setText("bu??c");
        ui->pushButton_2->setText("bu??t");
        ui->pushButton_3->setText("bu??");
        ui->pushButton_4->setText("bu??n");
        ui->pushButton_5->setText("bu??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??") {

        ui->pushButton->setText("b??t");
        ui->pushButton_2->setText("b??m");
        ui->pushButton_3->setText("b??n");
        ui->pushButton_4->setText("b??p");
        ui->pushButton_5->setText("b??i");

        ui->pushButton_6->setText("b???");
        ui->pushButton_7->setText("b???");
        ui->pushButton_8->setText("b???");
        ui->pushButton_9->setText("b???");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bai") {

        ui->pushButton->setText("b???i");
        ui->pushButton_2->setText("b??i");
        ui->pushButton_3->setText("b??i");
        ui->pushButton_4->setText("b???i");
        ui->pushButton_5->setText("b??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bi??") {

        ui->pushButton->setText("bi??c");
        ui->pushButton_2->setText("bi??t");
        ui->pushButton_3->setText("bi??m");
        ui->pushButton_4->setText("bi??n");
        ui->pushButton_5->setText("bi??u");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??") {

        ui->pushButton->setText("c??c");
        ui->pushButton_2->setText("c??t");
        ui->pushButton_3->setText("c??m");
        ui->pushButton_4->setText("c??n");
        ui->pushButton_5->setText("c??p");

        ui->pushButton_6->setText("c??i");
        ui->pushButton_7->setText("c???");
        ui->pushButton_8->setText("c???");
        ui->pushButton_9->setText("c???");

        ui->pushButton_11->setText("c???");
        ui->pushButton_12->setText("c???");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch??") {

        ui->pushButton->setText("ch??t");
        ui->pushButton_2->setText("ch??m");
        ui->pushButton_3->setText("ch??n");
        ui->pushButton_4->setText("ch??p");
        ui->pushButton_5->setText("ch??i");

        ui->pushButton_6->setText("ch???");
        ui->pushButton_7->setText("ch???");
        ui->pushButton_8->setText("ch???");
        ui->pushButton_9->setText("ch???");

        ui->pushButton_11->setText("ch???");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chi??") {

        ui->pushButton->setText("chi??c");
        ui->pushButton_2->setText("chi??t");
        ui->pushButton_3->setText("chi??m");
        ui->pushButton_4->setText("chi??n");
        ui->pushButton_5->setText("chi??p");

        ui->pushButton_6->setText("chi??u");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cui") {

        ui->pushButton->setText("c???i");
        ui->pushButton_2->setText("c??i");
        ui->pushButton_3->setText("c??i");
        ui->pushButton_4->setText("c???i");
        ui->pushButton_5->setText("c??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "cao") {

        ui->pushButton->setText("c???o");
        ui->pushButton_2->setText("c??o");
        ui->pushButton_3->setText("c??o");
        ui->pushButton_4->setText("c???o");
        ui->pushButton_5->setText("c??o");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d??") {

        ui->pushButton->setText("d??n");
        ui->pushButton_2->setText("d??p");
        ui->pushButton_3->setText("d??i");
        ui->pushButton_4->setText("d???");
        ui->pushButton_5->setText("d???");

        ui->pushButton_6->setText("d???");
        ui->pushButton_7->setText("d???");
        ui->pushButton_8->setText("d???");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dui") {

        ui->pushButton->setText("d???i");
        ui->pushButton_2->setText("d??i");
        ui->pushButton_3->setText("d??i");
        ui->pushButton_4->setText("d???i");
        ui->pushButton_5->setText("d??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dai") {

        ui->pushButton->setText("d???i");
        ui->pushButton_2->setText("d??i");
        ui->pushButton_3->setText("d??i");
        ui->pushButton_4->setText("d???i");
        ui->pushButton_5->setText("d??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }


}

void MainWindow::on_pushButton_9_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_9->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bui") {
        ui->pushButton->setText("b???i");
        ui->pushButton_2->setText("b??i");
        ui->pushButton_3->setText("b??i");
        ui->pushButton_4->setText("b???i");
        ui->pushButton_5->setText("b??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bi") {

        ui->pushButton->setText("bic");
        ui->pushButton_2->setText("bit");
        ui->pushButton_3->setText("bim");
        ui->pushButton_4->setText("bin");
        ui->pushButton_5->setText("bip");

        ui->pushButton_6->setText("biu");
        ui->pushButton_7->setText("bia");
        ui->pushButton_8->setText("bi??");
        ui->pushButton_9->setText("b???");

        ui->pushButton_11->setText("b??");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b???");
        ui->pushButton_14->setText("b??");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c??") {

        ui->pushButton->setText("c??t");
        ui->pushButton_2->setText("c??m");
        ui->pushButton_3->setText("c??n");
        ui->pushButton_4->setText("c??i");
        ui->pushButton_5->setText("c???");

        ui->pushButton_6->setText("c???");
        ui->pushButton_7->setText("c???");
        ui->pushButton_8->setText("c???");
        ui->pushButton_9->setText("c???");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cai") {

        ui->pushButton->setText("c???i");
        ui->pushButton_2->setText("c??i");
        ui->pushButton_3->setText("c??i");
        ui->pushButton_4->setText("c???i");
        ui->pushButton_5->setText("c??i");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi") {

        ui->pushButton->setText("chic");
        ui->pushButton_2->setText("chit");
        ui->pushButton_3->setText("chim");
        ui->pushButton_4->setText("chin");
        ui->pushButton_5->setText("chip");

        ui->pushButton_6->setText("chiu");
        ui->pushButton_7->setText("chia");
        ui->pushButton_8->setText("chi??");
        ui->pushButton_9->setText("ch???");

        ui->pushButton_11->setText("ch??");
        ui->pushButton_12->setText("ch??");
        ui->pushButton_13->setText("ch???");
        ui->pushButton_14->setText("ch??");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "di") {

        ui->pushButton->setText("dic");
        ui->pushButton_2->setText("dim");
        ui->pushButton_3->setText("din");
        ui->pushButton_4->setText("dip");
        ui->pushButton_5->setText("diu");

        ui->pushButton_6->setText("dia");
        ui->pushButton_7->setText("di??");
        ui->pushButton_8->setText("d???");
        ui->pushButton_9->setText("d??");

        ui->pushButton_11->setText("d??");
        ui->pushButton_12->setText("d???");
        ui->pushButton_13->setText("d??");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "du??") {

        ui->pushButton->setText("du???");
        ui->pushButton_2->setText("du???");
        ui->pushButton_3->setText("du???");
        ui->pushButton_4->setText("du???");
        ui->pushButton_5->setText("du???");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

}

void MainWindow::on_pushButton_10_pressed()
{
    //QString text = ui->pushButton_10->text();
    //text += ui->pushButton_16->text();
   // ui->label->setText(text);
    currentPress = ui->pushButton_10->text();
    nextPress = ui->pushButton->text();
    if(currentPress == "next" && nextPress == "b") {
        ui->pushButton->setText("k");
        ui->pushButton_2->setText("p");
        ui->pushButton_3->setText("x");
        ui->pushButton_4->setText("u");
        ui->pushButton_5->setText("??");

        ui->pushButton_6->setText("a");
        ui->pushButton_7->setText("??");
        ui->pushButton_8->setText("??");
        ui->pushButton_9->setText("y");

        ui->pushButton_11->setText("o");
        ui->pushButton_12->setText("??");
        ui->pushButton_13->setText("??");
        ui->pushButton_14->setText("i");
        ui->pushButton_15->setText("e");
    }
    else if(currentPress == "next" && nextPress == "k"){
        ui->pushButton->setText("??");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "next" && nextPress == "??") {
        ui->pushButton->setText("b");
        ui->pushButton_2->setText("c");
        ui->pushButton_3->setText("d");
        ui->pushButton_4->setText("??");
        ui->pushButton_5->setText("t");

        ui->pushButton_6->setText("g");
        ui->pushButton_7->setText("h");
        ui->pushButton_8->setText("l");
        ui->pushButton_9->setText("m");

        ui->pushButton_11->setText("n");
        ui->pushButton_12->setText("s");
        ui->pushButton_13->setText("qu");
        ui->pushButton_14->setText("r");
        ui->pushButton_15->setText("v");
    }
    currentPress = "";
}

void MainWindow::on_pushButton_11_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_11->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("b??");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("b??");
        ui->pushButton_5->setText("b??");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("b??");
        ui->pushButton_8->setText("b??");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "be") {

            ui->pushButton->setText("bet");
            ui->pushButton_2->setText("bem");
            ui->pushButton_3->setText("ben");
            ui->pushButton_4->setText("bep");
            ui->pushButton_5->setText("beo");

            ui->pushButton_6->setText("b???");
            ui->pushButton_7->setText("b??");
            ui->pushButton_8->setText("b??");
            ui->pushButton_9->setText("b???");

            ui->pushButton_11->setText("b???");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "che") {

            ui->pushButton->setText("chet");
            ui->pushButton_2->setText("chem");
            ui->pushButton_3->setText("chen");
            ui->pushButton_4->setText("chep");
            ui->pushButton_5->setText("cheo");

            ui->pushButton_6->setText("ch???");
            ui->pushButton_7->setText("ch??");
            ui->pushButton_8->setText("ch??");
            ui->pushButton_9->setText("ch???");

            ui->pushButton_11->setText("ch???");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "chui") {

            ui->pushButton->setText("ch???i");
            ui->pushButton_2->setText("ch??i");
            ui->pushButton_3->setText("ch??i");
            ui->pushButton_4->setText("ch???i");
            ui->pushButton_5->setText("ch??i");

            ui->pushButton_6->setText("");
            ui->pushButton_7->setText("");
            ui->pushButton_8->setText("");
            ui->pushButton_9->setText("");

            ui->pushButton_11->setText("");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "de") {

            ui->pushButton->setText("det");
            ui->pushButton_2->setText("den");
            ui->pushButton_3->setText("dep");
            ui->pushButton_4->setText("deo");
            ui->pushButton_5->setText("d???");

            ui->pushButton_6->setText("d??");
            ui->pushButton_7->setText("d??");
            ui->pushButton_8->setText("d???");
            ui->pushButton_9->setText("d???");

            ui->pushButton_11->setText("");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }

}

void MainWindow::on_pushButton_12_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_12->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("b??");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("b??");
        ui->pushButton_5->setText("b??");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("b??");
        ui->pushButton_8->setText("b??");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "b??") {

            ui->pushButton->setText("b??c");
            ui->pushButton_2->setText("b??t");
            ui->pushButton_3->setText("b??n");
            ui->pushButton_4->setText("b??p");
            ui->pushButton_5->setText("b??u");

            ui->pushButton_6->setText("b???");
            ui->pushButton_7->setText("b???");
            ui->pushButton_8->setText("b???");
            ui->pushButton_9->setText("b???");

            ui->pushButton_11->setText("b???");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "ch??") {

            ui->pushButton->setText("ch??c");
            ui->pushButton_2->setText("ch??t");
            ui->pushButton_3->setText("ch??m");
            ui->pushButton_4->setText("ch??n");
            ui->pushButton_5->setText("ch??p");

            ui->pushButton_6->setText("ch???");
            ui->pushButton_7->setText("ch???");
            ui->pushButton_8->setText("ch???");
            ui->pushButton_9->setText("ch???");

            ui->pushButton_11->setText("ch???");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "d??") {

            ui->pushButton->setText("d??t");
            ui->pushButton_2->setText("d??n");
            ui->pushButton_3->setText("d???");
            ui->pushButton_4->setText("d???");
            ui->pushButton_5->setText("d???");

            ui->pushButton_6->setText("d???");
            ui->pushButton_7->setText("d???");
            ui->pushButton_8->setText("");
            ui->pushButton_9->setText("");

            ui->pushButton_11->setText("");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
}

void MainWindow::on_pushButton_13_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_13->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("b??");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("b??");
        ui->pushButton_5->setText("b??");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("b??");
        ui->pushButton_8->setText("b??");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_14_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_14->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("b??");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("b??");
        ui->pushButton_5->setText("b??");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("b??");
        ui->pushButton_8->setText("b??");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("b??c");
        ui->pushButton_2->setText("b???c");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_15_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_15->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("b??");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("b??");
        ui->pushButton_5->setText("b??");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("b??");
        ui->pushButton_8->setText("b??");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("bu??");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("b???");
        ui->pushButton_12->setText("b??");
        ui->pushButton_13->setText("b??");
        ui->pushButton_14->setText("b???");
        ui->pushButton_15->setText("b??");
    }
}

void MainWindow::on_pushButton_16_pressed()
{
    //QString text = ui->pushButton_16->text();
    //text += ui->pushButton_16->text();
    if (currentPress != "" && currentPress != "Delete"  && currentPress != "next" && currentPress != "Home") {
        addTo_Stack();
        comPress += " " + currentPress;
        currentPress = "";
    }
    //QString text = ui->label->text();
    QString subString = comPress;
    /*if (comPress.size() > 15) {
        subString = comPress.mid(comPress.size() - 15, 15);

    }*/
    ui->label->setText(subString);
    sPress = ui->pushButton_16->text();
    if(sPress == "space") {
        ui->pushButton->setText("b");
        ui->pushButton_2->setText("c");
        ui->pushButton_3->setText("d");
        ui->pushButton_4->setText("??");
        ui->pushButton_5->setText("t");

        ui->pushButton_6->setText("g");
        ui->pushButton_7->setText("h");
        ui->pushButton_8->setText("l");
        ui->pushButton_9->setText("m");

        ui->pushButton_11->setText("n");
        ui->pushButton_12->setText("s");
        ui->pushButton_13->setText("qu");
        ui->pushButton_14->setText("r");
        ui->pushButton_15->setText("v");
       // comPress += currentPress;
    }
}

void MainWindow::on_pushButton_17_pressed()
{
    currentPress = ui->pushButton_17->text();
    if (currentPress == "Delete") {
        if (!stack.isEmpty()) {
            QVector<QString> vector;
            vector = stack.pop();
            QString text = vector.at(0);
            text = text.trimmed();
            int pos = text.lastIndexOf(" ");
            comPress = text.left(pos);
            currentPress = text.section(" ", -1);
            //ui->label->setText(currentPress);
            QString mystring = text;
            QString subString = mystring;
            //if (mystring.size() > 15) {
            //    subString = mystring.mid(mystring.size() - 15, 15);

            //}
            ui->label->setText(subString);
            //ui->label->setText(vector.at(0));
            
            ui->pushButton->setText(vector.at(1));
            ui->pushButton_2->setText(vector.at(2));
            ui->pushButton_3->setText(vector.at(3));
            ui->pushButton_4->setText(vector.at(4));
            ui->pushButton_5->setText(vector.at(5));

            ui->pushButton_6->setText(vector.at(6));
            ui->pushButton_7->setText(vector.at(7));
            ui->pushButton_8->setText(vector.at(8));
            ui->pushButton_9->setText(vector.at(9));

            ui->pushButton_11->setText(vector.at(10));
            ui->pushButton_12->setText(vector.at(11));
            ui->pushButton_13->setText(vector.at(12));
            ui->pushButton_14->setText(vector.at(13));
            ui->pushButton_15->setText(vector.at(14));
            
        }
        currentPress = "";
    }
}

void MainWindow::on_pushButton_18_pressed()
{
    //QString text = ui->pushButton_18->text();
    //text += ui->pushButton->text();
    ui->label->setText("");
    if (!stack.isEmpty()) {
        stack.clear();
    }
    currentPress = ui->pushButton_18->text();
    //currentPress = "";
    comPress = "";
    if(currentPress == "Home") {
       ui->pushButton->setText("b");
       ui->pushButton_2->setText("c");
       ui->pushButton_3->setText("d");
       ui->pushButton_4->setText("??");
       ui->pushButton_5->setText("t");

       ui->pushButton_6->setText("g");
       ui->pushButton_7->setText("h");
       ui->pushButton_8->setText("l");
       ui->pushButton_9->setText("m");

       ui->pushButton_11->setText("n");
       ui->pushButton_12->setText("s");
       ui->pushButton_13->setText("qu");
       ui->pushButton_14->setText("r");
       ui->pushButton_15->setText("v");
    }

    if (error == TOBII_ERROR_NO_ERROR) {
        system("\"C:\\Program Files (x86)\\Tobii\\Tobii EyeX Config\\Tobii.EyeX.Configuration.exe\" -Q");
    }
}
