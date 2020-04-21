/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSkewingVectorTile : VKVectorTile {
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _skewedShaderMatrix;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { 
        struct ConstantDataTyped<ggl::Tile::View> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _skewedViewConstantData;
}

@property (nonatomic, readonly) const struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x1; struct __shared_weak_count {} *x2; }*skewedViewConstantData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 userInfo:(id)arg3 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg7;
- (const struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x1; struct __shared_weak_count {} *x2; }*)skewedViewConstantData;
- (void)updateViewDependentStateWithContext:(struct LayoutContext { id x1; struct shared_ptr<md::ViewTransform> { struct ViewTransform {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct shared_ptr<md::AnchorContext> { struct AnchorContext {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; id x5; struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct VKEdgeInsets { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct VKEdgeInsets { float x_9_1_1; float x_9_1_2; float x_9_1_3; float x_9_1_4; } x9; unsigned char x10; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; }*)arg1;

@end
