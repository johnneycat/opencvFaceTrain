#include "widget.h"
#include <QApplication>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();

    Mat dst,edge,gray;

    Mat srcImg = imread("../imgs/a.jpeg");
//    Mat destImg;
//    Canny(srcImg, destImg,100, 300);
    dst.create(srcImg.size(), srcImg.type());
    cvtColor(srcImg, gray, CV_BGR2GRAY);

    blur(gray, edge, Size(3,3));

    Canny(edge, edge, 3,9,3);

    dst = Scalar::all(0);
    srcImg.copyTo( dst, edge);

    imshow("【效果图】Canny边缘检测2", dst);

    return a.exec();
}
