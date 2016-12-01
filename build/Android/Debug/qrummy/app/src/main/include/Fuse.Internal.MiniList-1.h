// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.41.3/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct MiniList;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal struct MiniList<T> :1048
// {
uStructType* MiniList_typeof();
void MiniList__Contains_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval);
void MiniList__get_Count_fn(MiniList* __this, uType* __type, int* __retval);

struct MiniList
{
    uStrong<uObject*> _single;
    uStrong< ::g::Uno::Collections::List*> _list;

    bool Contains(uType* __type, uObject* value);
    int Count(uType* __type);
};
// }

}}} // ::g::Fuse::Internal
