//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface SnowSubscribeDetailLocationInfoModel : MTLModel <MTLJSONSerializing>
{
    NSString *_latitude;
    NSString *_longitude;
    NSString *_locationDescribe;
    NSNumber *_subscribeStatus;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *subscribeStatus; // @synthesize subscribeStatus=_subscribeStatus;
@property(copy, nonatomic) NSString *locationDescribe; // @synthesize locationDescribe=_locationDescribe;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;

@end

