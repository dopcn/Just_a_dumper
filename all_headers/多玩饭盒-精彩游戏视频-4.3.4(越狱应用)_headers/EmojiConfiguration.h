//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray;

@interface EmojiConfiguration : NSObject <NSCoding>
{
    double _updateTime;
    NSArray *_packageBrieves;
    NSArray *_recommends;
}

@property(retain, nonatomic) NSArray *recommends; // @synthesize recommends=_recommends;
@property(retain, nonatomic) NSArray *packageBrieves; // @synthesize packageBrieves=_packageBrieves;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdateTime:(double)arg1 packageBrieves:(id)arg2 recommends:(id)arg3;

@end

