//============================================================================
// Name        : trivia_database.hpp
// Author      : Jacob Li
// Version     : 1.0
// Copyright   :
// Description : Using code from DrRobotMotionArmDriver to drive arm movements
//============================================================================

#ifndef trivia_database_HPP_
#define trivia_database_HPP_
#include <ros/ros.h>
#include <string>
#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

class trivia_database {
  public:
    trivia_database();
    ~trivia_database();

    xmlDoc *doc;
    void read_xml_file(std::string filePath);

};

#endif