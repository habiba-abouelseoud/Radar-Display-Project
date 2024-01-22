# Radar-Display-Project


## Overview

This C++ project implements a computer visualization program for displaying air vehicles on a radar screen. Each vehicle is represented as a small icon composed of pixels. The program includes rendering functions that display the vehicles on the screen using basic pixel and icon objects.

## Features

- Implementation of a `pixel` class to represent individual pixels with X and Y coordinates and a brightness range.
- Implementation of an `icon` class to represent a collection of 16 pixels.
- Implementation of a `displayObject` class to encapsulate the idea of displaying multiple icons.
- Utility functions to initialize and display details of pixels, icons, and display objects.
- Example initialization of vehicle icons such as a red plane and a yellow helicopter.

## Classes

### `pixel` Class

- Represents an individual pixel on the radar screen.
- Member variables: `x_coordinate`, `y_coordinate`, `RangeOfBrightness`.
- Utility function `showPixelDetail` to display pixel details.

### `icon` Class

- Represents a collection of 16 pixels.
- Member variable: `thePixels` array to store pixel details.
- Utility function `showIconDetail` to display icon details.

### `displayObject` Class

- Represents a collection of icons to be displayed.
- Member variables: `noActiveIcons` and `iconsToDisplay` array.
- Example utility functions to initialize and display icon details.

## Usage

- The `main` function includes examples of creating and initializing pixel, icon, and displayObject instances.
- Utility functions such as `initialiseRedPlaneIcon` and `initialiseYellowHeliIcon` demonstrate how to initialize vehicle icons.
- Use the provided utility functions to display details of pixels and icons.

## How to Run

1. Clone the repository: `git clone https://github.com/your-username/radar-display-project.git`
2. Navigate to the project directory: `cd radar-display-project`
3. Compile the code: `g++ -o main main.cpp`
4. Run the executable: `./main`

## Contributing

Contributions, bug reports, and feature requests are welcome! Feel free to open issues or submit pull requests.

## License

This project is under the copyright of H Abouelseoud 
