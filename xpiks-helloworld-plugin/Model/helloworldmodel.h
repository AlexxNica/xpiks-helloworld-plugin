/*
 * This file is a part of HelloWorld plugin for Xpiks. Xpiks is
 * cross platform application for keywording and uploading images
 * for microstocks
 * Copyright (C) 2016 Taras Kushnir <kushnirTV@gmail.com>
 *
 * Xpiks is distributed under the GNU General Public License, version 3.0
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HELLOWORLDMODEL_H
#define HELLOWORLDMODEL_H

#include <QObject>
#include <QString>

class HelloWorldModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString greetingText READ getGreetingText WRITE setGreetingText NOTIFY greetingTextChanged)
public:
    explicit HelloWorldModel(QObject *parent = 0);

public:
    const QString &getGreetingText() const { return m_GreetingText; }
    void setGreetingText(const QString &value) {
        if (m_GreetingText != value) {
            m_GreetingText = value;
            emit greetingTextChanged();
        }
    }

signals:
    void greetingTextChanged();

private:
    QString m_GreetingText;
};

#endif // HELLOWORLDMODEL_H
