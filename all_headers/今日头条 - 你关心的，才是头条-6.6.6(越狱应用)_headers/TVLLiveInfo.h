//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TVLLiveURL;

@interface TVLLiveInfo : NSObject
{
    long long _startTime;
    long long _endTime;
    unsigned long long _status;
    TVLLiveURL *_url0;
    TVLLiveURL *_url1;
}

+ (id)liveInfoWithJSON:(id)arg1;
@property(retain, nonatomic) TVLLiveURL *url1; // @synthesize url1=_url1;
@property(retain, nonatomic) TVLLiveURL *url0; // @synthesize url0=_url0;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)avaluableURLs;

@end

