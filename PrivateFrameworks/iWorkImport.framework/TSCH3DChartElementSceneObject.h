/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartElementSceneObject : TSCH3DSceneObject

+ (bool)isHorizontalChart;
+ (struct TSCH3DScenePart { id x1; id x2; })partWithEnumerator:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg2;
+ (id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2;
+ (id)scenePropertiesKey;
+ (void)setLowDetailedGeometriesForScene:(id)arg1;
+ (bool)shouldCreateMeshSeriesStorage;

- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 scene:(id)arg2;
- (bool)applyEffectsForProperties:(id)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 pipeline:(id)arg4 injectEffectsUsingBlock:(id /* block */)arg5;
- (float)chartOpacityForScene:(id)arg1;
- (id)delegateFromScene:(id)arg1;
- (float)depthForScene:(id)arg1;
- (id)elementPropertiesFromScene:(id)arg1;
- (struct GeometryResource { int x1; struct ObjcSharedPtr<TSCH3DResource> { id x_2_1_1; } x2; struct GeometryArrays { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct ObjcSharedPtr<TSCH3DGeometry> { id x_4_1_1; } x4; })geometryForSeries:(id)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 scene:(id)arg3;
- (Class)getBounds3DClass;
- (void)getBounds:(id)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })labelOffset:(unsigned int)arg1 labelSize:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2 textureSize:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg3 dataSpaceValue:(float)arg4;
- (id)modelEnumeratorFromScene:(id)arg1;
- (bool)p_isRenderPassDelayedForDelegate:(id)arg1;
- (void)p_processItems:(id)arg1 processItemsClass:(Class)arg2;
- (void)postrenderElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; bool x5; bool x6; bool x7; bool x8; }*)arg1;
- (void)prerenderElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; bool x5; bool x6; bool x7; bool x8; }*)arg1;
- (void)rayPick:(id)arg1;
- (void)render:(id)arg1;
- (struct ElementRenderPass { int x1; })render:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; bool x5; bool x6; bool x7; bool x8; }*)arg1 pushMatrix:(bool)arg2 delayedPass:(bool)arg3;
- (void)renderElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; bool x5; bool x6; bool x7; bool x8; }*)arg1;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)renderTwoPassGeometry:(bool)arg1 processor:(id)arg2 renderBlock:(id /* block */)arg3;
- (Class)resizer3DClass;
- (struct TSCH3DScenePart { id x1; id x2; })scenePartForScene:(id)arg1;
- (id)scenePropertiesKey;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;
- (void)setTransparencyBlendingForProcessor:(id)arg1;
- (bool)shouldDelayForChartOpacity:(float)arg1;
- (bool)shouldRenderEachValue;
- (bool)shouldRenderSeries:(id)arg1;
- (bool)transparencyDepthMask;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;

@end
