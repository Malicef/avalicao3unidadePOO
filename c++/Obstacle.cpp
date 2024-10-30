#include <iostream>
#include <tuple>
#include <cstring>

struct Rect {
    char* rect;
    std::tuple<float, float> topleft;
    std::tuple<int, int> inflate;

    Rect() : rect(nullptr), topleft({0, 0}), inflate({0, 0}) {} // definição de valores padrão para o struct
};

struct Screen {
    char* blit;

    Screen() : blit(nullptr) {} // definição de valores padrão para o struct
};

struct Image {
    char* load;
    std::tuple<int, int> scale;
    char* get_rect;

    Image() : load(nullptr), scale({0, 0}), get_rect(nullptr) {} // definição de valores padrão para o struct
};

class Obstacle {
public:
    Rect rect;
    std::tuple<int, int> obstacleSize;
    float screenWidth;
    int obstacleSpeed;
    bool fall;
    Image image;

    Obstacle(float screenWidth, float screenHeight, std::tuple<int, int> obstacleSize, char* imagePath) {
        this->screenWidth = screenWidth;
        this->obstacleSize = obstacleSize;
        this->obstacleSpeed = obstacleSpeed;
        this->fall = false;
        image.load = imagePath;
        image.scale = obstacleSize;
        rect.rect = image.get_rect;

        rect.topleft = std::make_tuple(screenWidth - std::get<0>(obstacleSize), screenHeight - std::get<1>(obstacleSize) - 45);
        rect.inflate = std::make_tuple(-45, -45);
    }

    void draw(Screen& screen) {
        if (screen.blit) {
            std::strcpy(screen.blit, "(this.image, this.rect)");
        }
    }
};
