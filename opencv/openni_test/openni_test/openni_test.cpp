#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iostream>

using namespace cv;
using namespace std;

int main() {
	cout << "opening device(s)" << endl;

	VideoCapture sensor1;
	sensor1.open(CV_CAP_OPENNI);

	if (!sensor1.isOpened()) {
		cout << "Can not open capture object 1." << endl;
		return -1;
	}

	for (;;) {
		Mat depth1;

		if (!sensor1.grab()) {
			cout << "Sensor1 can not grab images." << endl;
			return -1;
		}
		else if (sensor1.retrieve(depth1, CV_CAP_OPENNI_DEPTH_MAP)) imshow("depth1", depth1);

		if (waitKey(30) == 27)   break;//ESC to exit

	}
}