/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface StableVideoWriter : NSObject <VideoFrameWriterProgressRecipient> {
    struct VideoHomographyAnalyzer { int (**x1)(); struct _opaque_pthread_mutex_t {} *x2; long long x3; long long x4; struct Int32Size { int x_5_1_1; int x_5_1_2; } x5; struct HomographyRecordVector {} *x6; struct HomographyRecordVector {} *x7; struct HomographyRecordVector {} *x8; float x9; unsigned int x10; bool x11; struct ImageFeatureMatchParamRec { int x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; int x_12_1_5; bool x_12_1_6; bool x_12_1_7; float x_12_1_8; float x_12_1_9; float x_12_1_10; unsigned int x_12_1_11; unsigned int x_12_1_12; unsigned int x_12_1_13; bool x_12_1_14; float x_12_1_15; float x_12_1_16; float x_12_1_17; bool x_12_1_18; } x12; bool x13; struct FrameFeaturesRecord {} *x14; struct atomic<bool> { _Atomic bool x_15_1_1; } x15; struct atomic<bool> { _Atomic bool x_16_1_1; } x16; struct atomic<bool> { _Atomic bool x_17_1_1; } x17; struct VideoFrameQueue { id x_18_1_1; struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_18_1_2; struct vector<InputVideoFrameRecord *, std::__1::allocator<InputVideoFrameRecord *> > { struct InputVideoFrameRecord {} **x_3_2_1; struct InputVideoFrameRecord {} **x_3_2_2; struct __compressed_pair<InputVideoFrameRecord **, std::__1::allocator<InputVideoFrameRecord *> > { struct InputVideoFrameRecord {} **x_3_3_1; } x_3_2_3; } x_18_1_3; unsigned int x_18_1_4; bool x_18_1_5; struct WorkingPixmapPool {} *x_18_1_6; } x18; } * _analyzer;
    int  _cancelingAnalyze;
    int  _cancelingStabilize;
    NSArray * _featureExtractionPixelFormatArray;
    NSError * _movieReaderError;
    NSConditionLock * _movieReaderReadyLock;
    float  _progressAmount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _referenceFrameTime;
    struct CGSize { 
        double width; 
        double height; 
    }  _sourceMovieDimensions;
    NSArray * _videoStabilizationPixelFormatArray;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cropRect;
    bool  didSkipFrames;
    int  doCrop;
    int  doRemapAnalyze;
    int  doingAnalyze;
    int  doingStabilize;
    float  featureImageScale;
    struct ImageFeatureMatchParamRec { 
        int blocksX; 
        int blocksY; 
        int blockOverlap; 
        int detectMethod; 
        int extractMethod; 
        bool justAffine; 
        bool rescalePoints; 
        float angleTolerance; 
        float distanceToleranceFraction; 
        float metricTolerance; 
        unsigned int maxAllowedMatches; 
        unsigned int minFeaturesPerFrame; 
        unsigned int maxFeaturesPerFrame; 
        bool useOpenCVMatching; 
        float nonmaxSuppressionRadius; 
        float maxReprojectionErrorBase; 
        float maxReprojectionErrorSlope; 
        bool useOpenCL; 
    }  featureMatchParams;
    NSArray * frameSkipArray;
    unsigned long long  frameWriteBlockSize;
    VideoFrameWriterQueue * frameWriter;
    <VideoFrameWriterProgressRecipient> * frameWriterUpdateCallback;
    AVAssetReader * inputMovieReader;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  inputTrackTransform;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  limitedTimeEnd;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  limitedTimeStart;
    NSString * movieOutPath;
    int  passThruStabilize;
    id  progressIndicator;
    int  removeAllMotion;
    int  shouldDrawFeaturePoints;
    int  shouldStampFrameInfo;
    bool  shouldUseReferenceFrame;
    float  smoothFactor;
    int  smoothKernelGaussian;
    unsigned int  smoothKernelLength;
    ICHomographyWrapper * smoothedTargetHomographies;
    AVAsset * sourceMovieAsset;
    bool  useLimitedTimes;
}

