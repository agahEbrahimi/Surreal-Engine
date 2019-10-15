#include <string>
#include "glm/vec3.hpp"
#include "vector"

class Mesh{
    public:
        std::vector<glm::vec3> getVertices();
        void setVertices(std::vector<glm::vec3> vert);
        void addVertex(glm::vec3);
        glm::vec3 getPosition();
        glm::vec3 setPosition(glm::vec3 pos);
        glm::vec3 getRotation();
        glm::vec3 setRotation(glm::vec3 rot);
        Mesh(){};
        Mesh(std::string name) : name(name) {};
    private: 
        std::vector<glm::vec3> vertices;
        std::string name;
        glm::vec3 rotation;
        glm::vec3 position;

};