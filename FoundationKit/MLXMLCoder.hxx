/* -------------------------------------------

	Copyright ZKA Technologies

------------------------------------------- */

#pragma once

#include <FoundationKit/Foundation.hxx>
#include <FoundationKit/MLString.hxx>
#include <iostream>
#include <stdexcept>

extern "C"
{
	#include <string.h>
}

/// @brief XML parser class.
class MLXMLCoder final ML_OBJECT
{
public:
	MLXMLCoder(const char* blob);

	MLXMLCoder& operator=(const MLXMLCoder&) = default;
	MLXMLCoder(const MLXMLCoder&)			   = default;

	~MLXMLCoder() override;

public:
	/// @brief Gets the content of a unique markup.
	/// @param name the markup name
	/// @param bufSz the buffer size to allocate
	/// @param pureOutput strip \t, \n, \r and spaces if set to true.
	/// @return
	MLString getInnerXML(MLString name, MLSizeType bufSz, bool pureOutput);

	/// @brief Gets the content of a unique markup.
	/// @param name the markup name
	/// @param bufSz the buffer size to allocate
	/// @param pureOutput strip \t, \n, \r and spaces if set to true.
	/// @return
	MLString getInnerXML(const char* name, MLSizeType bufSz, bool pureOutput);

	const MLString toString() override;

private:
	MLString mBlob;
};

extern const char* cXMLExtension;
extern const char* cAPlistExtension;