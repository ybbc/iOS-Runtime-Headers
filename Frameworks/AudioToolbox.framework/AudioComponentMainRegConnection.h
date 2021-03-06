/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {
    struct ConnectionInfo { 
        NSXPCConnection *mConnection; 
        int mExtUsePermission; 
        int mSDKLinkVersion; 
    }  mConnInfo;
    struct AudioComponentRegistrarImpl { bool x1; bool x2; bool x3; bool x4; id x5; struct function<void (const AudioComponentVector &, AudioComponentVector &)>={type=[24C] {} x6; struct __base<void (const AudioComponentVector &, AudioComponentVector &)> {} *x7; } * mImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getComponentList:(id)arg1 linkedSDKVersion:(int)arg2 includeExtensions:(bool)arg3 reply:(id /* block */)arg4;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl { bool x1; bool x2; bool x3; bool x4; id x5; struct function<void (const AudioComponentVector &, AudioComponentVector &)>={type=[24C] {} x6; struct __base<void (const AudioComponentVector &, AudioComponentVector &)> {} *x7; }*)arg1 connection:(id)arg2;

@end
