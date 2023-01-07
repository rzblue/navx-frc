package com.kauailabs.navx.frc;

import edu.wpi.first.hal.SimBoolean;
import edu.wpi.first.hal.SimDouble;
import edu.wpi.first.hal.simulation.SimDeviceDataJNI;

public class AHRSSim {
  int m_deviceHandle = SimDeviceDataJNI.getSimDeviceHandle("navX-Sensor[0]");

  SimBoolean m_connected =
      new SimBoolean(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "Connected"));
  SimDouble m_yawRate = new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "Rate"));
  SimDouble m_yaw = new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "Yaw"));
  SimDouble m_pitch = new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "Pitch"));
  SimDouble m_roll = new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "Roll"));
  SimDouble m_compassHeading =
      new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "CompassHeading"));
  SimDouble m_fusedHeading =
      new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "FusedHeading"));
  SimDouble m_linearWorldAccelX =
      new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "LinearWorldAccelX"));
  SimDouble m_linearWorldAccelY =
      new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "LinearWorldAccelY"));
  SimDouble m_linearWorldAccelZ =
      new SimDouble(SimDeviceDataJNI.getSimValueHandle(m_deviceHandle, "LinearWorldAccelZ"));

  /** Constructs a new AHRSSim device. */
  public AHRSSim() {}

  /**
   * Set whether the AHRS is connected.
   *
   * @param value the new value.
   */
  public void setConnected(boolean value) {
    m_connected.set(value);
  }

  /**
   * Returns whether the simulated AHRS is connected.
   *
   * @return whether the simulated AHRS is connected.
   */
  public boolean getConnected() {
    return m_connected.get();
  }

  /**
   * Set the rate of rotation of the simulated yaw (Z-axis) gyro, in degrees per second.
   *
   * @param rate rate of rotation in degrees per second
   */
  public void setRate(double rate) {
    m_yawRate.set(rate);
  }

  /**
   * Get the rate of rotation of the simulated yaw (Z-axis) gyro, in degrees per second.
   *
   * @return rate of rotation of the simulated yaw (Z-axis) gyro, in degrees per second.
   */
  public double getRate() {
    return m_yawRate.get();
  }

  /**
   * Set the yaw value of the simulated gyro in degrees. This should be within (-180, 180] to align
   * with data reported by the actual sensor.
   *
   * @param yaw Yaw angle in degrees.
   */
  public void setYaw(double yaw) {
    m_yaw.set(yaw);
  }

  /**
   * Get the yaw value of the simulated gyro in degrees.
   *
   * @return Yaw angle in degrees.
   */
  public double getYaw() {
    return m_yaw.get();
  }

  /**
   * Set the pitch value of the simulated gyro in degrees. This should be within (-180, 180] to
   * align with data reported by the actual sensor.
   *
   * @param pitch Pitch angle in degrees.
   */
  public void setPitch(double pitch) {
    m_pitch.set(pitch);
  }

  /**
   * Get the pitch value of the simulated gyro in degrees.
   *
   * @return Pitch angle in degrees.
   */
  public double getPitch() {
    return m_pitch.get();
  }

  /**
   * Set the Roll value of the simulated gyro in degrees. This should be within (-180, 180] to align
   * with data reported by the actual sensor.
   *
   * @param roll roll angle in degrees.
   */
  public void setRoll(double roll) {
    m_roll.set(roll);
  }

  /**
   * Get the Roll value of the simulated gyro in degrees.
   *
   * @return Roll angle in degrees.
   */
  public double getRoll() {
    return m_roll.get();
  }

  /**
   * Set the compass heading value of the simulated gyro in degrees. This should be within [0, 360)
   * to align with data reported by the actual sensor.
   *
   * @param heading Compass heading in degrees.
   */
  public void setCompassHeading(double heading) {
    m_compassHeading.set(heading);
  }

  /**
   * Get the compass heading value of the simulated gyro in degrees.
   *
   * @return Compass heading in degrees.
   */
  public double getCompassHeading() {
    return m_compassHeading.get();
  }

  /**
   * Set the fused heading value of the simulated gyro in degrees. This should be within [0, 360) to
   * align with data reported by the actual sensor.
   *
   * @param fusedHeading Fused heading in degrees.
   */
  public void setFusedHeading(double fusedHeading) {
    m_fusedHeading.set(fusedHeading);
  }

  /*
   * Get the fused heading value of the simulated gyro in degrees.
   *
   * @return Fused heading in degrees.
   */
  public double getFusedHeading() {
    return m_fusedHeading.get();
  }

  /**
   * Set the current linear acceleration of the simulated device in the X-axis (in G).
   *
   * @param linearWorldAccelX acceleration of the simulated device in the X-axis in G.
   */
  public void setWorldLinearAccelX(double linearWorldAccelX) {
    m_linearWorldAccelX.set(linearWorldAccelX);
  }

  /**
   * Get the current linear acceleration of the simulated device in the X-axis (in G).
   *
   * @return Acceleration of the simulated device in the X-axis in G.
   */
  public double getWorldLinearAccelX() {
    return m_linearWorldAccelX.get();
  }

  /**
   * Set the current linear acceleration of the simulated device in the Y-axis (in G).
   *
   * @param linearWorldAccelY acceleration of the simulated device in the Y-axis in G.
   */
  public void setWorldLinearAccelY(double linearWorldAccelY) {
    m_linearWorldAccelY.set(linearWorldAccelY);
  }

  /**
   * Get the current linear acceleration of the simulated device in the Y-axis (in G).
   *
   * @return Acceleration of the simulated device in the Y-axis in G.
   */
  public double getWorldLinearAccelY() {
    return m_linearWorldAccelY.get();
  }

  /**
   * Set the current linear acceleration of the simulated device in the Z-axis (in G).
   *
   * @param linearWorldAccelZ acceleration of the simulated device in the Z-axis in G.
   */
  public void setWorldLinearAccelZ(double linearWorldAccelZ) {
    m_linearWorldAccelZ.set(linearWorldAccelZ);
  }

  /**
   * Get the current linear acceleration of the simulated device in the Z-axis (in G).
   *
   * @return Acceleration of the simulated device in the Z-axis in G.
   */
  public double getWorldLinearAccelZ() {
    return m_linearWorldAccelZ.get();
  }
}
