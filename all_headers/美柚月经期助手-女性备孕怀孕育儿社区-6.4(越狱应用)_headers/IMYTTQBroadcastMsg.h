//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol IMYTTQBroadcastItem;

@interface IMYTTQBroadcastMsg : NSObject
{
    NSArray<IMYTTQBroadcastItem> *_items;
    long long _forum_id;
    NSString *_date;
    NSString *_sn;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
@property(retain, nonatomic) NSArray<IMYTTQBroadcastItem> *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

