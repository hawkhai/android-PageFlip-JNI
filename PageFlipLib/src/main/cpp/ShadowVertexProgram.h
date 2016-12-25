/*
 * Copyright (C) 2016 eschao <esc.chao@gmail.com>
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

#ifndef ANDROID_PAGEFLIP_SHADOWVERTEXPROGRAM_H
#define ANDROID_PAGEFLIP_SHADOWVERTEXPROGRAM_H

#include "GLProgram.h"

namespace eschao {

class ShadowVertexProgram : public GLProgram {

public:
    ShadowVertexProgram();
    virtual ~ShadowVertexProgram();

    int init();
    virtual void clean();

    inline GLint mvpMatrixLoc() {
        return mMVPMatrixLoc;
    }

    inline GLint vertexZLoc() {
        return mVertexZLoc;
    }

    inline GLint vertexPosLoc() {
        return mVertexPosLoc;
    }

protected:
    virtual void getVarsLocation();

protected:
    GLint mMVPMatrixLoc;
    GLint mVertexZLoc;
    GLint mVertexPosLoc;
};

}
#endif //ANDROID_PAGEFLIP_SHADOWVERTEXPROGRAM_H
