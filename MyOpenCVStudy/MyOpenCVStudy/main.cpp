#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
int main()
{
	//����һ��ͼƬ(����ͼ��)
	Mat img = imread("car.jpg");
	//������Ϊ����Ϸԭ��������
	namedWindow("����ԭͼ");
	imshow("����ԭͼ",img);	
	//�ȴ�6000ms�󴰿��Զ��ر�
	waitKey(6000);
}