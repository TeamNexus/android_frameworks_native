/*
 * Copyright (C) 2018 TeamNexus
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

#ifndef SURFACEFLINGER_COLORMATRIXLOGIC_H_INCLUDED
#define SURFACEFLINGER_COLORMATRIXLOGIC_H_INCLUDED

#include <math/mat4.h>

namespace android {

class ColorMatrixLogic
{
public:
    /**
     * Initializes the logic
     */
    ColorMatrixLogic();

    /**
     * Cleans up the logic
     */
    ~ColorMatrixLogic();

    /**
     * Requests an color-manipulation
     */
    int update(const mat4 colorMatrix);
};

} // android

#endif // SURFACEFLINGER_COLORMATRIXLOGIC_H_INCLUDED
