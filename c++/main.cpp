#include "Obstacle.cpp"

int main() {
    char imgPath[] = "path/to/image.png";
    Obstacle obstacle(800.0f, 600.0f, {50, 50}, imgPath);

    Screen screen;
    char blit_buffer[50];
    screen.blit = blit_buffer;

    obstacle.draw(screen);

    std::cout << "Screen blit result: " << screen.blit << std::endl;

    return 0;
}