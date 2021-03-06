//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LiveStickerItem : NSObject
{
    NSString *_identity;
    NSString *_name;
    long long _type;
    NSString *_md5;
    NSString *_horizontalThumbUrl;
    NSString *_verticalThumbUrl;
    NSString *_packageUrl;
}

+ (id)itemFromJsonObject:(id)arg1;
@property(copy, nonatomic) NSString *packageUrl; // @synthesize packageUrl=_packageUrl;
@property(copy, nonatomic) NSString *verticalThumbUrl; // @synthesize verticalThumbUrl=_verticalThumbUrl;
@property(copy, nonatomic) NSString *horizontalThumbUrl; // @synthesize horizontalThumbUrl=_horizontalThumbUrl;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;

@end

