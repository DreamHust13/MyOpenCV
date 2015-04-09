#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
int main()
{
	//读入一张图片(汽车图像)
	Mat img = imread("car.jpg");
	//创建名为“游戏原画”窗口
	namedWindow("汽车原图");
	imshow("汽车原图",img);	
	//等待6000ms后窗口自动关闭
	waitKey(6000);
}