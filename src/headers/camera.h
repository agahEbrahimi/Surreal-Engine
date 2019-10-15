#include <string>
#include "glm/vec3.hpp"
#include "vector"

using namespace std;

class Camera{
    public:
        glm::vec3 getPosition();
        glm::vec3 setPosition(glm::vec3 pos);
        glm::vec3 getTarget();
        glm::vec3 setTarget(glm:: vec3 pos);
        Camera() {}
    private: 
        glm::vec3 position;
        glm::vec3 target;
};