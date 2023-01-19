#include "AHRSSim.h"

AHRSSim::AHRSSim(): m_simDeviceSim{"navX-Sensor", 0} {
  m_connected = m_simDeviceSim.GetBoolean("Connected");
  m_yawRate = m_simDeviceSim.GetDouble("Rate");
  m_yaw = m_simDeviceSim.GetDouble("Yaw");
  m_pitch = m_simDeviceSim.GetDouble("Pitch");
  m_roll = m_simDeviceSim.GetDouble("Roll");
  m_compassHeading = m_simDeviceSim.GetDouble("CompassHeading");
  m_fusedHeading = m_simDeviceSim.GetDouble("FusedHeading");
  m_linearWorldAccelX = m_simDeviceSim.GetDouble("LinearWorldAccelX");
  m_linearWorldAccelY = m_simDeviceSim.GetDouble("LinearWorldAccelY");
  m_linearWorldAccelZ = m_simDeviceSim.GetDouble("LinearWorldAccelZ");
}

bool AHRSSim::GetConnected() const {
  return m_connected.Get();
}
void AHRSSim::SetConnected(bool connected) {
  m_connected.Set(connected);
}

double AHRSSim::GetRate() const {
  return m_yawRate.Get();
}
void AHRSSim::SetRate(double rate) {
  m_yawRate.Set(rate);
}

double AHRSSim::GetYaw() const {
  return m_yaw.Get();
}
void AHRSSim::SetYaw(double yaw) {
  m_yaw.Set(yaw);
}

double AHRSSim::GetPitch() const {
  return m_pitch.Get();
}
void AHRSSim::SetPitch(double pitch) {
  m_pitch.Set(pitch);
}

double AHRSSim::GetRoll() const {
  return m_roll.Get();
}
void AHRSSim::SetRoll(double roll) {
  m_roll.Set(roll);
}

double AHRSSim::GetCompassHeading() const {
  return m_compassHeading.Get();
}
void AHRSSim::SetCompassHeading(double compassHeading) {
  m_compassHeading.Set(compassHeading);
}

double AHRSSim::GetFusedHeading() const {
  return m_fusedHeading.Get();
}
void AHRSSim::SetFusedHeading(double fusedHeading) {
  m_fusedHeading.Set(fusedHeading);
}

double AHRSSim::GetWorldLinearAccelX() const {
  return m_linearWorldAccelX.Get();
}
void AHRSSim::SetWorldLinearAccelX(double linearWorldAccelX) {
  m_linearWorldAccelX.Set(linearWorldAccelX);
}

double AHRSSim::GetWorldLinearAccelY() const {
  return m_linearWorldAccelY.Get();
}
void AHRSSim::SetWorldLinearAccelY(double linearWorldAccelY) {
  m_linearWorldAccelY.Set(linearWorldAccelY);
}

double AHRSSim::GetWorldLinearAccelZ() const {
  return m_linearWorldAccelZ.Get();
}
void AHRSSim::SetWorldLinearAccelZ(double linearWorldAccelZ) {
  m_linearWorldAccelZ.Set(linearWorldAccelZ);
}

