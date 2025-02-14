#pragma once
#include "Scene.h"

class Level1 : public Scene {
public:
  virtual void Load(PObjectVec& objs, PPortalVec& portals, Player& player) override;
  void CreateWall(Vector3 position, Vector3 scale, PObjectVec& objs, Vector3 rotation);
};
