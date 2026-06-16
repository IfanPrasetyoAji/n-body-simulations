#pragma once
#include "raylib.h"

typedef struct {
  Camera3D cam;
  float distance;
  float pitch;
  float yaw;
} CameraController;

void CameraInit(CameraController *cc);
void CameraUpdate(CameraController *cc);
Camera3D GetCamera(CameraController *cc);
