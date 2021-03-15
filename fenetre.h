//
// Created by nolcordier on 11/03/2021.
//

#ifndef METEO_QUERY_FENETRE_H
#define METEO_QUERY_FENETRE_H

#include <QMainWindow>
#include <QtWidgets/QFrame>
#include <QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QGridLayout>

class fenetre : public QFrame {
    Q_OBJECT
public:
    explicit fenetre();

private:
    QGridLayout *layout;

    QLabel *tempvalue;
    QLabel *altvalue;
    QLabel *pressvalue;

    QLabel *temptxt;
    QLabel *alttxt;
    QLabel *presstxt;

    QPushButton *refreshButton;
public:
    QLabel *getTempvalue() const;

    QLabel *getAltvalue() const;

    QLabel *getPressvalue() const;


    QPushButton *getRefreshButton() const;

};
#endif //METEO_QUERY_FENETRE_H