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

    namedWindow("【原图】" );
    namedWindow("BOX【效果图】");
    namedWindow("Blur【效果图】");
    namedWindow("GaussianBlur【效果图】");

    Mat srcImg = imread("../imgs/a.jpeg");
    imshow("【原图】" , srcImg);

    Mat Boxout;
    cv::boxFilter(srcImg, Boxout, -1, cv::Size(7,7));
    imshow("BOX【效果图】", Boxout);

    Mat Blurout;
    cv::blur(srcImg, Blurout, Size(7,7));
    imshow("Blur【效果图】", Boxout);

    Mat GaussianBlurout;
    cv::GaussianBlur(srcImg, GaussianBlurout, Size(7,7), 0,0);
    imshow("GaussianBlur【效果图】", GaussianBlurout);

    return a.exec();
}
