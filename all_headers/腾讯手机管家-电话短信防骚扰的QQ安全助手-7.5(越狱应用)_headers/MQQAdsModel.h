//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MQQAdsModel : NSObject
{
    _Bool _isExternalLink;
    double _startTime;
    double _endTime;
    NSString *_title;
    NSString *_slogan;
    NSURL *_url;
}

@property(nonatomic) _Bool isExternalLink; // @synthesize isExternalLink=_isExternalLink;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)dealloc;

@end

