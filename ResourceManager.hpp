#pragma once

#include "Resource.hpp"

class ResourceManager
{
	ResourceManager() : res{} {}
	
	ResourceManager(const ResourceManager& rm) : res{rm.res} {}
	
	~ResourceManager()
	{
		delete res;
	}
	
	ResourceManager& operator=(const ResourceManager& rm) 
	{
		delete res;
		Resource res {rm.res};
	}
	
	Resource res;

public:
	double get()
	{
		return res.get();
	}
};
