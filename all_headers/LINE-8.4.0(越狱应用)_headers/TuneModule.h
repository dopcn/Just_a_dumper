//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TuneManager;

@interface TuneModule : NSObject
{
    TuneManager *_tuneManager;
}

+ (id)moduleWithTuneManager:(id)arg1;
@property(nonatomic) __weak TuneManager *tuneManager; // @synthesize tuneManager=_tuneManager;
- (void).cxx_destruct;
- (id)name;
- (void)unregisterSkyhooks;
- (void)registerSkyhooks;
- (void)bringDown;
- (void)bringUp;
- (void)dealloc;
- (id)initWithTuneManager:(id)arg1;

@end

