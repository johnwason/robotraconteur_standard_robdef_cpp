#include <RobotRaconteurCompanion/StdRobDef/StdRobDefAll.h>
#include <RobotRaconteurCompanion/InfoParser/yaml/yaml_parser_all.h>
#include <RobotRaconteurCompanion/Util/AttributesUtil.h>
#include <RobotRaconteurCompanion/Util/DateTimeUtil.h>
void testfunction()
{
// Not a full test, just make sure everything compiles
YAML::Node node = YAML::Load("[1, 2, 3]");
node.as<com::robotraconteur::actuator::ActuatorInfoPtr>();
node.as<com::robotraconteur::bignum::BigNumPtr>();
node.as<com::robotraconteur::bignum::UnsignedBigNumPtr>();
node.as<com::robotraconteur::bignum::BigFloatPtr>();
node.as<com::robotraconteur::color::ColorRGBA>();
node.as<com::robotraconteur::color::ColorRGBAf>();
node.as<com::robotraconteur::color::ColorRGBAu>();
node.as<com::robotraconteur::color::ColorRGBAh>();
node.as<com::robotraconteur::color::ColorRGB>();
node.as<com::robotraconteur::color::ColorRGBf>();
node.as<com::robotraconteur::color::ColorRGBu>();
node.as<com::robotraconteur::color::ColorRGBh>();
node.as<com::robotraconteur::datatype::DataTypePtr>();
node.as<com::robotraconteur::datetime::clock::ClockDeviceInfoPtr>();
node.as<com::robotraconteur::datetime::TimeSpec3>();
node.as<com::robotraconteur::datetime::DateTimeLocalPtr>();
node.as<com::robotraconteur::device::isoch::IsochInfoPtr>();
node.as<com::robotraconteur::device::DeviceOptionPtr>();
node.as<com::robotraconteur::device::DeviceSubOptionPtr>();
node.as<com::robotraconteur::device::DeviceCapabilityPtr>();
node.as<com::robotraconteur::device::DeviceSubCapabilityPtr>();
node.as<com::robotraconteur::device::DeviceClassPtr>();
node.as<com::robotraconteur::device::DeviceInfoPtr>();
node.as<com::robotraconteur::eventlog::EventLogTypePtr>();
node.as<com::robotraconteur::eventlog::EventLogMessageHeaderPtr>();
node.as<com::robotraconteur::eventlog::EventLogMessagePtr>();
node.as<com::robotraconteur::eventlog::EventLogInfoPtr>();
node.as<com::robotraconteur::geometry::Vector2>();
node.as<com::robotraconteur::geometry::Vector3>();
node.as<com::robotraconteur::geometry::Vector6>();
node.as<com::robotraconteur::geometry::Point2D>();
node.as<com::robotraconteur::geometry::Point>();
node.as<com::robotraconteur::geometry::Size2D>();
node.as<com::robotraconteur::geometry::Size>();
node.as<com::robotraconteur::geometry::Rect>();
node.as<com::robotraconteur::geometry::Box>();
node.as<com::robotraconteur::geometry::Quaternion>();
node.as<com::robotraconteur::geometry::Plane>();
node.as<com::robotraconteur::geometry::Transform>();
node.as<com::robotraconteur::geometry::Pose>();
node.as<com::robotraconteur::geometry::Pose2D>();
node.as<com::robotraconteur::geometry::SpatialVelocity>();
node.as<com::robotraconteur::geometry::SpatialAcceleration>();
node.as<com::robotraconteur::geometry::Wrench>();
node.as<com::robotraconteur::geometry::SpatialInertia>();
node.as<com::robotraconteur::geometry::NamedTransformPtr>();
node.as<com::robotraconteur::geometry::NamedPosePtr>();
node.as<com::robotraconteur::geometry::PoseWithCovariancePtr>();
node.as<com::robotraconteur::geometry::NamedPoseWithCovariancePtr>();
node.as<com::robotraconteur::geometry::NamedPose2DPtr>();
node.as<com::robotraconteur::geometry::NamedSpatialVelocityPtr>();
node.as<com::robotraconteur::geometry::NamedSpatialAccelerationPtr>();
node.as<com::robotraconteur::geometry::NamedWrenchPtr>();
node.as<com::robotraconteur::geometry::NamedSpatialInertiaPtr>();
node.as<com::robotraconteur::geometry::BoundingBox2DPtr>();
node.as<com::robotraconteur::geometry::BoundingBoxPtr>();
node.as<com::robotraconteur::geometry::shapes::MeshTriangle>();
node.as<com::robotraconteur::geometry::shapes::BoxPtr>();
node.as<com::robotraconteur::geometry::shapes::SpherePtr>();
node.as<com::robotraconteur::geometry::shapes::CylinderPtr>();
node.as<com::robotraconteur::geometry::shapes::ConePtr>();
node.as<com::robotraconteur::geometry::shapes::CapsulePtr>();
node.as<com::robotraconteur::geometry::shapes::PlanePtr>();
node.as<com::robotraconteur::geometry::shapes::MeshTexturePtr>();
node.as<com::robotraconteur::geometry::shapes::MeshPtr>();
node.as<com::robotraconteur::geometry::shapes::MaterialPtr>();
node.as<com::robotraconteur::geometry::shapes::ShapeObjectPtr>();
node.as<com::robotraconteur::geometryf::Vector2>();
node.as<com::robotraconteur::geometryf::Vector3>();
node.as<com::robotraconteur::geometryf::Vector6>();
node.as<com::robotraconteur::geometryf::Point2D>();
node.as<com::robotraconteur::geometryf::Point>();
node.as<com::robotraconteur::geometryf::Size2D>();
node.as<com::robotraconteur::geometryf::Size>();
node.as<com::robotraconteur::geometryf::Rect>();
node.as<com::robotraconteur::geometryf::Box>();
node.as<com::robotraconteur::geometryf::Quaternion>();
node.as<com::robotraconteur::geometryf::Plane>();
node.as<com::robotraconteur::geometryf::Transform>();
node.as<com::robotraconteur::geometryf::Pose>();
node.as<com::robotraconteur::geometryf::Pose2D>();
node.as<com::robotraconteur::geometryf::SpatialVelocity>();
node.as<com::robotraconteur::geometryf::SpatialAcceleration>();
node.as<com::robotraconteur::geometryf::Wrench>();
node.as<com::robotraconteur::geometryf::SpatialInertia>();
node.as<com::robotraconteur::geometryf::NamedTransformPtr>();
node.as<com::robotraconteur::geometryf::NamedPosePtr>();
node.as<com::robotraconteur::geometryf::PoseWithCovariancePtr>();
node.as<com::robotraconteur::geometryf::NamedPoseWithCovariancePtr>();
node.as<com::robotraconteur::geometryf::NamedPose2DPtr>();
node.as<com::robotraconteur::geometryf::NamedSpatialVelocityPtr>();
node.as<com::robotraconteur::geometryf::NamedSpatialAccelerationPtr>();
node.as<com::robotraconteur::geometryf::NamedWrenchPtr>();
node.as<com::robotraconteur::geometryf::NamedSpatialInertiaPtr>();
node.as<com::robotraconteur::geometryf::BoundingBox2DPtr>();
node.as<com::robotraconteur::geometryf::BoundingBoxPtr>();
node.as<com::robotraconteur::geometryi::Vector2>();
node.as<com::robotraconteur::geometryi::Vector3>();
node.as<com::robotraconteur::geometryi::Vector6>();
node.as<com::robotraconteur::geometryi::Point2D>();
node.as<com::robotraconteur::geometryi::Point>();
node.as<com::robotraconteur::geometryi::Size2D>();
node.as<com::robotraconteur::geometryi::Size>();
node.as<com::robotraconteur::geometryi::Rect>();
node.as<com::robotraconteur::geometryi::Box>();
node.as<com::robotraconteur::geometryi::Quaternion>();
node.as<com::robotraconteur::geometryi::Plane>();
node.as<com::robotraconteur::geometryi::Transform>();
node.as<com::robotraconteur::geometryi::Pose>();
node.as<com::robotraconteur::geometryi::Pose2D>();
node.as<com::robotraconteur::geometryi::SpatialVelocity>();
node.as<com::robotraconteur::geometryi::SpatialAcceleration>();
node.as<com::robotraconteur::geometryi::Wrench>();
node.as<com::robotraconteur::geometryi::SpatialInertia>();
node.as<com::robotraconteur::geometryi::NamedTransformPtr>();
node.as<com::robotraconteur::geometryi::NamedPosePtr>();
node.as<com::robotraconteur::geometryi::PoseWithCovariancePtr>();
node.as<com::robotraconteur::geometryi::NamedPoseWithCovariancePtr>();
node.as<com::robotraconteur::geometryi::NamedPose2DPtr>();
node.as<com::robotraconteur::geometryi::NamedSpatialVelocityPtr>();
node.as<com::robotraconteur::geometryi::NamedSpatialAccelerationPtr>();
node.as<com::robotraconteur::geometryi::NamedWrenchPtr>();
node.as<com::robotraconteur::geometryi::NamedSpatialInertiaPtr>();
node.as<com::robotraconteur::geometryi::BoundingBox2DPtr>();
node.as<com::robotraconteur::geometryi::BoundingBoxPtr>();
node.as<com::robotraconteur::gps::GpsStatePtr>();
node.as<com::robotraconteur::hid::joystick::JoystickInfoPtr>();
node.as<com::robotraconteur::hid::joystick::JoystickStatePtr>();
node.as<com::robotraconteur::hid::joystick::GamepadStatePtr>();
node.as<com::robotraconteur::hid::joystick::JoystickStateSensorDataPtr>();
node.as<com::robotraconteur::image::PixelRGB>();
node.as<com::robotraconteur::image::PixelRGBA>();
node.as<com::robotraconteur::image::PixelRGBFloatPacked>();
node.as<com::robotraconteur::image::PixelRGBFloatPackedf>();
node.as<com::robotraconteur::image::ImageInfoPtr>();
node.as<com::robotraconteur::image::FreeformImageInfoPtr>();
node.as<com::robotraconteur::image::ImagePtr>();
node.as<com::robotraconteur::image::CompressedImagePtr>();
node.as<com::robotraconteur::image::FreeformImagePtr>();
node.as<com::robotraconteur::image::ImagePartPtr>();
node.as<com::robotraconteur::image::CompressedImagePartPtr>();
node.as<com::robotraconteur::image::FreeformImagePartPtr>();
node.as<com::robotraconteur::image::DepthImagePtr>();
node.as<com::robotraconteur::image::FreeformDepthImagePtr>();
node.as<com::robotraconteur::image::ImageResourcePtr>();
node.as<com::robotraconteur::imaging::camerainfo::PlumbBobDistortionInfoPtr>();
node.as<com::robotraconteur::imaging::camerainfo::CameraCalibrationPtr>();
node.as<com::robotraconteur::imaging::camerainfo::CameraInfoPtr>();
node.as<com::robotraconteur::imaging::camerainfo::MultiCameraInfoPtr>();
node.as<com::robotraconteur::imaging::CameraStatePtr>();
node.as<com::robotraconteur::imu::ImuStatePtr>();
node.as<com::robotraconteur::laserscan::LaserScanInfoPtr>();
node.as<com::robotraconteur::laserscan::LaserScanPtr>();
node.as<com::robotraconteur::laserscan::LaserScanInfofPtr>();
node.as<com::robotraconteur::laserscan::LaserScanfPtr>();
node.as<com::robotraconteur::laserscan::LaserScanPartPtr>();
node.as<com::robotraconteur::laserscan::LaserScanPartfPtr>();
node.as<com::robotraconteur::laserscanner::LaserScannerInfoPtr>();
node.as<com::robotraconteur::lighting::LightInfoPtr>();
node.as<com::robotraconteur::objectrecognition::ObjectRecognitionTemplatePtr>();
node.as<com::robotraconteur::objectrecognition::RecognizedObjectPtr>();
node.as<com::robotraconteur::objectrecognition::RecognizedObjectsPtr>();
node.as<com::robotraconteur::objectrecognition::ObjectRecognitionSensorInfoPtr>();
node.as<com::robotraconteur::objectrecognition::ObjectRecognitionSensorDataPtr>();
node.as<com::robotraconteur::octree::OcTreeInfoPtr>();
node.as<com::robotraconteur::octree::OcTreePtr>();
node.as<com::robotraconteur::octree::OcTreePartPtr>();
node.as<com::robotraconteur::octree::OcTreeResourcePtr>();
node.as<com::robotraconteur::param::ParameterInfoPtr>();
node.as<com::robotraconteur::pid::PIDParamPtr>();
node.as<com::robotraconteur::pointcloud::PointCloud2Point>();
node.as<com::robotraconteur::pointcloud::PointCloud2Pointf>();
node.as<com::robotraconteur::pointcloud::PointCloudPtr>();
node.as<com::robotraconteur::pointcloud::PointCloudPartPtr>();
node.as<com::robotraconteur::pointcloud::PointCloudfPtr>();
node.as<com::robotraconteur::pointcloud::PointCloudPartfPtr>();
node.as<com::robotraconteur::pointcloud::PointCloud2Ptr>();
node.as<com::robotraconteur::pointcloud::PointCloud2PartPtr>();
node.as<com::robotraconteur::pointcloud::PointCloud2fPtr>();
node.as<com::robotraconteur::pointcloud::PointCloud2PartfPtr>();
node.as<com::robotraconteur::pointcloud::FreeformPointCloudPtr>();
node.as<com::robotraconteur::pointcloud::FreeformPointCloudPartPtr>();
node.as<com::robotraconteur::pointcloud::sensor::PointCloudSensorInfoPtr>();
node.as<com::robotraconteur::pointcloud::sensor::PointCloudSensorDataPtr>();
node.as<com::robotraconteur::pointcloud::sensor::PointCloudPartSensorDataPtr>();
node.as<com::robotraconteur::pointcloud::sensor::PointCloud2SensorDataPtr>();
node.as<com::robotraconteur::pointcloud::sensor::PointCloud2PartSensorDataPtr>();
node.as<com::robotraconteur::resource::ResourceIdentifierPtr>();
node.as<com::robotraconteur::resource::BucketInfoPtr>();
node.as<com::robotraconteur::resource::ResourceInfoPtr>();
node.as<com::robotraconteur::resource::ResourcePtr>();
node.as<com::robotraconteur::resource::ResourcePartPtr>();
node.as<com::robotraconteur::robotics::joints::JointLimitsPtr>();
node.as<com::robotraconteur::robotics::joints::JointInfoPtr>();
node.as<com::robotraconteur::robotics::payload::PayloadInfoPtr>();
node.as<com::robotraconteur::robotics::planning::JointWaypointPtr>();
node.as<com::robotraconteur::robotics::planning::CartesianWaypointPtr>();
node.as<com::robotraconteur::robotics::planning::OtherWaypointPtr>();
node.as<com::robotraconteur::robotics::planning::PlanningRequestPtr>();
node.as<com::robotraconteur::robotics::planning::PlanningResponsePtr>();
node.as<com::robotraconteur::robotics::planning::ContactResultPtr>();
node.as<com::robotraconteur::robotics::planning::InvKinResultPtr>();
node.as<com::robotraconteur::robotics::planning::PlannerAlgorithmInfoPtr>();
node.as<com::robotraconteur::robotics::planning::PlannerInfoPtr>();
node.as<com::robotraconteur::robotics::planning::PlanningSceneInfoPtr>();
node.as<com::robotraconteur::robotics::planning::PlannerModelJointPositionsPtr>();
node.as<com::robotraconteur::robotics::planning::PlannerJointPositionsPtr>();
node.as<com::robotraconteur::robotics::planning::EnvStatePtr>();
node.as<com::robotraconteur::robotics::planning::AllowedCollisionEntryPtr>();
node.as<com::robotraconteur::robotics::planning::AllowedCollisionMatrixPtr>();
node.as<com::robotraconteur::robotics::robot::RobotKinChainInfoPtr>();
node.as<com::robotraconteur::robotics::robot::RobotInfoPtr>();
node.as<com::robotraconteur::robotics::robot::RobotStatePtr>();
node.as<com::robotraconteur::robotics::robot::AdvancedRobotStatePtr>();
node.as<com::robotraconteur::robotics::robot::RobotStateSensorDataPtr>();
node.as<com::robotraconteur::robotics::robot::RobotJointCommandPtr>();
node.as<com::robotraconteur::robotics::scene::JointPtr>();
node.as<com::robotraconteur::robotics::scene::JointDynamicsPtr>();
node.as<com::robotraconteur::robotics::scene::JointSafetyPtr>();
node.as<com::robotraconteur::robotics::scene::JointCalibrationPtr>();
node.as<com::robotraconteur::robotics::scene::JointMimicPtr>();
node.as<com::robotraconteur::robotics::scene::LinkPtr>();
node.as<com::robotraconteur::robotics::scene::ModelPtr>();
node.as<com::robotraconteur::robotics::scene::ScenePtr>();
node.as<com::robotraconteur::robotics::tool::ToolInfoPtr>();
node.as<com::robotraconteur::robotics::tool::ToolStatePtr>();
node.as<com::robotraconteur::robotics::tool::ToolStateSensorDataPtr>();
node.as<com::robotraconteur::robotics::trajectory::JointTrajectoryWaypointPtr>();
node.as<com::robotraconteur::robotics::trajectory::JointTrajectoryPtr>();
node.as<com::robotraconteur::robotics::trajectory::TrajectoryStatusPtr>();
node.as<com::robotraconteur::robotics::trajectory::AdvancedJointTrajectoryDeviceWaypointPtr>();
node.as<com::robotraconteur::robotics::trajectory::AdvancedJointTrajectoryWaypointPtr>();
node.as<com::robotraconteur::robotics::trajectory::AdvancedJointTrajectoryDevicePtr>();
node.as<com::robotraconteur::robotics::trajectory::AdvancedJointTrajectoryPtr>();
node.as<com::robotraconteur::robotics::trajectory::FreeformJointTrajectoryWaypointPtr>();
node.as<com::robotraconteur::robotics::trajectory::FreeformJointTrajectoryPtr>();
node.as<com::robotraconteur::sensor::SensorInfoPtr>();
node.as<com::robotraconteur::sensor::SensorDataPtr>();
node.as<com::robotraconteur::sensordata::SensorDataHeaderPtr>();
node.as<com::robotraconteur::sensordata::SensorDataSourceInfoPtr>();
node.as<com::robotraconteur::servo::ServoInfoPtr>();
node.as<com::robotraconteur::servo::ServoStatePtr>();
node.as<com::robotraconteur::servo::ServoStateSensorDataPtr>();
node.as<com::robotraconteur::servo::ServoCommandPtr>();
node.as<com::robotraconteur::signal::SignalInfoPtr>();
node.as<com::robotraconteur::signal::SignalGroupInfoPtr>();
node.as<com::robotraconteur::units::SIUnitPtr>();
}

void testfunction2()
{
com::robotraconteur::device::DeviceInfoPtr info;
RobotRaconteur::Companion::Util::GetDefaultServiceAttributesFromDeviceInfo(info);
}

int main(int ac, char** av)
{
return 0;
}
