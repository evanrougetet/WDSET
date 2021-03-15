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
#include "qcgaugewidget.h"

class fenetre : public QFrame {
    Q_OBJECT
public:
    explicit fenetre();

private:

    QLabel *tempvalue;
    QLabel *altvalue;
    QLabel *pressvalue;


    QGridLayout *layout;


    QPushButton *refreshButton;

    QcGaugeWidget *mDegGauge;
    QcGaugeWidget *mAltGauge;


    QcNeedleItem *mDegNeedle;
    QcNeedleItem *tDegNeedle;
    QcBackgroundItem *bkgDeg;
    QcBackgroundItem *bkgtDeg;

    QcDegreesItem *degreesItemDeg;
    QcValuesItem *valuesDeg;
    QcLabelItem *lebUnitDeg;
    QcLabelItem *labDeg;

    QcDegreesItem *degreesItemAlt;
    QcValuesItem *valuesAlt;
    QcLabelItem *labUnitAlt;
    QcLabelItem *labAlt;

    QcDegreesItem *degreesItemPress;
    QcValuesItem *valuesPress;
    QcLabelItem *labUnitPress;
    QcLabelItem *labPress;

    QcLabelItem *labUnitTAlt;
    QcDegreesItem *degreesItemtAlt;

    QcLabelItem *labUnitTPress;
    QcDegreesItem *degreesItemtPress;

    QcGaugeWidget *tDegGauge;
    QcGaugeWidget *tAltGauge;
    QcGaugeWidget *tPressGauge;
    QcNeedleItem *mAltNeedle;
    QcNeedleItem *mPressNeedle;

    QcNeedleItem *tAltNeedle;
    QcNeedleItem *tPressNeedle;
//Qcbackgrounditem hérite de qcitem

    QcBackgroundItem *bkgAlt;
    QcBackgroundItem *bkgPress;
    QcBackgroundItem *bkgtPress;
    QcBackgroundItem *bkgtAlt;

public:
    QcGaugeWidget *getMDegGauge() const;

    QcGaugeWidget *getMAltGauge() const;

    QcGaugeWidget *getMPressGauge() const;

private:
    QcGaugeWidget *mPressGauge;

public:
    QLabel *getTempvalue() const;

    QLabel *getAltvalue() const;

    QLabel *getPressvalue() const;


    QPushButton *getRefreshButton() const;

};
#endif //METEO_QUERY_FENETRE_H