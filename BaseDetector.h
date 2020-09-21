#ifndef BASEDETECTOR_H
#define BASEDETECTOR_H

#include <opencv2/dnn.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include "result_struct.h"

class BaseDetector
{
public:

    BaseDetector();
    virtual void Init(cv::Mat& firstFrame) = 0;
    virtual std::vector<cv::Rect> Update(cv::Mat* frame) = 0;

    DetectorType GetDetectorType()
    {
        return detectorType;
    };

protected:
    DetectorType detectorType;
};

BaseDetector* CreateDetector(DetectorType dt);

#endif // BASETRACKER_H
