//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttPlugIn.h"

@class NSString;

@interface MttGetVideoVidePlugIn : MttPlugIn
{
    _Bool _isSuccess;
    NSString *_jsStr;
    NSString *_videoID;
}

@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(copy, nonatomic) NSString *jsStr; // @synthesize jsStr=_jsStr;
- (void).cxx_destruct;
- (void)tryGetVideoID;
- (void)hostControllerDidMainFrameFinished;
- (void)hostControllerDidLoadFinished;
- (void)hostControllerDidStartLoading;
- (void)shutdown;
- (void)startup;

@end

