//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VoipCallEvent : NSObject
{
    int _duration;
    NSString *_partnerUID;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *partnerUID; // @synthesize partnerUID=_partnerUID;
- (void).cxx_destruct;

@end

