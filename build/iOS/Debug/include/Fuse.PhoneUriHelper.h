// This file was generated based on /usr/local/share/uno/Packages/Fuse.Launcher/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct PhoneUriHelper;}}

namespace g{
namespace Fuse{

// internal static class PhoneUriHelper :653
// {
uClassType* PhoneUriHelper_typeof();
void PhoneUriHelper__PhoneNumberToUri_fn(uString* phoneNumber, uString** __retval);

struct PhoneUriHelper : uObject
{
    static uString* PhoneNumberToUri(uString* phoneNumber);
};
// }

}} // ::g::Fuse
