#include "stdafx.h"

#include <opencv2/opencv.hpp>

int main()
{
	
	cv::Mat src = cv::imread("C:\\temp\\Mandrill.BMP", cv::IMREAD_UNCHANGED);
	
	cv::Mat dst;

	
	cv::threshold(src, dst, 0, 255, cv::THRESH_OTSU);

	cv::imshow("SrcImage", src);
	
	cv::imshow("DstImage", dst);

	
	cv::waitKey(0);

	return 0;
}