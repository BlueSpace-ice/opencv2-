//#include"源.hpp"
//
//class Triangle {
//public:
//    cv::Point2f p1, p2, p3;
//    Triangle(cv::Point2f p1, cv::Point2f p2, cv::Point2f p3) : p1(p1), p2(p2), p3(p3) {}
//};
//
//class ImageProcessor {
//private:
//    int capcols, caprows;
//    int mean_lenth = 0;
//    std::vector<cv::Point2f> vertices3;
//    std::ofstream myfile, myfile2;
//public:
//    ImageProcessor() {
//        myfile.open("D:\\桌面\\output.txt");
//        myfile2.open("D:\\桌面\\output2.txt");
//    }
//
//    //把角度转换成统一的
//    double transf(double a) {
//        if (a < 0)
//            return 180.0 + a;
//        else if (a >= 180)
//            return 0;
//        else
//            return a;
//    }
//
//    //图像预处理
//    Mat precessing(Mat image) {
//        Mat gray;
//#if COLOR==1
//        inRange(image, Scalar(230, 230, 230), Scalar(255, 255, 255), gray);
//#elif COLOR==0        
//        inRange(image, Scalar(27, 31, 191), Scalar(117, 180, 255), gray);
//#elif
//        inRange(image, Scalar())
//#endif
//            cv::namedWindow("gray", WINDOW_NORMAL);
//        cv::imshow("gray", gray);
//        cv::waitKey(1);
//        return gray;
//    }
//
//    //计算差异最小的三个数
//    void find_min_diff_indices(double arr[], int n, int& ind1, int& ind2, int& ind3) {
//        double min_var = numeric_limits<double>::infinity();
//        int idx1 = -1, idx2 = -1, idx3 = -1;
//        for (int i = 1; i < n - 1; i++) {
//            double mean = (arr[i - 1] + arr[i] + arr[i + 1]) / 3.0;
//            double variance = ((arr[i - 1] - mean) * (arr[i - 1] - mean) + (arr[i] - mean) * (arr[i] - mean) + (arr[i + 1] - mean) * (arr[i + 1] - mean)) / (mean * mean * mean);
//            if (variance < min_var) {
//                min_var = variance;
//                idx1 = i - 1;
//                idx2 = i;
//                idx3 = i + 1;
//            }
//        }
//        ind1 = idx1;
//        ind2 = idx2;
//        ind3 = idx3;
//    }
//
//    //计算差异最小的三个角度
//    void find_min_diff_angles(double arr[], int n, int& ind1, int& ind2, int& ind3) {
//        double min_var = numeric_limits<double>::infinity();
//        int idx1 = -1, idx2 = -1, idx3 = -1;
//        for (int i = 1; i < n - 1; i++) {
//            double mean = (arr[i - 1] + arr[i] + arr[i + 1]) / 3.0;
//            double variance = abs(arr[i - 1] - mean) + abs(arr[i] - mean) + abs(arr[i + 1] - mean);
//            if (variance < min_var) {
//                min_var = variance;
//                idx1 = i - 1;
//                idx2 = i;
//                idx3 = i + 1;
//            }
//        }
//        ind1 = idx1;
//        ind2 = idx2;
//        ind3 = idx3;
//    }
//
//    //返回最小差异角的平均值
//    double findMinangles(vector<double>& angles) {
//        if (angles.size() < 3) {
//            return 0;
//        }
//        double nums[10] = { 0 };
//        int min1 = min((int)angles.size(), 10);
//        for (int i = 0; i < min1; i++)
//            nums[i] = angles[i];
//        int n = min1;
//        int idx1, idx2, idx3;
//        find_min_diff_angles(nums, n, idx1, idx2, idx3);
//        if (idx1 >= angles.size() || idx2 >= angles.size() || idx3 >= angles.size()) {
//            return 0;
//        }
//        angles.push_back(INF);
//        angles.erase(angles.begin() + idx1);
//        angles.erase(angles.begin() + idx2 - 1);
//        angles.erase(angles.begin() + idx3 - 2);
//        double ans = (nums[idx1] + nums[idx2] + nums[idx3]) / 3.0;
//        return ans;
//    }
//
//    //找四个顶点，返回四个顶点的vector
//    vector<Point2f> findApexs(vector<RotatedRect> minRect, vector<vector<cv::Point>> contours, vector<Triangle> triangles, vector<int> index) {
//        //中心坐标计算
//        //...
//    }
//};
//
