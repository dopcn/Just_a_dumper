//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MTDownloadModel : NSObject
{
    float _progress;
    CDUnknownBlockType _pausedHandle;
    CDUnknownBlockType _cancelHandle;
    CDUnknownBlockType _successHandle;
    CDUnknownBlockType _failureHandle;
    CDUnknownBlockType _progressHandle;
    NSURL *_URL;
    long long _totalLength;
    long long _state;
    NSString *_fileName;
}

+ (id)downloadModelWithURL:(id)arg1 pausedHandle:(CDUnknownBlockType)arg2 successHandle:(CDUnknownBlockType)arg3 failureHandle:(CDUnknownBlockType)arg4 cancelHandle:(CDUnknownBlockType)arg5 progressHandle:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property long long state; // @synthesize state=_state;
@property long long totalLength; // @synthesize totalLength=_totalLength;
@property float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy) CDUnknownBlockType progressHandle; // @synthesize progressHandle=_progressHandle;
@property(copy) CDUnknownBlockType failureHandle; // @synthesize failureHandle=_failureHandle;
@property(copy) CDUnknownBlockType successHandle; // @synthesize successHandle=_successHandle;
@property(copy) CDUnknownBlockType cancelHandle; // @synthesize cancelHandle=_cancelHandle;
@property(copy) CDUnknownBlockType pausedHandle; // @synthesize pausedHandle=_pausedHandle;
- (void).cxx_destruct;
- (void)notifyProgressHandleWithProgress:(double)arg1;
- (void)notifyCancelHandle;
- (void)notifyFailureHandle;
- (void)notifySuccessHandle;
- (void)notifyPausedHandle;
- (id)initWithURL:(id)arg1 pausedHandle:(CDUnknownBlockType)arg2 successHandle:(CDUnknownBlockType)arg3 failureHandle:(CDUnknownBlockType)arg4 cancelHandle:(CDUnknownBlockType)arg5 progressHandle:(CDUnknownBlockType)arg6;

@end

