#include "gtest/gtest.h"

#include "AHRS.h"
#include "AHRSSim.h"
#include "frc/Timer.h"

constexpr auto delayTime = 0.1_s;

class AHRSSimTest : public ::testing::Test {

  protected:
    void SetUp() override {
      frc::Wait(0.1_s);
    }

  AHRS ahrs;
  AHRSSim ahrsSim;
};

TEST_F(AHRSSimTest, Connected) {
  ahrsSim.SetConnected(false);
  frc::Wait(delayTime);
  ASSERT_FALSE(ahrs.IsConnected());
  ASSERT_FALSE(ahrsSim.GetConnected());
  
  ahrsSim.SetConnected(true);
  frc::Wait(delayTime);
  ASSERT_TRUE(ahrs.IsConnected());
  ASSERT_TRUE(ahrsSim.GetConnected());

}

TEST_F(AHRSSimTest, Rate) {
  double value = 100;
  ahrsSim.SetRate(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetRate());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetRate());

  value = 0;
  ahrsSim.SetRate(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetRate());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetRate());
}

TEST_F(AHRSSimTest, Yaw) {
    double value = 100;
  ahrsSim.SetYaw(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetYaw());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetYaw());

  value = 0;
  ahrsSim.SetYaw(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetYaw());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetYaw());
}

TEST_F(AHRSSimTest, Pitch) {
    double value = 100;
  ahrsSim.SetPitch(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetPitch());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetPitch());

  value = 0;
  ahrsSim.SetPitch(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetPitch());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetPitch());
}

TEST_F(AHRSSimTest, Roll) {
    double value = 100;
  ahrsSim.SetRoll(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetRoll());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetRoll());

  value = 0;
  ahrsSim.SetRoll(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetRoll());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetRoll());
}

TEST_F(AHRSSimTest, CompassHeading) {
    double value = 100;
  ahrsSim.SetCompassHeading(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetCompassHeading());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetCompassHeading());

  value = 0;
  ahrsSim.SetCompassHeading(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetCompassHeading());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetCompassHeading());
}

TEST_F(AHRSSimTest, FusedHeading) {
    double value = 100;
  ahrsSim.SetFusedHeading(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetFusedHeading());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetFusedHeading());

  value = 0;
  ahrsSim.SetFusedHeading(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetFusedHeading());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetFusedHeading());
}

TEST_F(AHRSSimTest, WorldLinearAccelX) {
    double value = 100;
  ahrsSim.SetWorldLinearAccelX(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetWorldLinearAccelX());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetWorldLinearAccelX());

  value = 0;
  ahrsSim.SetWorldLinearAccelX(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetWorldLinearAccelX());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetWorldLinearAccelX());
}

TEST_F(AHRSSimTest, WorldLinearAccelY) {
    double value = 100;
  ahrsSim.SetWorldLinearAccelY(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetWorldLinearAccelY());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetWorldLinearAccelY());

  value = 0;
  ahrsSim.SetWorldLinearAccelY(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetWorldLinearAccelY());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetWorldLinearAccelY());
}

TEST_F(AHRSSimTest, WorldLinearAccelZ) {
    double value = 100;
  ahrsSim.SetWorldLinearAccelZ(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetWorldLinearAccelZ());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetWorldLinearAccelZ());

  value = 0;
  ahrsSim.SetWorldLinearAccelZ(value);
  frc::Wait(delayTime);
  ASSERT_DOUBLE_EQ(value, ahrs.GetWorldLinearAccelZ());
  ASSERT_DOUBLE_EQ(value, ahrsSim.GetWorldLinearAccelZ());
}