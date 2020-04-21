/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetSelectionKnobsPositionsRenderProcessor : TSCH3DTransformGeometryRenderProcessor {
    float  mNormalizedKnobRadius;
    NSMutableArray * mProjectedPoints;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate * mSceneObjectDelegate;
}

@property (nonatomic) float normalizedKnobRadius;
@property (nonatomic, retain) NSMutableArray *projectedPoints;
@property (nonatomic, retain) TSCH3DGetSelectionKnobsPositionsPipelineDelegate *sceneObjectDelegate;

- (void)dealloc;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })modelViewNormalizedProjection;
- (float)normalizedKnobRadius;
- (id)projectedPoints;
- (id)sceneObjectDelegate;
- (void)setNormalizedKnobRadius:(float)arg1;
- (void)setProjectedPoints:(id)arg1;
- (void)setSceneObjectDelegate:(id)arg1;
- (void)submit:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;

@end
