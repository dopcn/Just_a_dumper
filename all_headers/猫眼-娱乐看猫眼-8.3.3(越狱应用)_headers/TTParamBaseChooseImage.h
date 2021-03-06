//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQueryParameter.h"

@class NSNumber, NSString;

@interface TTParamBaseChooseImage : TTQueryParameter
{
    _Bool _ensureUpright;
    NSString *_type;
    NSString *_returnType;
    NSNumber *_count;
    NSString *_selectedPhotos;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_maxWidth;
    NSNumber *_maxHeight;
    NSNumber *_quality;
}

@property(retain, nonatomic) NSNumber *quality; // @synthesize quality=_quality;
@property(retain, nonatomic) NSNumber *maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) NSNumber *maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *selectedPhotos; // @synthesize selectedPhotos=_selectedPhotos;
@property(copy, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *returnType; // @synthesize returnType=_returnType;
@property(nonatomic) _Bool ensureUpright; // @synthesize ensureUpright=_ensureUpright;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)validDictionaryValue;

@end

