#include "BaseDetector.h"
#include "Detector/BackgroundSubtract.h"
#include "Detector/SSDMobileNetDetector.h"
#include "Detector/YoloDetector.h"

BaseDetector::BaseDetector()
{

}

BaseDetector* CreateDetector(DetectorType dt)
{
    BaseDetector* detector;
    switch (dt) {
    case DetectorType::Vibe:
        detector = new BackgroundSubtract();
        break;
    case DetectorType::YOLO:
        detector = new YoloDetector();
        break;
    case DetectorType::SSDMobileNet:
        detector = new SSDMobileNetDetector();
        break;
    }

    return detector;
}
