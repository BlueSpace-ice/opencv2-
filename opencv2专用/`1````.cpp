//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <fstream>
//#include <sstream>
//
//using namespace std;
//using namespace cv;
//
//// ȫ�ֱ���
//Mat image;
//Point pt1, pt2;
//
//// ���ص�����
//void mouseCallback(int event, int x, int y, int flags, void* userdata)
//{
//    if (event == EVENT_LBUTTONDOWN)
//    {
//        if (pt1.x == -1)
//        {
//            pt1 = Point(x, y);
//        }
//        else if (pt2.x == -1)
//        {
//            pt2 = Point(x, y);
//        }
//    }
//}
//
//// ��ȡֱ���ϵ����ص��RGBֵ
//std::vector<Vec3b> getLinePixels(const Mat& image, const Point& pt1, const Point& pt2)
//{
//    std::vector<Vec3b> pixels;
//
//    // ����ֱ���ϵ��������ص�
//    LineIterator it(image, pt1, pt2, 8);
//
//    for (int i = 0; i < it.count; i++, ++it)
//    {
//        Point pos = it.pos();
//        pixels.push_back(image.at<Vec3b>(pos.y, pos.x));
//    }
//    line(image, pt1, pt2, Scalar(255, 255, 255), 3, 8, 0);
//
//    return pixels;
//}
//
//void handleimage()
//{
//    
//    image = imread("F:\\weixin file\\WeChat Files\\wxid_072jqqmnkts422\\FileStorage\\File\\2023-06\\1\\second\\1 (33).jpg");
//
//    // ��ʼ��������
//    pt1 = Point(-1, -1);
//    pt2 = Point(-1, -1);
//    namedWindow("Image", WINDOW_NORMAL);
//    // �������ص�����
//    setMouseCallback("Image", mouseCallback);
//
//    // ��ʾͼ��
//    imshow("Image", image);
//
//    // �ȴ�ѡ��������
//    while (pt1.x == -1 || pt2.x == -1)
//    {
//        waitKey(1);
//    }
//
//    // ������
//    vector<Vec3b> ans = getLinePixels(image, pt1, pt2);
//
//    std::stringstream output;
//    cout << "Point1:" << pt1.x << ", " << pt1.y << ")" << std::endl;
//    cout << "Point 2:" << pt2.x << ", " << pt2.y << ")" << std::endl;
//    output << endl << "RGBֵ" << endl;
//    for (int i = 0; i < ans.size(); i++)
//        output << ans[i] << endl;
//    output << endl << "ans.size():" << ans.size() << endl;
//
//    std::string imagePath = "F:\\weixin file\\WeChat Files\\wxid_072jqqmnkts422\\FileStorage\\File\\2023-06\\1\\1 (1).jpg";
//    std::string txtPath = imagePath + ".txt";
//    std::ofstream outputFile(txtPath);
//    if (outputFile.is_open()) {
//        outputFile << output.rdbuf();
//        outputFile.close();
//        std::cout << "000000" << std::endl;
//    }
//    else {
//        std::cout << "9999" << std::endl;
//    }
//
//    destroyAllWindows();
//
//}
//
//int main()
//{
//    handleimage();
//}