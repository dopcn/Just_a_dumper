//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MDBarenessDetectorManager : NSObject
{
    _Bool _hasDetected;
    id _barenessDetector;
    long long _detectorCounter;
}

@property(nonatomic) long long detectorCounter; // @synthesize detectorCounter=_detectorCounter;
@property(nonatomic) _Bool hasDetected; // @synthesize hasDetected=_hasDetected;
@property(retain, nonatomic) id barenessDetector; // @synthesize barenessDetector=_barenessDetector;
- (void).cxx_destruct;
- (void)reset;
- (_Bool)detectVideoFrameBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
- (void)createBarenessDetector;
- (id)init;

@end

