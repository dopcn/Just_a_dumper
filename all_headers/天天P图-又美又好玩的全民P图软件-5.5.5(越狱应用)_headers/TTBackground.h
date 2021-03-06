//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTElement.h"

@class NSDictionary, NSString;

@interface TTBackground : TTElement
{
    int _index;
    int _fillMode;
    float _height;
    NSString *_fileName;
    NSDictionary *_attributes;
    struct CGRect _stretchableFrame;
    struct UIEdgeInsets _margin;
}

@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) struct CGRect stretchableFrame; // @synthesize stretchableFrame=_stretchableFrame;
@property(nonatomic) int fillMode; // @synthesize fillMode=_fillMode;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) int index; // @synthesize index=_index;
- (void)scaleSelf:(float)arg1;
- (void)renderSelf:(struct CGContext *)arg1 contextSize:(struct CGSize)arg2 offset:(struct CGPoint)arg3;
- (void)updateLayer:(_Bool)arg1;
- (void)layout:(unsigned char)arg1 superLayerFrame:(struct CGRect)arg2;
- (id)flipImage:(id)arg1;
- (void)layout:(unsigned char)arg1;
- (id)getImage;
- (void)addToCanvas:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 extraInfo:(id)arg2;

@end

