//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSSplashInterstitialDownloadImageStatisticsModel : NSObject
{
    _Bool _success;
    NSString *_time;
    NSString *_source;
    NSString *_pictureId;
    NSString *_pictureSize;
}

@property(copy, nonatomic) NSString *pictureSize; // @synthesize pictureSize=_pictureSize;
@property(copy, nonatomic) NSString *pictureId; // @synthesize pictureId=_pictureId;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

