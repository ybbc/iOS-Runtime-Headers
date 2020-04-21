/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBackForwardListItem : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardListItem> { 
        struct type { 
            unsigned char __lx[288]; 
        } data; 
    }  _item;
}

@property (readonly, copy) NSURL *URL;
@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) struct WebBackForwardListItem { int (**x1)(); id x2; struct BackForwardListItemState { struct BackForwardItemIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x_1_3_1; } x_1_2_1; struct ObjectIdentifier<WebCore::BackForwardItemIdentifier::ItemIdentifierType> { unsigned long long x_2_3_1; } x_1_2_2; } x_3_1_1; /* Warning: unhandled struct encoding: '{PageState={String={RefPtr<WTF::StringImpl' */ struct x_3_1_2; } x3; }*_item; /* unknown property attribute:  WTF::DumbPtrTraits<WebKit::ViewSnapshot> >=^{ViewSnapshot}}}Q^{SuspendedPageProxy}} */
@property (setter=_sf_setQuickLookDocument:, nonatomic, retain) _SFQuickLookDocument *_sf_quickLookDocument;
@property (setter=_sf_setSecurityInfo:, nonatomic, retain) _SFSecurityInfo *_sf_securityInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *initialURL;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id)URL;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct CGImage { }*)_copySnapshotForTesting;
- (struct WebBackForwardListItem { int (**x1)(); id x2; struct BackForwardListItemState { struct BackForwardItemIdentifier { struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x_1_3_1; } x_1_2_1; struct ObjectIdentifier<WebCore::BackForwardItemIdentifier::ItemIdentifierType> { unsigned long long x_2_3_1; } x_1_2_2; } x_3_1_1; struct PageState { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; struct FrameState { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_2_3_1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_2_4_1; } x_2_3_2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_3_4_1; } x_2_3_3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_4_4_1; } x_2_3_4; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_5_4_1; unsigned int x_5_4_2; unsigned int x_5_4_3; } x_2_3_5; struct optional<WTF::Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> > { bool x_6_4_1; union storage_t<WTF::Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> > { unsigned char x_2_5_1; struct Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> { char *x_2_6_1; unsigned int x_2_6_2; unsigned int x_2_6_3; } x_2_5_2; } x_6_4_2; } x_2_3_6; } x_2_2_2; } x_3_1_2; } x3; }*)_item;
- (void)dealloc;
- (id)initialURL;
- (id)title;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_quickLookDocument;
- (id)_sf_securityInfo;
- (void)_sf_setQuickLookDocument:(id)arg1;
- (void)_sf_setSecurityInfo:(id)arg1;

@end
