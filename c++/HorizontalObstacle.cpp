#include <iostream>
#include <cstdlib>
#include "Obstacle.cpp"


class Obstacle {
    public:
        Obstacle(int screen_width, int screen_height, int obstacle_size){

        }
};

using namespace std;

class HorizontalObstacle: public Obstacle{

    public:
        void HorizontalObstacle(int screen_width, int screen_height, int obstacle_size, char *path): Obstacle(screen_width, screen_height, obstacle_size)
        {

        };
    public:
        void update(){
            this->obstacleSpeed = rand() % 20 + 21;
            this->x -= obstacleSpeed;
            if (this->x <0){
                this->x = this.screen_width;
            };
        };
    public:   
        int x;
        int obstacleSpeed;
};
