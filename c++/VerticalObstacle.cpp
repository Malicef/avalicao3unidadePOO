#include <iostream>
#include <cstdlib>
#include "Obstacle.cpp"

using namespace std;

class VerticalObstracle : public Obstacle {

public:
    void VerticalObstacle (int screen_width, int screen_height, int obstacle_size, const char* image_path): Obstacle(screen_width, screen_height, obstacle_size, image_path)
{

};
public: 
void update() {
   this.obstacleSpeed = 30 + rand() % 31;
   this.y += this.obstacleSpeed;
   if(this.y<0){
    this.y = this.screen_width;
   };
   
   };
};
