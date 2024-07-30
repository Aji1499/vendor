#pragma once
#include "aidl/vendor/hardware/fancontroller/BnFancontroller.h"
namespace aidl{
    namespace vendor{
        namespace hardware {
            namespace fancontroller{
                class FanSpeedControl : public BnFancontroller{
                public:
                     int fanSpeed=1;
                    bool fanOn = false;

                    ndk::ScopedAStatus increaseFanSpeed(bool* _aidl_return);
                    ndk::ScopedAStatus decreaseFanSpeed(bool* _aidl_return);
                    ndk::ScopedAStatus turnFanOn(bool* _aidl_return);
                    ndk::ScopedAStatus turnFanOff(bool* _aidl_return);
                    ndk::ScopedAStatus getFanSpeed(int32_t* _aidl_return);
                    ndk::ScopedAStatus isFanOn(bool* _aidl_return);
                };
            }
        }
    }
}