@property (nonatomic) struct VideoHomographyAnalyzer { int (**x1)(); struct _opaque_pthread_mutex_t {} *x2; long long x3; long long x4; struct Int32Size { int x_5_1_1; int x_5_1_2; } x5; struct HomographyRecordVector {} *x6; struct HomographyRecordVector {} *x7; struct HomographyRecordVector {} *x8; float x9; unsigned int x10; bool x11; struct ImageFeatureMatchParamRec { int x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; int x_12_1_5; bool x_12_1_6; bool x_12_1_7; float x_12_1_8; float x_12_1_9; float x_12_1_10; unsigned int x_12_1_11; unsigned int x_12_1_12; unsigned int x_12_1_13; bool x_12_1_14; float x_12_1_15; float x_12_1_16; float x_12_1_17; bool x_12_1_18; } x12; bool x13; struct FrameFeaturesRecord {} *x14; struct atomic<bool> { _Atomic bool x_15_1_1; } x15; struct atomic<bool> { _Atomic bool x_16_1_1; } x16; struct atomic<bool> { _Atomic bool x_17_1_1; } x17; struct VideoFrameQueue { id x_18_1_1; struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_18_1_2; /* Warning: unhandled struct encoding: '{vector<InputVideoFrameRecord *' */ struct x_18_1_3; } x18; }*analyzer; /* unknown property attribute:  std::__1::allocator<LoopClosureTracker *> >=^^{LoopClosureTracker}}}} */
@property int cancelingAnalyze;
@property int cancelingStabilize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic) bool didSkipFrames;
@property (nonatomic) int doCrop;
@property (nonatomic) int doRemapAnalyze;
@property int doingAnalyze;
@property int doingStabilize;
@property (nonatomic, retain) NSArray *featureExtractionPixelFormatArray;
@property (nonatomic) float featureImageScale;
@property (retain) NSArray *frameSkipArray;
@property (nonatomic) unsigned long long frameWriteBlockSize;
@property (nonatomic, retain) VideoFrameWriterQueue *frameWriter;
@property <VideoFrameWriterProgressRecipient> *frameWriterUpdateCallback;
@property (retain) AVAssetReader *inputMovieReader;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } inputTrackTransform;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } limitedTimeEnd;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } limitedTimeStart;
@property (nonatomic, retain) NSString *movieOutPath;
@property (retain) NSError *movieReaderError;
@property (nonatomic, retain) NSConditionLock *movieReaderReadyLock;
@property int passThruStabilize;
@property float progressAmount;
@property id progressIndicator;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } referenceFrameTime;
@property (nonatomic) int removeAllMotion;
@property (nonatomic) int shouldDrawFeaturePoints;
@property (nonatomic) int shouldStampFrameInfo;
@property (nonatomic) bool shouldUseReferenceFrame;
@property (nonatomic) float smoothFactor;
@property (nonatomic) int smoothKernelGaussian;
@property (nonatomic) unsigned int smoothKernelLength;
@property (retain) ICHomographyWrapper *smoothedTargetHomographies;
@property (nonatomic, retain) AVAsset *sourceMovieAsset;
@property (nonatomic) struct CGSize { double x1; double x2; } sourceMovieDimensions;
@property (nonatomic) bool useLimitedTimes;
@property (nonatomic, retain) NSArray *videoStabilizationPixelFormatArray;

