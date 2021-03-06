//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface LVHomePagePraiseModel : MTLModel <MTLJSONSerializing, NSCoding>
{
    NSArray *_praisePictureArr;
    NSString *_pageCursor;
}

+ (id)praisePictureArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *pageCursor; // @synthesize pageCursor=_pageCursor;
@property(retain, nonatomic) NSArray *praisePictureArr; // @synthesize praisePictureArr=_praisePictureArr;
- (void).cxx_destruct;

@end

