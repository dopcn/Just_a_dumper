//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCIMBaseMessageItem.h"

@class NSString;

@interface TBCFrsChannelInfoItem : TBCIMBaseMessageItem
{
    NSString *_channelID;
    NSString *_channelName;
    NSString *_channelAvatar;
}

@property(copy, nonatomic) NSString *channelAvatar; // @synthesize channelAvatar=_channelAvatar;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (id)init;
- (void)dealloc;

@end

