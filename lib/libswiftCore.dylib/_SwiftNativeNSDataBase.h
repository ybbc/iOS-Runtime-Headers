/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Swift/libswiftCore.dylib
 */

@interface _SwiftNativeNSDataBase : NSData {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline> > { 
        struct atomic<swift::RefCountBitsT<swift::RefCountIsInline> > { 
            _Atomic struct RefCountBitsT<swift::RefCountIsInline> {} __a_; 
        } refCounts; 
    }  refCounts;
}

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
