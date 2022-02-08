#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/DoubleSolenoid.h>

class HopperSubsystem : public frc2::SubsystemBase {
public:
    HopperSubsystem();

    void forward();
    void reverse();
    void toggle();

    bool position();

private:
    bool state;
    frc::DoubleSolenoid hopperSolenoid{frc::PneumaticsModuleType::CTREPCM, 2, 3};
};