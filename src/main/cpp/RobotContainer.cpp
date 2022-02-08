// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include <frc2/command/button/JoystickButton.h>

RobotContainer::RobotContainer() : m_driveCommand(&m_subsystem, &stick) {
  m_subsystem.SetDefaultCommand(m_driveCommand);  

  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
  frc2::JoystickButton(&stick, 1).WhenPressed([this] {hopper.toggle();});
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return nullptr;
}
