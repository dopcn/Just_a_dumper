//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSDictionary, NSString;

@interface QQApiVideoForQZoneObject : QQApiObject
{
    NSString *_assetURL;
    NSDictionary *_extMap;
}

+ (id)objectWithAssetURL:(id)arg1 title:(id)arg2 extMap:(id)arg3;
@property(retain, nonatomic) NSDictionary *extMap; // @synthesize extMap=_extMap;
@property(retain, nonatomic) NSString *assetURL; // @synthesize assetURL=_assetURL;
- (void)dealloc;
- (id)initWithAssetURL:(id)arg1 title:(id)arg2 extMap:(id)arg3;

@end

