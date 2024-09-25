
---

# cub3d

**Done with @augustin06130**

## Description

`cub3d` is a 2D raycasting game engine inspired by the classic Wolfenstein 3D. The project implements a 3D rendering engine using raycasting techniques, allowing players to navigate through a maze-like environment. The objective is to demonstrate a solid understanding of graphics programming, game development, and handling user input.

## Features

- **Raycasting Engine**: Implements a raycasting algorithm to render a 3D view from a 2D map.
- **Player Movement**: Allows players to move and look around the environment using keyboard and mouse inputs.
- **Textured Walls**: Supports wall texturing to enhance visual realism.

## Bonus Features

- **Mini-map**: Displays a mini-map for navigation within the game.
- **Multiple Textures**: Supports different textures for various wall types, adding diversity to the environment.
- **Doors**: Integrates doors with sprites animations, enriching the gameplay experience.
- **Lighting Effects**: Implements basic lighting effects to create depth and atmosphere in the game.

## Key Technologies

- **C Programming Language**: The primary language used for implementing the game engine.
- **MiniLibX**: A simple graphics library used for rendering and handling window management.
- **Makefile**: Automates the compilation process for easier project management.

## Learning Outcomes

- Gained experience in implementing a 3D rendering engine and understanding raycasting principles.
- Developed skills in handling user input and managing game state.
- Learned to work with external libraries for graphics rendering.

## Important Note

**This project is designed to work only on Linux.** Ensure you have the MiniLibX library installed and configured correctly on your Linux environment before attempting to run the game.

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/Bidiche49/cub3d
   cd cub3d
   ```
2. Compile the project:
   ```bash
   make bonus
   ```
3. Run the game:
   ```bash
   ./cub3d_bonus map.cub
   ```

   Replace `map.cub` with the name of your map file.

## Example Usage

To run the game with a specific map:
```bash
./cub3d_bonus maps/map1_bonus.cub
```

## Compilation

To compile the project:
```bash
make
```

---
