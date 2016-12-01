// This file was generated based on /usr/local/share/uno/Packages/Fuse.Launcher/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Launcher;}}
namespace g{namespace Uno{namespace Net{namespace Http{struct Uri;}}}}

namespace g{
namespace Fuse{

// public static class Launcher :15
// {
uClassType* Launcher_typeof();
void Launcher___launchCall_fn(uString* uri);
void Launcher___launchEmail_fn(uString* uri);
void Launcher___launchMapsAndroid_fn(uString* uri);
void Launcher__LaunchCall_fn(uString* callString);
void Launcher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message);
void Launcher__LaunchMaps_fn(double* latitude, double* longitude);
void Launcher__LaunchMaps1_fn(double* latitude, double* longitude, uString* query);
void Launcher__LaunchMaps2_fn(uString* query);
void Launcher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri);
void Launcher__LaunchUriAndroid_fn(uString* uri);

struct Launcher : uObject
{
    static void _launchCall(uString* uri);
    static void _launchEmail(uString* uri);
    static void _launchMapsAndroid(uString* uri);
    static void LaunchCall(uString* callString);
    static void LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message);
    static void LaunchMaps(double latitude, double longitude);
    static void LaunchMaps1(double latitude, double longitude, uString* query);
    static void LaunchMaps2(uString* query);
    static void LaunchUri(::g::Uno::Net::Http::Uri* uri);
    static void LaunchUriAndroid(uString* uri);
};
// }

}} // ::g::Fuse
