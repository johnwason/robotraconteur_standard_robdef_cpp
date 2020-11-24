#include "yaml_parser_common_include.h"

#pragma once

namespace YAML {

	template<> 
	struct convert<com::robotraconteur::imu::ImuStatePtr>{
		static Node encode(const com::robotraconteur::imu::ImuStatePtr& rhs){
			Node node;
			return node;
		}

		static bool decode(const Node& node, com::robotraconteur::imu::ImuStatePtr& rhs){
			if (!rhs) rhs.reset(new com::robotraconteur::imu::ImuState);
			rhs->angular_velocity = RobotRaconteur::Companion::InfoParser::yaml::parse_namedarray<com::robotraconteur::geometry::Vector3>(node,"angular_velocity",true);
			rhs->linear_acceleration = RobotRaconteur::Companion::InfoParser::yaml::parse_namedarray<com::robotraconteur::geometry::Vector3>(node,"linear_acceleration",true);
			rhs->orientation = RobotRaconteur::Companion::InfoParser::yaml::parse_namedarray<com::robotraconteur::geometry::Quaternion>(node,"orientation",true);
			return true;
		}
	};



}