// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubsystem.h"

DriveSubsystem::DriveSubsystem() : DriveSubsystem(true) {}

DriveSubsystem::DriveSubsystem(bool square) {
  squaring = square;
}

void DriveSubsystem::drive(double speed, double rotation){
  driveTrain.ArcadeDrive(speed, rotation, squaring);
}

void DriveSubsystem::squareInputs(bool square) {
  squaring = square;
}