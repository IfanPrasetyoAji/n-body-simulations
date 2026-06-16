#include "ui.h"
#include <raylib.h>

void PrintBodyData(Body body) {
  DrawText(TextFormat("Body ID: %i", body.id), 10, 10, 20, WHITE);
  DrawText(TextFormat("Mass: %.2f", body.mass), 10, 30, 20, WHITE);
  DrawText(TextFormat("Radius: %.2f", body.radius), 10, 50, 20, WHITE);
  DrawText(TextFormat("Position: (%.2f, %.2f, %.2f)", body.position.x,
                      body.position.y, body.position.z),
           10, 70, 20, WHITE);
  DrawText(TextFormat("Acceleration: (%.2f, %.2f, %.2f)", body.acceleration.x,
                      body.acceleration.y, body.acceleration.z),
           10, 90, 20, WHITE);
  DrawText(TextFormat("Velocity: (%.2f, %.2f, %.2f)", body.velocity.x,
                      body.velocity.y, body.velocity.z),
           10, 110, 20, WHITE);
}
