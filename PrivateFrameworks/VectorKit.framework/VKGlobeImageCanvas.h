/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeImageCanvas : VKImageCanvas <MDSnapshotMap> {
    struct unique_ptr<md::GlobeAdapter, std::__1::default_delete<md::GlobeAdapter> > { 
        struct __compressed_pair<md::GlobeAdapter *, std::__1::default_delete<md::GlobeAdapter> > { 
            struct GlobeAdapter {} *__value_; 
        } __ptr_; 
    }  _globeAdapter;
    struct shared_ptr<md::VKGlobeStylesheet> { 
        struct VKGlobeStylesheet {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _globeStyleSheet;
    struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; } * _globeView;
    bool  _notifyFullyDrawn;
    bool  _notifyFullyLoaded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsVenues;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateCameraFromGlobe;
- (void)_updateViewTransform;
- (void)_updateViewport;
- (void)cancelTileRequests;
- (void)dealloc;
- (void)didLayout;
- (void)globeDidBecomeFullyDrawn;
- (void)globeWillBecomeFullyDrawn;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; struct _retain_objc { } x_3_1_3; struct _release_objc { } x_3_1_4; } x3; struct Device {} *x4; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_5_1_1)(); id x_5_1_2; struct _retain_objc { } x_5_1_3; struct _release_objc { } x_5_1_4; } x5; struct unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> > { struct __compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> > { struct DisplayLink {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct SnapshotRunLoop {} *x_1_2_1; } x_7_1_1; } x7; }*)arg1 manifestConfiguration:(id)arg2;
- (bool)isShowingNoDataPlaceholders;
- (struct LabelSettings { }*)labelSettings;
- (void)setMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setMapType:(long long)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (bool)showsBuildings;
- (bool)showsVenues;
- (void)update;

@end
