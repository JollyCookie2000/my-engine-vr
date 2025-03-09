# MyEngineVR

***This README is still work in progress***

An OpenGL game engine library for VR applications.

![](./screenshot.png)

MyEngineVR is a game engine library written in C++ that allows you to easily
create games using OpenGL with support for virtual reality through OpenVR.

Besides the game engine itself, this project also contains a playable demo of
the Rush Hour game.

**Note that the game engine requires the use of a virtual reality headset; it
does not work without.**

**This project was developed as part of my university's curriculum and is
complete. At this moment, I do not plan on working on it further.**

## Repository structure

* `/client/`: A demo project in the form of the Rush Hour game.
* `/dependencies/`: The Windows dependencies required to build the project
  using Visual Studio.
* `/engine/`: The source code for the game engine library.
* `/game.sln`: The Visual Studio 22 solution for building both the
  demo and the game engine library.
* `game.workspace`: The Code::Blocks (TODO: version) workspace for building
  both the demo and the game engine library.

## Build

These instructions are for only building the engine. For building the demo
project, see the dedicated section.

The following development libraries are required:
* FreeGLUT 3.4.0
* FreeImage 3.18.0
* GLEW 2.1.0
* GLM 1.0.1
* SteamVR 2.5.1
* C++ 14

### Windows

The Windows dependencies are already included in the repository inside the
`/dependencies/` directory.

Building on Windows requires Visual Studio 2022.

1. Open the `game.sln` solution file in the root of the repository.
2. Make sure that the *x64* platform is selected.
3. Choose a configuration between *Debug* or *Release*.
4. Right click on the *engine* project and select *Build*.
5. The include files for the game engine library are in the `/engine/`
   directory.
6. The built library files (lib and DLL) are in the `/x64/Debug/` directory.

### Linux

Building on Windows requires Code::Blocks (TODO: version).

#### Fedora 41

On Fedora 41, use the following command to install the dependencies:
`sudo dnf install ...`.

#### Ubuntu (TODO: version)

On Ubuntu (TODO: version), use the following command to install the
dependencies: `sudo apt install ...`.

### Documentation

The documentation for the engine library can be generated with Doxygen using
the following command: `doxygen ./engine/doxygen.conf`. The generated HTML and
LaTeX documentation will be placed in the `/doc/` directory.

## Demo

The Windows dependencies are already included in the repository inside the
`/dependencies/` directory.

Building on Windows requires Visual Studio 2022.

SteamVR is required to run the demo. It can be downloaded through Steam
[here](https://store.steampowered.com/app/250820/SteamVR/).

A VR headset is required. It is possible to use
[ALVR](https://github.com/alvr-org/ALVR) and
[PhoneVR](https://github.com/PhoneVR-Developers/PhoneVR) to turn an Android
phone into a VR headset.

1. Open the `game.sln` solution file in the root of the repository.
2. Make sure that the *x64* platform is selected.
3. Choose a configuration between *Debug* or *Release*.
4. Right click on the *client* project and select *Set as Startup Project*.
5. Run the solution with or without debug mode.

Inside the demo, you can use the following keys:
* *B*, *N* and *M* to switch between levels.
* *W*, *A*, *S* and *D* to move the highlighted car.
* *1* to *9* to select a car.
* *I* to change camera position.

## Usage

TODO

## Example

```C++
// TODO
```

![](./demo.gif)
