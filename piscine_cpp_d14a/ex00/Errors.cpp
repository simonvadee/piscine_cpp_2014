/**
 * vadee_s
 */

#include "Errors.hpp"

NasaError::NasaError(std::string const& message, std::string const& component) : _message(message), _component(component)
{
}

NasaError::~NasaError() throw()
{
}

const char*	NasaError::what()
{
  return _message.c_str();
}

std::string const&	NasaError::getComponent() const
{
  return _component;
}

MissionCriticalError::MissionCriticalError(std::string const& message, std::string const& component) : NasaError(message, component)
{
}

MissionCriticalError::~MissionCriticalError() throw()
{
}

LifeCriticalError::LifeCriticalError(std::string const& message, std::string const& component) : NasaError(message, component)
{
}

LifeCriticalError::~LifeCriticalError() throw()
{
}

UserError::UserError(std::string const& message, std::string const& component) : NasaError(message, component)
{
}

UserError::~UserError() throw()
{
}

CommunicationError::CommunicationError(std::string const& message) : NasaError(message, "CommunicationDevice")
{
}

CommunicationError::~CommunicationError() throw()
{
}
