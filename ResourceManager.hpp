#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
	ResourceManager() : res{new Resource {}} {}
	
	ResourceManager(const ResourceManager& rm) : res{new Resource {*(rm.res)}} {}
	
	~ResourceManager()
	{
		delete res;
	}
	
	ResourceManager& operator=(const ResourceManager& rm) 
	{
		delete res;
		res = new Resource {*(rm.res)};

		return *this;
	}
	
	Resource* res;
	
	double get()
	{
		return res->get();
	}
};
