//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VideoEncodeConfig : NSObject
{
    unsigned long long _videoFrameRate;
    unsigned long long _videoMaxKeyframeInterval;
    unsigned long long _videoBitRate;
    struct CGSize _videoSize;
}

@property(nonatomic) unsigned long long videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(nonatomic) unsigned long long videoMaxKeyframeInterval; // @synthesize videoMaxKeyframeInterval=_videoMaxKeyframeInterval;
@property(nonatomic) unsigned long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;

@end

