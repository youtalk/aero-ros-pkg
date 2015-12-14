#include "aero_object_manipulation/perception/class/PointCloudSensor.hh"
#include "aero_object_manipulation/perception/class/PlaneDetectedPointCloud.hh"

//////////////////////////////////////////////////
int main(int argc, char **argv)
{
  ros::init(argc, argv, "plane_detection");
  ros::NodeHandle nh;
  aero::perception::PlaneDetectedPointCloudPtr sensor(
      new aero::perception::PlaneDetectedPointCloud(nh));

  ros::spin();

  return 0;
}
