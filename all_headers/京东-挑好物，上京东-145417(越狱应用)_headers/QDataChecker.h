//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation;

@interface QDataChecker : NSObject
{
    NSOperation *_downloadOperation;
}

@property(retain, nonatomic) NSOperation *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
- (void).cxx_destruct;
- (void)cancelVersionDetect;
- (void)startVersionDetectionWithScene:(id)arg1 worldmapScene:(id)arg2;
- (void)dealloc;

@end

