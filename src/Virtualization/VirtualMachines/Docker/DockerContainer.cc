/*
 * DockerContainer.cc
 *
 *  Created on: May 30, 2016
 *      Author: binggao
 */

#include "DockerContainer.h"
#include "stdio.h"
#include "stdlib.h"
Define_Module(DockerContainer);

DockerContainer::DockerContainer() {
    // TODO Auto-generated constructor stub

}

DockerContainer::~DockerContainer() {
    // TODO Auto-generated destructor stub
}
void DockerContainer::initialize(string image, string name,string id,int siz, string fullName)
{
    cout << "DockerContainer::initialize"<< endl;
    this->image=image;
    this->name=name;
    this->id=id;
    this->status=1;  //running
    this->createdTime=clock();
    this->size=siz;
    fullName=fullName.append(":");
    this->fullname=fullName.append(id);

    cout << "image:" << image << "----name:"<<name <<"-----id:"<<id<<"------createdTime:"<<createdTime<<endl;
}
void DockerContainer::handleMessage(cMessage* msg){
    throw cRuntimeError ("VmImage::handleMessage->this module does not receive messages\n");
}

