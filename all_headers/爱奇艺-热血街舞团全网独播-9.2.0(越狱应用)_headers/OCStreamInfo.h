//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface OCStreamInfo : NSObject
{
    _Bool isAutoPlay;
    NSURL *url;
    long long starttime;
    long long streamid;
    NSDictionary *userinfo;
    long long tag;
}

@property long long tag; // @synthesize tag;
@property(retain) NSDictionary *userinfo; // @synthesize userinfo;
@property _Bool isAutoPlay; // @synthesize isAutoPlay;
@property long long streamid; // @synthesize streamid;
@property long long starttime; // @synthesize starttime;
@property(retain) NSURL *url; // @synthesize url;
- (void).cxx_destruct;
- (const char *)debugInfo;

@end

