# Rock Paper Scissors Mini-Game

This project, implemented in C++ using SDL, showcases a dynamic simulation of the classic game Rock Paper Scissors. In this game, 20 instances each of Rock, Paper, and Scissors spawn randomly on the screen and interact according to traditional game rules.

## Concept

The game demonstrates the fundamental principles of Rock Paper Scissors:
- **Rock** loses to **Paper**
- **Paper** loses to **Scissors**
- **Scissors** lose to **Rock**

### Gameplay Mechanics

- **Initialization**: At the start, 20 Rocks, Papers, and Scissors are randomly placed on the screen.
- **Movement**: Each entity moves randomly across the screen.
- **Collision**: When entities collide, they interact and transform based on the rules:
  - Rock becomes Paper when it collides with Paper.
  - Paper becomes Scissors when it collides with Scissors.
  - Scissors become Rock when they collide with Rock.

The game creates an endless cycle of transformation, visually demonstrating the interactions in real-time.

## Features

- **Random Spawning**: Entities are placed randomly at the beginning, ensuring a unique starting configuration each time.
- **Dynamic Interaction**: Real-time collision detection and transformation between entities.
- **Simple and Clean Code Structure**: The project follows clean coding principles with each class and functionality separated into individual header (`.h`) and implementation (`.cpp`) files.

## Project Structure

The project is organized to maintain clean, readable, and maintainable code. Here is an overview of the structure:

rock-paper-scissors-sdl/
├── bin/
│ └── game # Executable file
├── build/ # Build files
├── include/ # Header files
│ ├── Game.h               # Game loop and SDL initialization
│ ├── Rock.h               # Rock entity
│ ├── Paper.h              # Paper entity
│ ├── Scissors.h           # Scissors entity
│ └── Entity.h             # Base class for all entities
├── src/ # Source files
│ ├── Game.cpp             # Game loop and SDL initialization
│ ├── Rock.cpp             # Rock entity implementation
│ ├── Paper.cpp            # Paper entity implementation
│ ├── Scissors.cpp         # Scissors entity implementation
│ └── Entity.cpp           # Base class implementation
├── assets/                # Game assets
│ ├── rock.png             # Rock image
│ ├── paper.png            # Paper image
│ └── scissors.png         # Scissors image
├── Makefile # Build script
└── README.md # Project presentation


## Screenshots

Here are some screenshots demonstrating the game in action:

![Screenshot 1](https://github.com/Marinavouk/Rock-Paper-and-Scissors/blob/main/Screenshot%202024-08-07%20133551.png)
*Initial spawn of Rock, Paper, and Scissors.*

![Screenshot 2](https://github.com/Marinavouk/Rock-Paper-and-Scissors/blob/main/Screenshot%202024-08-07%20133715.png)
*Entities moving and colliding.*

## Future Enhancements

- **Score Tracking**: Implement a scoring system to track the number of transformations.
- **Enhanced Graphics**: Improve the visual representation of the entities and add animations.
- **AI Behavior**: Introduce more complex behaviors and strategies for entity movement.


