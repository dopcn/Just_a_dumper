//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTUploadModel : NSObject
{
    float _progress;
    NSString *_identifier;
    long long _state;
    CDUnknownBlockType _progressHandle;
}

@property(copy) CDUnknownBlockType progressHandle; // @synthesize progressHandle=_progressHandle;
@property float progress; // @synthesize progress=_progress;
@property long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)notifyFailureHandle;
- (void)notifyProgressHandleWithProgress:(double)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

