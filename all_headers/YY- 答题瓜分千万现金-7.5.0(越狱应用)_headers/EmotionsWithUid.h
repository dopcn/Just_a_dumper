//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class Emotion;

@interface EmotionsWithUid : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Emotion *emotion; // @dynamic emotion;
@property(nonatomic) _Bool hasEmotion; // @dynamic hasEmotion;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(nonatomic) unsigned long long uid; // @dynamic uid;

@end

