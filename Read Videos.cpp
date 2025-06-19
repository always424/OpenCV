#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Videos  //////////////////////

void main() {
    
    string path = "Resources/test_video.mp4";

    VideoCapture cap(path);

    Mat img;

    while(1) {
        cap.read(img);
        imshow("IMG", img);
        waitKey(10);
    }


}
