#include "headers/mesh.h"

std::vector<glm::vec3> Mesh::getVertices() {
    return vertices;
}
void Mesh::addVertex(glm::vec3 vertex){
    vertices.push_back(vertex);
}
void Mesh::setVertices(std::vector<glm::vec3> vert){
    vertices = vert;
}
glm::vec3 Mesh::getPosition(){
    return position;    
}
glm::vec3 Mesh::setPosition(glm::vec3 pos){
    position = pos;
}
glm::vec3 Mesh::getRotation(){
    return rotation;
}
glm::vec3 Mesh::setRotation(glm::vec3 rot){
    rotation = rot;
}