#include "headers/camera.h"

glm::vec3 Camera::getPosition(){
    return position;
}
glm::vec3 Camera::setPosition(glm::vec3 pos){
    position = pos;
}
glm::vec3 Camera::getTarget(){
    return target;
}
glm::vec3 Camera::setTarget(glm:: vec3 tar){
    target = tar;
}