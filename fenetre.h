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
    QcLabelItem *labArrowTendanceDeg;
    QcLabelItem *labArrowTendanceAlt;
    QcLabelItem *labArrowTendancePress;


public:

    QcNeedleItem *getMDegNeedle() const;

    QcNeedleItem *getTDegNeedle() const;

    QcBackgroundItem *getBkgDeg() const;

    QcBackgroundItem *getBkgtDeg() const;

    QcDegreesItem *getDegreesItemDeg() const;

    QcValuesItem *getValuesDeg() const;

    QcLabelItem *getLebUnitDeg() const;

    QcLabelItem *getLabDeg() const;

    QcDegreesItem *getDegreesItemAlt() const;

    QcValuesItem *getValuesAlt() const;

    QcLabelItem *getLabUnitAlt() const;

    QcLabelItem *getLabAlt() const;

    QcDegreesItem *getDegreesItemPress() const;

    QcValuesItem *getValuesPress() const;

    QcLabelItem *getLabUnitPress() const;

    QcLabelItem *getLabPress() const;

    QcLabelItem *getLabUnitTAlt() const;

    QcDegreesItem *getDegreesItemtAlt() const;

    QcLabelItem *getLabUnitTPress() const;

    QcDegreesItem *getDegreesItemtPress() const;

    QcGaugeWidget *getTDegGauge() const;

    QcGaugeWidget *getTAltGauge() const;

    QcGaugeWidget *getTPressGauge() const;

    QcNeedleItem *getMAltNeedle() const;

    QcNeedleItem *getMPressNeedle() const;

    QcNeedleItem *getTAltNeedle() const;

    QcNeedleItem *getTPressNeedle() const;

    QcBackgroundItem *getBkgAlt() const;

    QcBackgroundItem *getBkgPress() const;

    QcBackgroundItem *getBkgtPress() const;

    QcBackgroundItem *getBkgtAlt() const;

    QcLabelItem *getLabArrowTendanceAlt() const;
    QcLabelItem *getLabArrowTendanceDeg() const;
    QcLabelItem *getLabArrowTendancePress() const;

private:
    QcGaugeWidget *mAltGauge;
    QcLabelItem *labUnitTDeg;
public:
    QcLabelItem *getLabUnitTDeg() const;

    QcDegreesItem *getDegreesItemtDeg() const;

    QcLabelItem *getLabUnitDeg() const;

private:
    QcDegreesItem *degreesItemtDeg;


    QcNeedleItem *mDegNeedle;
    QcNeedleItem *tDegNeedle;
    QcBackgroundItem *bkgDeg;
    QcBackgroundItem *bkgtDeg;

    QcDegreesItem *degreesItemDeg;
    QcValuesItem *valuesDeg;
    QcLabelItem *labUnitDeg;
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