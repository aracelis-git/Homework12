# ROS Walker Algorithm Homework

## Overview 

This ROS program creates a simulated robot through Gazebo. The robot has the ability to avoid collisions within the world through the use of its laser sensor and planning algorithm.

## Build/Run Steps

To execute the program, first build the program by running 

	catkin_make
	
within the root directory. 

	source ./devel/setup.bash
	roslaunch walker_homework walker_algorithm.launch
	
Once the Gazebo window opens and loads the robot simulation, the robot will automatically move throughout the world and avoid objects.

## Dependencies

Requires ROS Indigo and Linux OS.

## License

Copyright 2017 Aldrin I. Racelis

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
