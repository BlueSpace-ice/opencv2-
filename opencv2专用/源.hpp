//#include <iostream>
//#include <string>
//#include <filesystem>
//#include <opencv2/opencv.hpp>
//
//#pragma warning(disable : 6269)
//
//namespace fs = std::filesystem;
//
//int main() {
//    std::string sourcePath = "D:/����/wanghong";
//    std::string destinationPath = "D:/����/wanghong_handle";
//
//    // ����Ŀ���ļ���
//    fs::create_directory(destinationPath);
//
//    // ����Դ�ļ����е������ļ�
//    for (const auto& entry : fs::directory_iterator(sourcePath)) {
//        std::string filePath = entry.path().string();
//
//        // ��ȡͼ���ļ�
//        cv::Mat image = cv::imread(filePath);
//
//        if (!image.empty()) {
//            // ����ͼ���СΪ256x256
//            cv::resize(image, image, cv::Size(256, 256));
//
//            // ��ȡ�ļ���
//            std::string fileName = fs::path(filePath).filename().string();
//
//            // ����Ŀ���ļ�·��
//            std::string destinationFilePath = destinationPath + "/" + fileName;
//
//            // ���������С���ͼ��
//            cv::imwrite(destinationFilePath, image);
//
//            std::cout << "������ɣ�" << fileName << std::endl;
//        }
//    }
//
//    std::cout << "����ͼƬ������ɣ�" << std::endl;
//
//    return 0;
//}
