/***************************************************************************
                               id_dialog.h
                              -------------
    begin                : Sat Oct 16 2004
    copyright            : (C) 2004 by Michael Margraf
    email                : michael.margraf@alumni.tu-berlin.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef ID_DIALOG_H
#define ID_DIALOG_H

#include <QDialog>
#include <QRegExp>

class ID_Text;
class QTableWidget;
class QLineEdit;
class QCheckBox;
class QVBoxLayout;
class QRegExpValidator;


class ID_Dialog : public QDialog  {
Q_OBJECT
public:
  ID_Dialog(ID_Text*);
 ~ID_Dialog();

private:
  ID_Text *idText;

  QVBoxLayout *all;
  QLineEdit *Prefix;

  QTableWidget *ParamTable;
  QCheckBox *showCheck;
  QLineEdit *ParamNameEdit, *ValueEdit, *DescriptionEdit, *TypeEdit;

  QRegExp Expr;
  QRegExpValidator *SubVal, *NameVal, *ValueVal, *DescrVal, *TypeVal;

private slots:
  void slotOk();
  void slotAddParameter();
  void slotRemoveParameter();
  void slotEditParameter();
  void slotToggleShow(bool);
  void slotNameChanged(const QString&);
  void slotValueChanged(const QString&);
  void slotDescrChanged(const QString&);
  void slotTypeChanged(const QString&);
};

#endif
