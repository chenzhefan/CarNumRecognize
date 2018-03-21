#pragma once

#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <time.h> 
#include <opencv2/core/core.hpp>
#include<opencv2/nonfree/nonfree.hpp>
#include <opencv2/nonfree/features2d.hpp>
#include<opencv2/legacy/legacy.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/ml/ml.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/gpu/gpu.hpp>



using namespace cv;
using namespace std;

void predictann(Mat testroi);
void ann10(Mat testroi);
wchar_t* StringToWchar(const string& s);
wchar_t* CharToWchar(const char* c);
char* WcharToChar(const wchar_t* wp);
int getOne(Mat& inimg);
int cutLeft(Mat& src, int Tsum, int right);  //左右切割
int getColSum(Mat& bimg, int col);