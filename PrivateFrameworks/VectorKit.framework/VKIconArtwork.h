/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKIconArtwork : NSObject {
    NSMutableArray * _completionHandlers;
    double  _contentScale;
    struct ExtraStyle { 
        float _scale; 
        float _contentScale; 
        float _tailDirection; 
        struct Matrix<unsigned int, 2, 1> { 
            unsigned int _e[2]; 
        } _glyphImageSize; 
        struct Matrix<unsigned int, 2, 1> { 
            unsigned int _e[2]; 
        } _landmarkImageSize; 
        struct Matrix<unsigned int, 2, 1> { 
            unsigned int _e[2]; 
        } _outlineImageSize; 
        struct basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, lhp::Allocator> > { 
            struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, lhp::Allocator> >::__rep, geo::StdAllocator<char, lhp::Allocator> > { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
                struct StdAllocator<char, lhp::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __r_; 
        } _text; 
    }  _extraStyle;
    struct CGColor { } * _fullBleedColor;
    struct atomic<bool> { 
        _Atomic bool __a_; 
    }  _hasIcon;
    VKImage * _image;
    struct Style { 
        struct optional<gss::IconStyle> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[1]; 
                unsigned char type; 
            } _value; 
        } _iconStyle; 
        struct vector<md::IconImage::IconLayer, geo::StdAllocator<md::IconImage::IconLayer, lhp::Allocator> > { 
            unsigned char *__begin_; 
            unsigned char *__end_; 
            struct __compressed_pair<md::IconImage::IconLayer *, geo::StdAllocator<md::IconImage::IconLayer, lhp::Allocator> > { 
                unsigned char *__value_; 
                struct StdAllocator<md::IconImage::IconLayer, lhp::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __end_cap_; 
        } _iconLayers; 
        float _scale; 
        float _contentScale; 
        float _fillWeight; 
        float _strokeWeight; 
        float _shadowWeight; 
        float _cornerRadius; 
        struct Matrix<float, 2, 1> { 
            float _e[2]; 
        } _glyphMargin; 
        struct Matrix<float, 2, 1> { 
            float _e[2]; 
        } _shadowOffset; 
        struct FixedPointVector<unsigned char, 4> { 
            unsigned char _e[4]; 
        } _fillColor; 
        struct FixedPointVector<unsigned char, 4> { 
            unsigned char _e[4]; 
        } _strokeColor; 
        struct FixedPointVector<unsigned char, 4> { 
            unsigned char _e[4]; 
        } _shadowColor; 
        struct FixedPointVector<unsigned char, 4> { 
            unsigned char _e[4]; 
        } _glyphColor; 
        struct FixedPointVector<unsigned char, 4> { 
            unsigned char _e[4]; 
        } _gradientTop; 
        struct FixedPointVector<unsigned char, 4> { 
            unsigned char _e[4]; 
        } _gradientBottom; 
        struct FixedPointVector<unsigned char, 4> { 
            unsigned char _e[4]; 
        } _overlayColor; 
        unsigned char _glyphBlendMode; 
        unsigned char _glyphStyle; 
        struct basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, lhp::Allocator> > { 
            struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, lhp::Allocator> >::__rep, geo::StdAllocator<char, lhp::Allocator> > { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
                struct StdAllocator<char, lhp::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __r_; 
        } _shieldID; 
    }  _style;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textCenterPosition;
}

@property (nonatomic, readonly) double contentScale;
@property (nonatomic) struct CGColor { }*fullBleedColor;
@property (nonatomic, readonly) struct Style { struct optional<gss::IconStyle> { bool x_1_1_1; union ValueUnion { unsigned char x_2_2_1[1]; unsigned char x_2_2_2; } x_1_1_2; } x1; /* Warning: unhandled struct encoding: '{vector<md::IconImage::IconLayer' */ struct x2; } style; /* unknown property attribute:  lhp::Allocator>=^{Allocator}}}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (id)_newImageWithText:(id)arg1 fontName:(id)arg2;
- (struct Matrix<float, 2, 1> { float x1[2]; })anchorPoint;
- (double)contentScale;
- (void)dealloc;
- (struct CGColor { }*)fullBleedColor;
- (void)getImage:(id /* block */)arg1 queue:(id)arg2;
- (bool)hasBounds;
- (id)image;
- (id)imageWithText:(id)arg1 fontName:(id)arg2;
- (id)initWithImage:(struct CGImage { }*)arg1 contentScale:(double)arg2;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localCollisionBounds;
- (struct Box<unsigned int, 2> { struct Matrix<unsigned int, 2, 1> { unsigned int x_1_1_1[2]; } x1; struct Matrix<unsigned int, 2, 1> { unsigned int x_2_1_1[2]; } x2; })localRenderBounds;
- (void)setFullBleedColor:(struct CGColor { }*)arg1;
- (struct Style { struct optional<gss::IconStyle> { bool x_1_1_1; union ValueUnion { unsigned char x_2_2_1[1]; unsigned char x_2_2_2; } x_1_1_2; } x1; struct vector<md::IconImage::IconLayer, geo::StdAllocator<md::IconImage::IconLayer, lhp::Allocator> > { unsigned char *x_2_1_1; unsigned char *x_2_1_2; struct __compressed_pair<md::IconImage::IconLayer *, geo::StdAllocator<md::IconImage::IconLayer, lhp::Allocator> > { unsigned char *x_3_2_1; struct StdAllocator<md::IconImage::IconLayer, lhp::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_2_1_3; } x2; float x3; float x4; float x5; float x6; float x7; float x8; struct Matrix<float, 2, 1> { float x_9_1_1[2]; } x9; struct Matrix<float, 2, 1> { float x_10_1_1[2]; } x10; struct FixedPointVector<unsigned char, 4> { unsigned char x_11_1_1[4]; } x11; struct FixedPointVector<unsigned char, 4> { unsigned char x_12_1_1[4]; } x12; struct FixedPointVector<unsigned char, 4> { unsigned char x_13_1_1[4]; } x13; struct FixedPointVector<unsigned char, 4> { unsigned char x_14_1_1[4]; } x14; })style;

@end
