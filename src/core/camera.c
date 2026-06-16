#include "camera.h"

void CameraInit(CameraController *cc) {
  cc->cam = (Camera3D){0};
  cc->cam.position = (Vector3){5.0f, 5.0f, 5.0f};
  cc->cam.target = (Vector3){0.0f, 0.0f, 0.0f};
  cc->cam.up = (Vector3){0.0f, 1.0f, 0.0f};
  cc->cam.fovy = 45.0f;
  cc->cam.projection = CAMERA_PERSPECTIVE;
  DisableCursor();
}

void CameraUpdate(CameraController *cc) {
  UpdateCamera(&cc->cam, CAMERA_THIRD_PERSON);
}

Camera3D GetCamera(CameraController *cc) { return cc->cam; }
