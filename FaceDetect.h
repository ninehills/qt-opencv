#ifndef FACEDETECT_H
#define FACEDETECT_H

// Qt header files
#include <QtGui>
#include <QDebug>
// OpenCV header files
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>

int faceDetect(IplImage *, double);

#endif // FACEDETECT_H
