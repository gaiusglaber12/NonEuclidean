#pragma once
#include "Object.h"
#include "Resources.h"

class Cube : public Object {
public:
    Cube() {
        mesh = AquireMesh("cube.obj");
        shader = AquireShader("texture");
        texture = AquireTexture("checker_gray.bmp");
        scale = Vector3(10, 1, 10);
    }
    Cube(const char* texturepath) {
        mesh = AquireMesh("cube.obj");
        shader = AquireShader("texture");
        texture = AquireTexture(texturepath);
        scale = Vector3(10, 1, 10);
    }
    virtual ~Cube() {}
};
