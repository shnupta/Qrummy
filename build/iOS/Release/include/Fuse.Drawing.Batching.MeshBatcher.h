// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Batching/0.41.3/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Batch;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Entry;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct MeshBatcher;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// public sealed class MeshBatcher :575
// {
uType* MeshBatcher_typeof();
void MeshBatcher__ctor__fn(MeshBatcher* __this);
void MeshBatcher__AddEntry_fn(MeshBatcher* __this, ::g::Fuse::Drawing::Batching::Entry* e, int* __retval);
void MeshBatcher__AddMesh_fn(MeshBatcher* __this, ::g::Uno::Content::Models::ModelMesh* mesh, int* __retval);
void MeshBatcher__get_Batches_fn(MeshBatcher* __this, uObject** __retval);
void MeshBatcher__CreateFakeIndexBuffer_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Uno::Content::Models::ModelMesh** __retval);
void MeshBatcher__get_EntryCount_fn(MeshBatcher* __this, int* __retval);
void MeshBatcher__Flush_fn(MeshBatcher* __this);
void MeshBatcher__New1_fn(MeshBatcher** __retval);

struct MeshBatcher : uObject
{
    uStrong<uArray*> batches;
    uStrong< ::g::Uno::Collections::List*> entries;

    void ctor_();
    int AddEntry(::g::Fuse::Drawing::Batching::Entry* e);
    int AddMesh(::g::Uno::Content::Models::ModelMesh* mesh);
    uObject* Batches();
    int EntryCount();
    void Flush();
    static ::g::Uno::Content::Models::ModelMesh* CreateFakeIndexBuffer(::g::Uno::Content::Models::ModelMesh* m);
    static MeshBatcher* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Batching
