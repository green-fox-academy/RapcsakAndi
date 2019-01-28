#include <iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <cmath>
#define PI 3.141592654

using namespace std;
using namespace cv;

Mat image(500,500, CV_8UC3, Scalar(255, 255, 255));


void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
    if  ( event == EVENT_LBUTTONDOWN )
    {
        cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
        circle(image, Point(x, y), 8, Scalar( 0, 0, 0 ), 2, 8, 0);
        line( image, Point(x, y), Point(image.cols/2, image.rows/2), Scalar( 0, 0, 0 ), 2, 8, 0 );
        imshow("Source", image);

        double z, result;

        if(x< image.cols/2 && y< image.rows/2){
           z = ((double)image.rows/2-y)/(image.cols/2-x);
           result = 180-atan(z)*180/PI;
           cout<<"result"<<result<<endl;
        }else if (x>image.cols/2 && y< image.rows/2){
            z = ((double)image.rows/2-y)/(image.cols/2-(image.cols-x));
            result = atan(z)*180/PI;
            cout<<"result"<<result<<endl;
        }else if(x<image.cols/2 && y> image.rows/2){
            z = ((double)image.rows/2-(image.rows-y))/(image.cols/2-x);
            result = 180 + atan(z)*180/PI;
            cout<<"result"<<result<<endl;
        }else if(x>image.cols/2 && y> image.rows/2){
            z = ((double)image.rows/2-(image.rows-y))/(image.cols/2-(image.cols-x));
            result = 360 - atan(z)*180/PI;
            cout<<"result"<<result<<endl;
        }

    }
    else if  ( event == EVENT_RBUTTONDOWN )
    {
        cout << "Right button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
    }
    else if  ( event == EVENT_MBUTTONDOWN )
    {
        cout << "Middle button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
    }
    else if ( event == EVENT_MOUSEMOVE )
    {
        cout << "Mouse move over the window - position (" << x << ", " << y << ")" << endl;

    }
}



int main(int argc, char **argv)
{

    if (image.empty())
    {
        std::cout << "Error opening image" << std::endl;
        return 0;
    }


    int thickness = 2;
    int lineType = 8;
    line( image, Point(image.cols/2, image.rows/2), Point(image.cols, image.rows/2), Scalar( 0, 0, 0 ), thickness, lineType, 0 );
    circle(image, Point(image.cols/2, image.rows/2), 10, Scalar( 0, 0, 0 ), 2, 8, 0);


    namedWindow("Source", WINDOW_AUTOSIZE);
    setMouseCallback("Source", CallBackFunc, NULL);
    imshow("Source", image);
    waitKey(0);

    return 0;
}

