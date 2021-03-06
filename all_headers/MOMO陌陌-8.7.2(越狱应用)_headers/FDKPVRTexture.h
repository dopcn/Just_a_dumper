//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class FDKPVRTextureMeta, NSArray, NSString;

@interface FDKPVRTexture : MTLModel <MTLJSONSerializing>
{
    NSArray *_frames;
    FDKPVRTextureMeta *_meta;
}

+ (id)textureWithContentsOfURL:(id)arg1;
+ (id)JSONTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) FDKPVRTextureMeta *meta; // @synthesize meta=_meta;
@property(readonly, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void).cxx_destruct;
- (_Bool)textureIsRotatedForDecorationIndex:(unsigned long long)arg1;
- (struct CGRect)textureFrameForDecorationIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

