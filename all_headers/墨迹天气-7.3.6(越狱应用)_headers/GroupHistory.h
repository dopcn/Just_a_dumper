//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface GroupHistory : NSObject
{
    NSMutableDictionary *_stats;
}

+ (id)toJsonObj:(id)arg1;
+ (id)parseJsonObj:(id)arg1 dropTime:(int)arg2;
@property(retain, nonatomic) NSMutableDictionary *stats; // @synthesize stats=_stats;
- (void).cxx_destruct;
- (id)toString;
- (int)getTotalRequest;
- (void)addStatWithTime:(int)arg1 count:(int)arg2;
- (id)init;

@end

