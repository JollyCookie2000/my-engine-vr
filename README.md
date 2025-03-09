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
* `/game.sln`: The Visual Studio (TODO: version) solution for building both the
  demo and the game engine library.
* `game.workspace`: The Code::Blocks (TODO: version) workspace for building
  both the demo and the game engine library.

## Build

### Windows

* Dependencies
* Visual Studio

### Linux

* Dependencies
* Code::Blocks

#### Fedora 41

On Fedora 41, use the following command to install the dependencies:
`sudo dnf install ...`.

#### Ubuntu (TODO: version)

On Ubuntu (TODO: version), use the following command to install the
dependencies: `sudo apt install ...`.

### Documentation

TODO: Explain how to build the Doxygen documentation.

The documentation for the engine library can be generated with Doxygen using
the following command: `doxygen `.

## Demo

* How to play the demo
* VR requirements
* SteamVR

## Usage

## Example

* Simple rotating cube
* Include gif

```C++
#include <my_engine.hpp>

int main() {
	while (MyEngine::is_running())
	{
		MyEngine::update();

		MyEngine::clear_screen();
		MyEngine::render();
		MyEngine::swap_buffers();
	}

	MyEngine::quit();

	return 0;
}
```
