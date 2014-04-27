//
//  IDMediaPathLinker.hpp
//  InvariantDisks
//
//  Created by Gerhard Röthlin on 2014.04.27.
//  Copyright (c) 2014 the-color-black.net. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification, are permitted
//  provided that the conditions of the "3-Clause BSD" license described in the LICENSE file are met.
//

#ifndef ID_MEDIAPATHLINKER_HPP
#define ID_MEDIAPATHLINKER_HPP

#include "IDDiskArbitrationHandler.hpp"

#include <string>

namespace ID
{
	class MediaPathLinker : public DiskArbitrationHandler
	{
	public:
		MediaPathLinker(std::string base);

	public:
		virtual void diskAppeared(DADiskRef disk) override;
		virtual void diskDisappeared(DADiskRef disk) override;

	private:
		std::string m_base;
	};
}

#endif
