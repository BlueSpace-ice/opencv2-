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
//    std::string sourcePath = "D:/桌面/wanghong";
//    std::string destinationPath = "D:/桌面/wanghong_handle";
//
//    // 创建目标文件夹
//    fs::create_directory(destinationPath);
//
//    // 遍历源文件夹中的所有文件
//    for (const auto& entry : fs::directory_iterator(sourcePath)) {
//        std::string filePath = entry.path().string();
//
//        // 读取图像文件
//        cv::Mat image = cv::imread(filePath);
//
//        if (!image.empty()) {
//            // 调整图像大小为256x256
//            cv::resize(image, image, cv::Size(256, 256));
//
//            // 获取文件名
//            std::string fileName = fs::path(filePath).filename().string();
//
//            // 构建目标文件路径
//            std::string destinationFilePath = destinationPath + "/" + fileName;
//
//            // 保存调整大小后的图像
//            cv::imwrite(destinationFilePath, image);
//
//            std::cout << "处理完成：" << fileName << std::endl;
//        }
//    }
//
//    std::cout << "所有图片处理完成！" << std::endl;
//
//    return 0;
//}
