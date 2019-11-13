#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QWidget>
#include <QImage>
#include <QtWidgets>

class ScribbleArea : public QWidget
{
    Q_OBJECT
public:
    explicit ScribbleArea(QWidget *parent = nullptr);

    void setColor (const QColor &value);
    void setText (const QString &value);
    int setPenWidth (int value);
    bool getEraser() const;
    void setEraser(bool value);
    void setMyFont(const QFont &value);
    void resetImage();

signals:

public slots:

    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);


private:

    void drawLineTo(const QPoint &endPoint);
    void drawText(const QPoint &at);
    QImage image;
    bool scribbling;
    bool eraser;
    int myPenWidth;
    QColor myPenColor;
    QFont myFont;
    QString myText;
    QPoint lastPoint;


};

#endif // SCRIBBLEAREA_H
