#ifndef CAMERA_H
#define CAMERA_H

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

enum CAMERA_MOVEMENT {
    CAMERA_FORWARD,
    CAMERA_BACKWARD,
    CAMERA_LEFT,
    CAMERA_RIGHT,
    CAMERA_UP,
};

class Cmaera {
    public:

    private:
        glm::vec3 Cam_Position;
        glm::vec3 Cam_Front;
        glm::vec3 Cam_Up;
        glm::vec3 Cam_Right;
        glm::vec3 Cam_WorldUp;

        float Cam_Yaw;
        float Cam_Pitch;
        float Cam_MovementSpeed;
        float Cam_MouseSensitivity;
        float Cam_Zoom;
};

#endif