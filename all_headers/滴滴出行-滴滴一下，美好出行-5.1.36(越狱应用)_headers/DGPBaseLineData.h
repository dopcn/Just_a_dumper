//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDBaseData.h"

@class DGPRecommendLineModel;

@interface DGPBaseLineData : DDBaseData
{
    _Bool _isHighlighted;
    DGPRecommendLineModel *_lineModel;
    CDUnknownBlockType _lineDetailButtonAction;
}

@property(copy, nonatomic) CDUnknownBlockType lineDetailButtonAction; // @synthesize lineDetailButtonAction=_lineDetailButtonAction;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(retain, nonatomic) DGPRecommendLineModel *lineModel; // @synthesize lineModel=_lineModel;
- (void).cxx_destruct;

@end

