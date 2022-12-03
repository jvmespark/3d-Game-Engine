#include "camera.h"

Camera::Camera() {
    Cam_Position = glm::vec3(0.0f, 0.0f, 0.0f);
    Cam_WorldUp = glm::vec3(0.0f, 1.0f, 0.0f);
    Cam_Yaw = -90.0f;
    Cam_Pitch = 0.0f;
}