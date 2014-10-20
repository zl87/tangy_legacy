//============================================================================
// Name        : trivia_database.cpp
// Author      : Jacob Li
// Version     : 1.0
// Copyright   :
// Description : Using code from DrRobotMotionArmDriver to drive arm movements
//============================================================================



#include "trivia_database.hpp"
#include "trivia_question.cpp"
#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
#include <database_interface/postgresql_database.h>
#include <boost/shared_ptr.hpp>
#include <sqlite3.h>

trivia_database::trivia_database(){
}
trivia_database::~trivia_database(){

}



//Read xml file
void trivia_database::read_xml_file(std::string filePath){
  printf("Attempting to read file...\n");
  //Read XML file
  doc=xmlReadFile(filePath.c_str(),NULL, 0);
  if(doc==NULL){
    printf("Error: could not parse file %s\n", filePath.c_str());
    exit(-1);
  }
    //Point to root node
  xmlNode *root_element = NULL;
  root_element = xmlDocGetRootElement(doc);
  xmlChar *key;
  //Get child node, one after other getting their contents and set them into a "cmd_arm" message
  xmlNode* cur = root_element->xmlChildrenNode;

  for (cur; cur; cur = cur->next)
  {
      if (cur->type == XML_ELEMENT_NODE)
      {
          xmlNode* curchannel = cur->xmlChildrenNode;

          for (curchannel; curchannel; curchannel = curchannel->next)
          {
              if (curchannel->type == XML_ELEMENT_NODE)
              {
                  key = xmlNodeListGetString(doc, curchannel->xmlChildrenNode, 1);
                  if (!xmlStrcmp(curchannel->name, (const xmlChar *)"id"))
                  {
                        //TODO
                  }    else if (!xmlStrcmp(curchannel->name, (const xmlChar *)"type"))    {
                        //TODO
                  }    else if (!xmlStrcmp(curchannel->name, (const xmlChar *)"question"))    {
                        //TODO
                  }    else if (!xmlStrcmp(curchannel->name, (const xmlChar *)"ans"))    {
                        //TODO
                  }    else if (!xmlStrcmp(curchannel->name, (const xmlChar *)"alt1"))    {
                        //TODO
                  }    else if (!xmlStrcmp(curchannel->name, (const xmlChar *)"alt2"))    {
                        //TODO
                  }    else if (!xmlStrcmp(curchannel->name, (const xmlChar *)"alt3"))    {
                        //TODO
                  } 
                 xmlFree(key);
                 }
          }

      }

  }
  xmlFreeDoc(doc);
  xmlCleanupParser();

}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "trivia_intialized");
  ros::NodeHandle node_handle;
  ros::AsyncSpinner spinner(1);
  spinner.start();

}