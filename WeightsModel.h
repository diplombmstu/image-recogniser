#pragma once

#include <QAbstractTableModel>

namespace irec
{
class WeightsModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit WeightsModel(QList<QList<double>> weights, QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QList<QList<double>> _weights;
};
}

