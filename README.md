# AimSharp™ Deployment Manual

## Project Information

| Project Name     | AimSharp™          |
|------------------|--------------------|
| Mentor           | Rea Sutter         |
| Project Manager  | Ruslan Kotliarenko |
| Developers       | Lukas Bokowy, Ortwin Baldauf, Valentin Fuchs |

## Table of Contents
1. [Overview](#overview)
2. [General Dependencies](#general-dependencies)
3. [System Requirements](#system-requirements)
4. [How to Install Unreal Engine](#how-to-install-unreal-engine)
5. [Installing the Project](#installing-the-project)
6. [Running the Game via Unreal Engine](#running-the-game-via-unreal-engine)
7. [Conclusion](#conclusion)

## Overview
This manual provides step-by-step instructions for deploying the AimSharp™ project, including system requirements, dependencies, and how to run the game using Unreal Engine. 

## General Dependencies
To run the project, Unreal Engine version 5.3.2 is required. All internal project dependencies are managed automatically when cloning the project, provided Git is installed on your PC.

1. Ensure Git is installed:
    - Open a terminal and type `git -v`
2. If Git is not installed, follow the official Git documentation to install it.

## System Requirements
![image](https://github.com/FH-ITP-Summer-2024/aim-sharp/assets/94218081/40b2eea9-cab9-4173-ac46-74c3ad0a1acc)
The system requirements for running the project match those for running Unreal Engine. For detailed information, visit the Unreal Engine documentation.

**Note:** The project was tested on multiple Windows devices, including a laptop with an integrated GPU (Intel Iris), maintaining a stable framerate of 60+ FPS. However, performance can vary based on the debug configuration and system changes.

## How to Install Unreal Engine
![image](https://github.com/FH-ITP-Summer-2024/aim-sharp/assets/94218081/29fdddcc-8241-4a4b-a9aa-aadcecc5fcae)
1. Download Unreal Engine from the [official website](https://www.unrealengine.com).
2. Follow the instructions to install the Epic Games Launcher.
3. Use the launcher to install Unreal Engine version 5.3.2, which is required for this project.

## Installing the Project
![image](https://github.com/FH-ITP-Summer-2024/aim-sharp/assets/94218081/770e50d8-cb08-4e7f-b968-828b0d3638a9)
1. After installing Unreal Engine, download and set up the AimSharp project:
    - Open the official GitHub repository: [AimSharp GitHub Repository](https://github.com/FH-ITP-Summer-2024/aim-sharp.git)
2. Open a terminal and navigate to the desired directory:
    - `cd /path-to-your-folder/`
3. Clone the project:
    - `git clone https://github.com/FH-ITP-Summer-2024/aim-sharp.git`

This will copy all necessary files and dependencies into your project folder, which may take some time.

## Running the Game via Unreal Engine
1. Start Unreal Engine. You should see the following menu:

![image](https://github.com/FH-ITP-Summer-2024/aim-sharp/assets/94218081/ebb2c6a8-5374-4a99-8b16-c9bfc41581ea)

2. Click on the "Browse" button in the bottom right corner and navigate to the folder you just created:

![image](https://github.com/FH-ITP-Summer-2024/aim-sharp/assets/94218081/3dbde9fb-429f-4cf6-8188-63e8a330f66f)

3. Select the Unreal Engine project file and click "Open" to load the project:

![image](https://github.com/FH-ITP-Summer-2024/aim-sharp/assets/94218081/18127f9f-685c-4aa1-a908-6ca8a86c3486)

4. After loading the project, click the green button in the top left to start the inbuilt debug configuration and run the game:

![image](https://github.com/FH-ITP-Summer-2024/aim-sharp/assets/94218081/1f08ac62-b55a-4ebe-b871-78a5a87c9bf4)

5. If successful, the game should look like this:

![image](https://github.com/FH-ITP-Summer-2024/aim-sharp/assets/94218081/b2774682-9ef7-4f69-91d1-9c4ea176d737)


## Conclusion
Following these steps, you will have successfully installed and opened the AimSharp game using Unreal Engine. Enjoy your deployment experience!

For further assistance, please visit the [Official AimSharp Website](https://aim-sharp-web.vercel.app/).
