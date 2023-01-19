#pragma once

#include <frc/simulation/SimDeviceSim.h>
#include <hal/SimDevice.h>


class AHRSSim
{
public:
    AHRSSim();

    bool GetConnected() const;
    void SetConnected(bool connected);

    double GetRate() const;
    void SetRate(double rate);

    double GetYaw() const;
    void SetYaw(double yaw);

    double GetPitch() const;
    void SetPitch(double pitch);

    double GetRoll() const;
    void SetRoll(double roll);

    double GetCompassHeading() const;
    void SetCompassHeading(double compassHeading);

    double GetFusedHeading() const;
    void SetFusedHeading(double fusedHeading);

    double GetWorldLinearAccelX() const;
    void SetWorldLinearAccelX(double linearWorldAccelX);

    double GetWorldLinearAccelY() const;
    void SetWorldLinearAccelY(double linearWorldAccelY);
    
    double GetWorldLinearAccelZ() const;
    void SetWorldLinearAccelZ(double linearWorldAccelZ);

private:
    frc::sim::SimDeviceSim m_simDeviceSim;
    hal::SimBoolean m_connected;
    hal::SimDouble m_yawRate;
    hal::SimDouble m_yaw;
    hal::SimDouble m_pitch;
    hal::SimDouble m_roll;
    hal::SimDouble m_compassHeading;
    hal::SimDouble m_fusedHeading;
    hal::SimDouble m_linearWorldAccelX;
    hal::SimDouble m_linearWorldAccelY;
    hal::SimDouble m_linearWorldAccelZ;
};
