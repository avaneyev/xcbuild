// Copyright 2013-present Facebook. All Rights Reserved.

#ifndef __xcscheme_XC_BuildableReference_h
#define __xcscheme_XC_BuildableReference_h

#include <xcscheme/Base.h>

namespace xcscheme { namespace XC {

class BuildableReference {
public:
    typedef std::shared_ptr <BuildableReference> shared_ptr;
    typedef std::vector <shared_ptr> vector;

private:
    std::string _blueprintIdentifier;
    std::string _blueprintName;
    std::string _buildableIdentifier;
    std::string _buildableName;
    std::string _referencedContainer;
    std::string _referencedContainerType;

public:
    BuildableReference();

public:
    inline std::string const &blueprintIdentifier() const
    { return _blueprintIdentifier; }

    inline std::string const &blueprintName() const
    { return _blueprintName; }

public:
    inline std::string const &buildableIdentifier() const
    { return _buildableIdentifier; }

    inline std::string const &buildableName() const
    { return _buildableName; }

public:
    inline std::string const &referencedContainer() const
    { return _referencedContainer; }

    inline std::string const &referencedContainerType() const
    { return _referencedContainerType; }

public:
    std::string resolve(std::string const &container) const;

public:
    bool parse(plist::Dictionary const *dict);
};

} }

#endif  // !__xcscheme_XC_BuildableReference_h
