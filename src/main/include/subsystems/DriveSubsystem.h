// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>

#include <ctre/Phoenix.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>

using ctre::phoenix::motorcontrol::can::WPI_TalonSRX;

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();
  DriveSubsystem(bool square);

  void drive(double speed, double rotation);
  void squareInputs(bool square);

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  WPI_TalonSRX leftFront{2};
  WPI_TalonSRX leftRear{5};
  WPI_TalonSRX rightFront{3};
  WPI_TalonSRX rightRear{6};
  frc::MotorControllerGroup left{leftFront, leftRear};
  frc::MotorControllerGroup right{rightFront, rightRear};
  frc::DifferentialDrive driveTrain{left, right};  

  bool squaring;
};
