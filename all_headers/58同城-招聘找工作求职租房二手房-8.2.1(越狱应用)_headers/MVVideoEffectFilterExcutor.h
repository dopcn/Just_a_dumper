//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MVVideoEffectFilterExcutorProtocol-Protocol.h"

@class MVMediaTimingFunction, NSArray, NSDictionary, NSString;

@interface MVVideoEffectFilterExcutor : NSObject <MVVideoEffectFilterExcutorProtocol>
{
    _Bool _isLocalFilter;
    NSArray *_animationPath;
    NSDictionary *_filterConfig;
    long long _filterId;
    double _excutorStartTime;
    MVMediaTimingFunction *_interpolation;
}

+ (id)createFilterExcutorWithAnimationPath:(id)arg1 filterConfig:(id)arg2 filterId:(long long)arg3 excutorStartTime:(double)arg4 videoURL:(id)arg5;
@property(nonatomic) _Bool isLocalFilter; // @synthesize isLocalFilter=_isLocalFilter;
@property(retain, nonatomic) MVMediaTimingFunction *interpolation; // @synthesize interpolation=_interpolation;
@property(nonatomic) double excutorStartTime; // @synthesize excutorStartTime=_excutorStartTime;
@property(nonatomic) long long filterId; // @synthesize filterId=_filterId;
@property(retain, nonatomic) NSDictionary *filterConfig; // @synthesize filterConfig=_filterConfig;
@property(retain, nonatomic) NSArray *animationPath; // @synthesize animationPath=_animationPath;
- (void).cxx_destruct;
- (_Bool)findStartAnimationData:(id *)arg1 endAnimationData:(id *)arg2 atTime:(double)arg3 inAnimationArray:(id)arg4;
- (void)updateExcutorTime:(double)arg1;
- (id)getFilter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

