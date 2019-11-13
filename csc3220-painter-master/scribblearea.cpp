#include "scribblearea.h"

ScribbleArea::ScribbleArea(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);
    scribbling = false;
    myPenColor = Qt::black;
    myPenWidth = 2;
    eraser = false;

    resetImage();
}

void ScribbleArea::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        lastPoint = event->pos();
        scribbling = true;
    }

    if(event->button() == Qt::RightButton)
    {
        drawText(event->pos());
    }
}

void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton && scribbling)
    {
        drawLineTo(event->pos());
        scribbling = false;
    }
}

void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton && scribbling)
    {
        drawLineTo(event->pos());
    }
}

void ScribbleArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, image, dirtyRect);
}

void ScribbleArea::resizeEvent(QResizeEvent *event)
{
    resetImage();
    update();

    QWidget::resizeEvent(event);
}

void ScribbleArea::resetImage()
{
    QSize widgetSize = QSize(width(), height());
    QImage newImage(widgetSize,
                    QImage::Format_RGB32);

    newImage.fill(qRgb(255, 255, 255));
    image = newImage;
    update();
}

void ScribbleArea::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor, myPenWidth,
                        Qt::SolidLine,
                        Qt::RoundCap,
                        Qt::RoundJoin));
    painter.drawLine(lastPoint, endPoint);

    update();

    lastPoint = endPoint;
}

void ScribbleArea::drawText(const QPoint &at)
{
    QPainter painter(&image);
    QFont seriFont(myFont);
    painter.setPen(myPenColor);
    painter.setFont(seriFont);
    painter.drawText(at, myText);

    update();
}

void ScribbleArea::setMyFont(const QFont &value)
{
    myFont = value;
}

bool ScribbleArea::getEraser() const
{
    return eraser;
}

void ScribbleArea::setEraser(bool value)
{
    eraser = value;
}

void ScribbleArea::setColor (const QColor &value)
{
    myPenColor = value;
}

void ScribbleArea::setText (const QString &value)
{
    myText = value;
}

int ScribbleArea::setPenWidth(int value)
{
    myPenWidth = value;
    return myPenWidth;
}

