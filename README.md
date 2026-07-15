# Project Lambscrest

> A top-down 2D pixel-art action adventure built from scratch in modern C++ using SDL2.

## About

Project Lambscrest is a long-term game development project focused on building a complete game while deepening my understanding of modern C++, software engineering, and game programming.

Instead of relying on an existing game engine, this project uses SDL2 to implement core game systems from the ground up. The goal is to continuously improve the project over time while applying clean architecture and best development practices.

---

## Current Features

- SDL2 window creation
- Hardware-accelerated rendering
- Frame-independent movement using Delta Time
- Object-oriented `Player` class
- Separated input, update, and rendering logic
- CMake + Ninja build system

---

## Planned Features

- Player sprites and animations
- Camera system
- Tile-based world
- Collision detection
- Inventory system
- Combat mechanics
- Enemy AI
- NPC interactions
- Audio system
- Save & Load functionality

---

## Tech Stack

| Component | Technology |
|-----------|------------|
| Language | C++23 |
| Graphics | SDL2 |
| Build System | CMake + Ninja |
| Compiler | GCC (MSYS2 UCRT64) |
| IDE | Visual Studio Code |

---

## Project Structure

```text
Project-Lambscrest/
│
├── assets/
│   ├── audio/
│   ├── fonts/
│   └── textures/
│
├── build/
│
├── include/
│   └── Player.h
│
├── src/
│   ├── main.cpp
│   └── Player.cpp
│
├── .gitignore
├── CMakeLists.txt
└── README.md
```

---

## Requirements

- CMake
- Ninja
- GCC (MSYS2 UCRT64)
- SDL2
- SDL2_image
- SDL2_ttf
- SDL2_mixer

---

## Building

### Configure

```bash
cmake -B build -G Ninja
```

### Build

```bash
cmake --build build
```

### Run

Execute the generated executable from the `build` directory.

---

## Learning Goals

This project serves as a practical way to improve my understanding of:

- Modern C++
- Object-Oriented Programming
- Game Architecture
- SDL2
- Real-time Rendering
- Delta Time
- Resource Management
- Software Engineering Principles
- Game Development Best Practices

---

## Roadmap

- [x] SDL2 initialization
- [x] Window creation
- [x] Hardware renderer
- [x] Delta time implementation
- [x] Player class
- [x] Input handling
- [ ] Texture loading
- [ ] Sprite rendering
- [ ] Animation system
- [ ] Camera
- [ ] Tile map
- [ ] Collision
- [ ] Inventory
- [ ] Combat
- [ ] Enemy AI
- [ ] NPCs
- [ ] Audio
- [ ] Saving & Loading

---

## Project Status

🚧 **Early Development**

Project Lambscrest is currently in the early stages of development. New systems and features will be added incrementally as the project evolves.

---

## License

A license will be selected before the first public release.