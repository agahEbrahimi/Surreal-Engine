#include <iostream>
#include "headers/camera.h"
#include "headers/mesh.h"
#include "headers/application.h"

using namespace std;

int main(){
    Mesh m = Mesh("Cube");

    Application app;

    app.loop();

    return 1;    
}