- (void).cxx_destruct;
- (bool)CanDoTripodFromHomographies:(struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)arg1 firstFrame:(unsigned long long)arg2 lastFrame:(unsigned long long)arg3 refFrame:(unsigned long long)arg4 cropRectOut:(struct FloatRect { struct Point2f { float x_1_1_1; float x_1_1_2; } x1; struct Point2f { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (bool)CanDoTripodFromRemaps:(struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)arg1;
- (bool)ComputeStabilizedOutputHomographies;
- (id)ComputeTripodOutputHomographies:(struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)arg1 firstFrame:(long long)arg2 lastFrame:(long long)arg3 cropRectOut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (short)FeedMovieFramesToAnalyzer;
- (void)FetchReferenceFrame;
- (void)FindCropBoundsForHomographies:(struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)arg1 startIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (bool)FindFrameTimeIndexInHomographies:(struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 indexOut:(unsigned long long*)arg3;
- (short)FindSourceMovieHomographies;
- (id)GenerateTempVideoFilePath;
- (struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)GetRemapHomographies;
- (struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)GetSourceHomographies;
- (void)SetMinimumTripodCropRatio:(float)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })SingleFrameTimeForVideoTrack:(id)arg1;
- (void)StabilizeVideo;
- (void)StartAnalyzer;
- (void)StartAnalyzerForRemap;
- (void)UpdateProgressWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (void)WriteVideoWithHomographies_SingleThread:(struct HomographyRecordVector { struct HomographyInfoRecord {} **x1; struct HomographyInfoRecord {} **x2; struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *> > { struct HomographyInfoRecord {} **x_3_1_1; } x3; }*)arg1 chainHomographies:(bool)arg2 passThruStabilization:(bool)arg3;
- (struct VideoHomographyAnalyzer { int (**x1)(); struct _opaque_pthread_mutex_t {} *x2; long long x3; long long x4; struct Int32Size { int x_5_1_1; int x_5_1_2; } x5; struct HomographyRecordVector {} *x6; struct HomographyRecordVector {} *x7; struct HomographyRecordVector {} *x8; float x9; unsigned int x10; bool x11; struct ImageFeatureMatchParamRec { int x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; int x_12_1_5; bool x_12_1_6; bool x_12_1_7; float x_12_1_8; float x_12_1_9; float x_12_1_10; unsigned int x_12_1_11; unsigned int x_12_1_12; unsigned int x_12_1_13; bool x_12_1_14; float x_12_1_15; float x_12_1_16; float x_12_1_17; bool x_12_1_18; } x12; bool x13; struct FrameFeaturesRecord {} *x14; struct atomic<bool> { _Atomic bool x_15_1_1; } x15; struct atomic<bool> { _Atomic bool x_16_1_1; } x16; struct atomic<bool> { _Atomic bool x_17_1_1; } x17; struct VideoFrameQueue { id x_18_1_1; struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_18_1_2; struct vector<InputVideoFrameRecord *, std::__1::allocator<InputVideoFrameRecord *> > { struct InputVideoFrameRecord {} **x_3_2_1; struct InputVideoFrameRecord {} **x_3_2_2; struct __compressed_pair<InputVideoFrameRecord **, std::__1::allocator<InputVideoFrameRecord *> > { struct InputVideoFrameRecord {} **x_3_3_1; } x_3_2_3; } x_18_1_3; unsigned int x_18_1_4; bool x_18_1_5; struct WorkingPixmapPool {} *x_18_1_6; } x18; }*)analyzer;
- (void)beginReadingMovie:(id)arg1 pixelFormatArray:(id)arg2 withScale:(float)arg3;
- (void)cancelAnalyze;
- (void)cancelStabilize;
- (int)cancelingAnalyze;
- (int)cancelingStabilize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (bool)didSkipFrames;
- (int)doCrop;
- (int)doRemapAnalyze;
- (int)doingAnalyze;
- (int)doingStabilize;
- (void)drawFeaturePoints:(struct vector<ImageFeaturePair, std::__1::allocator<ImageFeaturePair> > { struct ImageFeaturePair {} *x1; struct ImageFeaturePair {} *x2; struct __compressed_pair<ImageFeaturePair *, std::__1::allocator<ImageFeaturePair> > { struct ImageFeaturePair {} *x_3_1_1; } x3; }*)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2 featureScale:(float)arg3;
- (id)featureExtractionPixelFormatArray;
- (float)featureImageScale;
- (id)frameSkipArray;
- (unsigned long long)frameWriteBlockSize;
- (id)frameWriter;
- (id)frameWriterUpdateCallback;
- (struct ImageFeatureMatchParamRec { int x1; int x2; int x3; int x4; int x5; bool x6; bool x7; float x8; float x9; float x10; unsigned int x11; unsigned int x12; unsigned int x13; bool x14; float x15; float x16; float x17; bool x18; }*)getFeatureMatchParams;
- (bool)haveDirectModeHomographies;
- (bool)haveSourceHomographies;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)inputMovieReader;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })inputTrackTransform;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })limitedTimeEnd;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })limitedTimeStart;
- (id)movieOutPath;
- (id)movieReaderError;
- (id)movieReaderReadyLock;
- (struct __CVBuffer { }*)newPixelBufferFromCGImage:(struct CGImage { }*)arg1;
- (int)passThruStabilize;
- (float)progressAmount;
- (id)progressIndicator;
- (struct opaqueCMSampleBuffer { }*)readNextMovieSampleBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })referenceFrameTime;
- (int)removeAllMotion;
- (void)setAnalyzer:(struct VideoHomographyAnalyzer { int (**x1)(); struct _opaque_pthread_mutex_t {} *x2; long long x3; long long x4; struct Int32Size { int x_5_1_1; int x_5_1_2; } x5; struct HomographyRecordVector {} *x6; struct HomographyRecordVector {} *x7; struct HomographyRecordVector {} *x8; float x9; unsigned int x10; bool x11; struct ImageFeatureMatchParamRec { int x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; int x_12_1_5; bool x_12_1_6; bool x_12_1_7; float x_12_1_8; float x_12_1_9; float x_12_1_10; unsigned int x_12_1_11; unsigned int x_12_1_12; unsigned int x_12_1_13; bool x_12_1_14; float x_12_1_15; float x_12_1_16; float x_12_1_17; bool x_12_1_18; } x12; bool x13; struct FrameFeaturesRecord {} *x14; struct atomic<bool> { _Atomic bool x_15_1_1; } x15; struct atomic<bool> { _Atomic bool x_16_1_1; } x16; struct atomic<bool> { _Atomic bool x_17_1_1; } x17; struct VideoFrameQueue { id x_18_1_1; struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_18_1_2; struct vector<InputVideoFrameRecord *, std::__1::allocator<InputVideoFrameRecord *> > { struct InputVideoFrameRecord {} **x_3_2_1; struct InputVideoFrameRecord {} **x_3_2_2; struct __compressed_pair<InputVideoFrameRecord **, std::__1::allocator<InputVideoFrameRecord *> > { struct InputVideoFrameRecord {} **x_3_3_1; } x_3_2_3; } x_18_1_3; unsigned int x_18_1_4; bool x_18_1_5; struct WorkingPixmapPool {} *x_18_1_6; } x18; }*)arg1;
- (void)setCancelingAnalyze:(int)arg1;
- (void)setCancelingStabilize:(int)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDidSkipFrames:(bool)arg1;
- (void)setDoCrop:(int)arg1;
- (void)setDoRemapAnalyze:(int)arg1;
- (void)setDoingAnalyze:(int)arg1;
- (void)setDoingStabilize:(int)arg1;
- (void)setFeatureExtractionPixelFormatArray:(id)arg1;
- (void)setFeatureImageScale:(float)arg1;
- (void)setFrameSkipArray:(id)arg1;
- (void)setFrameWriteBlockSize:(unsigned long long)arg1;
- (void)setFrameWriter:(id)arg1;
- (void)setFrameWriterUpdateCallback:(id)arg1;
- (void)setInputMovieReader:(id)arg1;
- (void)setInputTrackTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setLimitedTimeEnd:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLimitedTimeStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieOutPath:(id)arg1;
- (void)setMovieReaderError:(id)arg1;
- (void)setMovieReaderReadyLock:(id)arg1;
- (void)setPassThruStabilize:(int)arg1;
- (void)setProgressAmount:(float)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setReferenceFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRemoveAllMotion:(int)arg1;
- (void)setShouldDrawFeaturePoints:(int)arg1;
- (void)setShouldStampFrameInfo:(int)arg1;
- (void)setShouldUseReferenceFrame:(bool)arg1;
- (void)setSmoothFactor:(float)arg1;
- (void)setSmoothKernelGaussian:(int)arg1;
- (void)setSmoothKernelLength:(unsigned int)arg1;
- (void)setSmoothedTargetHomographies:(id)arg1;
- (void)setSourceMovieAsset:(id)arg1;
- (void)setSourceMovieDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseLimitedTimes:(bool)arg1;
- (void)setVideoStabilizationPixelFormatArray:(id)arg1;
- (int)shouldDrawFeaturePoints;
- (bool)shouldDropFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)shouldStampFrameInfo;
- (bool)shouldUseReferenceFrame;
- (float)smoothFactor;
- (int)smoothKernelGaussian;
- (unsigned int)smoothKernelLength;
- (id)smoothedTargetHomographies;
- (id)sourceMovieAsset;
- (struct CGSize { double x1; double x2; })sourceMovieDimensions;
- (void)tagFramePixelBuffer:(struct __CVBuffer { }*)arg1 withString:(id)arg2;
- (void)updateCallbackForFrameIndex:(unsigned long long)arg1 withPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)updateVideoProgress;
- (bool)useLimitedTimes;
- (id)videoStabilizationPixelFormatArray;
- (void)waitForMovieReaderReady;

@end
