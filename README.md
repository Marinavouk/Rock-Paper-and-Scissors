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

# Button Class Documentation

The `Button` class is designed to manage a clickable button in an SDL-based game. This documentation provides an overview of its members and methods.

## Class Members

### `Button::Button()`
The constructor initializes a `Button` object with default values:
- `texture`: Set to `nullptr`.
- `mCurrentSprite`: Initialized to `BUTTON_NEUTRAL`.
- `pointPosition`: A struct to hold the x and y coordinates of the button, initialized to (0, 0).
- `buttonRect`: An SDL_Rect structure to define the button's position and size on the screen, initialized to (0, 0, BUTTON_WIDTH, BUTTON_HEIGHT).

### `void Button::setLocation(int xPos, int yPos)`
This method sets the button's position on the screen:
- `xPos`: The x-coordinate where the button is placed.
- `yPos`: The y-coordinate where the button is placed.

### `void Button::render(SDL_Renderer* renderer)`
This method renders the button on the screen:
- `renderer`: The SDL_Renderer used to draw the button.
- If `texture` is not `nullptr`, the texture is rendered using `SDL_RenderCopy`.

### `void Button::setTexture(SDL_Texture* texture)`
This method sets the texture for the button:
- `texture`: An SDL_Texture to be used as the button's image.

### `bool Button::setEvent(SDL_Event* mouseEvent)`
This method handles mouse events for the button and determines if the button has been clicked:
- `mouseEvent`: A pointer to an SDL_Event structure containing the event data.
- Returns `true` if the button was pressed or hovered, `false` otherwise.

#### Detailed Behavior:
1. **Get Mouse State:**
   - Retrieves the current position of the mouse cursor and updates the button's location.
2. **Check Event Type:**
   - If the event is `SDL_MOUSEBUTTONDOWN` or `SDL_MOUSEBUTTONUP`, it checks if the mouse cursor is inside the button's boundaries.
3. **Boundary Check:**
   - If the cursor is outside the button's boundaries, `mCurrentSprite` is set to `BUTTON_NEUTRAL` and `inside` is set to `false`.
4. **Event Handling:**
   - If the cursor is inside the button's boundaries:
     - If the event type is `PRESSED`, it calls `game->HandleEvents(mouseEvent)` and returns `true`.
     - If the event type is `HOVER`, it returns `true`.
   - If the cursor is outside the button's boundaries, `mCurrentSprite` is set to `PRESSED`.

## Dependencies
The `Button` class depends on the following:
- `SDL.h`: The SDL library header for handling rendering and events.
- `Button.h`: The header file for the `Button` class.
- `TextureHandler.h`: For managing textures.
- `Game.h`: For handling game-specific events.

Ensure these dependencies are included in your project to use the `Button` class effectively.


