//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class NSString;

@interface ALABanInfoItem : TBCBaseItem
{
    NSString *_channelId;
    NSString *_expireTime;
    NSString *_nowTime;
}

@property(copy, nonatomic) NSString *nowTime; // @synthesize nowTime=_nowTime;
@property(copy, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (id)init;

@end

