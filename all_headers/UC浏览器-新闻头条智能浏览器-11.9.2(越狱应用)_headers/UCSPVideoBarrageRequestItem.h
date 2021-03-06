//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UCSPVideoBarrageRequestItem : NSObject
{
    NSString *_pageUrl;
    NSString *_videoTitle;
    long long _start;
    long long _size;
    long long _startTime;
    long long _interval;
}

@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
- (void)dealloc;

@end

