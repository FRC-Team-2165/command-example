// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/DriveCommand.h"

DriveCommand::DriveCommand(DriveSubsystem* subsystem, frc::Joystick* stick)
    : m_subsystem{subsystem}, m_stick{stick} {
    AddRequirements(subsystem);
}

void DriveCommand::Execute() {
    m_subsystem->drive(m_stick->GetY(), m_stick->GetZ());
}