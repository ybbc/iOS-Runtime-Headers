/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSOrderedSet, TDPNGAsset;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {
}

@property(retain) TDPNGAsset * asset;
@property(retain) NSOrderedSet * slices;

- (struct { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; })_edgeMetricsForAlignmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRenditionSize:(struct { int x1; int x2; })arg2;
- (void)_logError:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (id)_sliceRectanglesForRenditionSize:(struct { int x1; int x2; })arg1;
- (id)_slicesToUseForCSI;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned int)arg2 document:(id)arg3;

@end