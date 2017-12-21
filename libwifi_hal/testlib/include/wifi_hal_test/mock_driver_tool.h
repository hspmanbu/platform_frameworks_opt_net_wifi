/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_WIFI_HAL_MOCK_DRIVER_TOOL_H
#define ANDROID_WIFI_HAL_MOCK_DRIVER_TOOL_H

#include <wifi_hal/driver_tool.h>

namespace android {
namespace wifi_hal {

class MockDriverTool : public DriverTool {
 public:
  ~MockDriverTool() override = default;
  MOCK_METHOD0(LoadDriver, bool());
  MOCK_METHOD0(UnloadDriver, bool());
  MOCK_METHOD0(IsDriverLoaded, bool());
  MOCK_METHOD1(ChangeFirmwareMode, bool(int mode));

};  // class MockDriverTool

}  // namespace wifi_hal
}  // namespace android

#endif  // ANDROID_WIFI_HAL_MOCK_DRIVER_TOOL_H

