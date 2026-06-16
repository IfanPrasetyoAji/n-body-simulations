#pragma once
#include "../physics/body.h"
#include "../renderer/renderer.h"
#include "camera.h"
#include "raylib.h"

#define MAX_BODIES 1000000

typedef struct {
  Body bodies[MAX_BODIES];
  int bodyCount;
  float timeScale;
} Simulation;

void SimulationInit(Simulation *sim);
void SimulationUpdate(Simulation *sim);
void SimulationDraw(Simulation *sim);
void SimulationShutdown(Simulation *sim);

bool _AddBody(Simulation *sim, Body body);
