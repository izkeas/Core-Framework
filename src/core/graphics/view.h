#pragma once

#include "../system/data.h"
#include "../system/transform.h"
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

namespace core::graphics{

    class View : public Transform{
        public:

        void set_active();

        Matrix4f m_projection_matrix;
    };

    class View2D : public View{ 
        public:

        View2D(float left, float right, float bottom, float top, float near = 0.1f, float far = 100.0f);
    };

    class View3D : public View{
        public:

        View3D(float fov_radians, float aspect_ratio, float near = 0.1f, float far = 100.0f);
    };
}