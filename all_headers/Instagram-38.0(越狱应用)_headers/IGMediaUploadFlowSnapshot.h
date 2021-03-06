//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGMediaUploadAnalyticsWaterfall, IGMediaUploadModel, NSArray;

@interface IGMediaUploadFlowSnapshot : FBValueObject <NSCopying, NSCoding>
{
    IGMediaUploadModel *_uploadModel;
    IGMediaUploadAnalyticsWaterfall *_waterfall;
    NSArray *_steps;
    NSArray *_phases;
    long long _currentUploadStep;
    NSArray *_stepTimelineItems;
}

@property(readonly, copy, nonatomic) NSArray *stepTimelineItems; // @synthesize stepTimelineItems=_stepTimelineItems;
@property(readonly, nonatomic) long long currentUploadStep; // @synthesize currentUploadStep=_currentUploadStep;
@property(readonly, copy, nonatomic) NSArray *phases; // @synthesize phases=_phases;
@property(readonly, copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, copy, nonatomic) IGMediaUploadAnalyticsWaterfall *waterfall; // @synthesize waterfall=_waterfall;
@property(readonly, copy, nonatomic) IGMediaUploadModel *uploadModel; // @synthesize uploadModel=_uploadModel;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUploadModel:(id)arg1 waterfall:(id)arg2 steps:(id)arg3 phases:(id)arg4 currentUploadStep:(long long)arg5 stepTimelineItems:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end

