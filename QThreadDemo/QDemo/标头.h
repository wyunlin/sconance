﻿#pragma once
#include <QObject>
#include <QMutex>
#include <QDateTime>
#include <QFile>
#include <QTextStream>
void outputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg);
