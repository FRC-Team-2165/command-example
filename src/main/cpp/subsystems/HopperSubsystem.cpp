#include "subsystems/HopperSubsystem.h"

HopperSubsystem::HopperSubsystem() {
    reverse();
}

void HopperSubsystem::forward() {
    hopperSolenoid.Set(frc::DoubleSolenoid::Value::kForward);
    state = true;
}
void HopperSubsystem::reverse() {
    hopperSolenoid.Set(frc::DoubleSolenoid::Value::kReverse);
    state = false;
}

void HopperSubsystem::toggle() {
    if(state) {
        reverse();
    } else {
        forward();
    }
}

bool HopperSubsystem::position() {
    return state;
}

