#include "simulation.h"

CameraController cc;

void SimulationInit(Simulation *sim) {
  sim->bodyCount = 0;

  Body body1 = {1,
                {0.0f, 0.0f, 0.0f},
                {0.0f, 0.0f, 0.0f},
                {0.0f, 0.0f, 0.0f},
                15.0f,
                2.0f,
                SKYBLUE,
                true};

  Body body2 = {2,
                {20.0f, 20.0f, 0.0f},
                {0.0f, 0.0f, 0.0f},
                {0.0f, 0.0f, 0.0f},
                10.0f,
                4.0f,
                RED,
                true};

  _AddBody(sim, body1);
  _AddBody(sim, body2);

  CameraInit(&cc);
}

void SimulationUpdate(Simulation *sim) { CameraUpdate(&cc); }

void SimulationDraw(Simulation *sim) {
  BeginDrawing();

  BeginMode3D(GetCamera(&cc));

  DrawBodies(sim->bodies, 2);
  DrawGrid(500, 10.0f);

  EndMode3D();

  EndDrawing();
}

void SimulationShutdown(Simulation *sim) { CloseWindow(); }

bool _AddBody(Simulation *sim, Body body) {
  if (sim->bodyCount >= MAX_BODIES) {
    return false;
  }

  sim->bodies[sim->bodyCount] = body;
  sim->bodyCount++;

  return true;
}
