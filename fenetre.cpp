//
// Created by nolcordier on 11/03/2021.
//

#include "fenetre.h"
#include <QtWidgets/QGridLayout>
#include <QDebug>
#include <QtWidgets/QLabel>

fenetre::fenetre() : QFrame() {
    layout= new QGridLayout;

    refreshButton = new QPushButton("Refresh");//création boutton settings
    refreshButton->setStyleSheet("background-color: rgb(206,206,206);");

    altvalue =new QLabel;
    tempvalue =new QLabel;
    pressvalue =new QLabel;



    alttxt= new QLabel;
    alttxt->setText("Altitude :");
    temptxt= new QLabel;
    temptxt->setText("Temperature :");
    presstxt= new QLabel;
    presstxt->setText("Pression :");

    alttxt->setStyleSheet("QLabel { color : blue; }");
    temptxt->setStyleSheet("QLabel { color : black; }");
    presstxt->setStyleSheet("QLabel { color : red; }");

    altvalue->setStyleSheet("QLabel { color : blue; }");
    tempvalue->setStyleSheet("QLabel { color : black; }");
    pressvalue->setStyleSheet("QLabel { color : red; }");

    layout->addWidget(temptxt,1,0);
    layout->addWidget(alttxt,1,1);
    layout->addWidget(presstxt,1,2);
    layout->addWidget(tempvalue,2,0);
    layout->addWidget(altvalue,2,1);
    layout->addWidget(pressvalue,2,2);
    layout->addWidget(refreshButton,3,1);

    setLayout(layout);
}

QLabel *fenetre::getTempvalue() const {
    return tempvalue;
}

QLabel *fenetre::getAltvalue() const {
    return altvalue;
}

QLabel *fenetre::getPressvalue() const {
    return pressvalue;
}

QPushButton *fenetre::getRefreshButton() const {
    return refreshButton;
}
