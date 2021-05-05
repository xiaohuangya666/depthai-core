#pragma once

#include "opencv2/opencv.hpp"

cv::Mat toMat(const std::vector<uint8_t>& data, int w, int h , int numPlanes, int bpp);
void toPlanar(cv::Mat& bgr, std::vector<std::uint8_t>& data);
cv::Mat resizeKeepAspectRatio(const cv::Mat &input, const cv::Size &dstSize, const cv::Scalar &bgcolor);

// Disparity to depth conversion helpers
void createDisparityToDepthLut(std::vector<std::uint16_t>& lut, int maxDisparity, int width, float baselineCm, float fovDeg);
cv::Mat convertDisparityToDepth(const cv::Mat& disparity, const std::vector<std::uint16_t>& lut);
