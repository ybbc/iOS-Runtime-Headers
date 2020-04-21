/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerPrivate : NSObject {
    bool  allowUpdate;
    CALayer * effectsLayer;
    PDFTimer * forcedUpdateTimer;
    int  generationCount;
    NSObject<PDFPageLayerGeometryInterface> * geometryInterface;
    bool  isForcingUpdate;
    _Atomic bool  isTiling;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  lastLayerFrameInRootView;
    double  lastLayoutZoomFactor;
    NSDate * lastZoomChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  oldBoundsForBox;
    long long  oldPageRotation;
    PDFPage * page;
    NSMutableDictionary * pageLayerEffects;
    PDFRenderingProperties * renderingProperties;
    _Atomic bool  requestedTiling;
    bool  tileLayerHidden;
    NSMutableArray * tiles;
    CALayer * tilesLayer;
    unsigned long long  visibilityDelegateIndex;
    bool  zoomChangeScheduled;
}

- (void).cxx_destruct;

@end
