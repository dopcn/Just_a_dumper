//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMPointOverlayItem.h"

@class AMap3DOverlayTexture, NSString;

@interface NMPointTipItem : NMPointOverlayItem
{
    _Bool _toLeft;
    _Bool _isMainRoad;
    _Bool _isNight;
    _Bool _isDeleteWhileTheCondition;
    _Bool _isFadeOnOrOff;
    float _minMapLevelShow;
    float _maxMapLevelShow;
    float _minCameraAngleShow;
    int _tipType;
    NSString *_tipName;
    NSString *_tipID;
    AMap3DOverlayTexture *_texture;
    double _alpha;
    struct CGPoint _anchor;
}

@property(nonatomic) int tipType; // @synthesize tipType=_tipType;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool isFadeOnOrOff; // @synthesize isFadeOnOrOff=_isFadeOnOrOff;
@property(nonatomic) float minCameraAngleShow; // @synthesize minCameraAngleShow=_minCameraAngleShow;
@property(nonatomic) float maxMapLevelShow; // @synthesize maxMapLevelShow=_maxMapLevelShow;
@property(nonatomic) float minMapLevelShow; // @synthesize minMapLevelShow=_minMapLevelShow;
@property(nonatomic) _Bool isDeleteWhileTheCondition; // @synthesize isDeleteWhileTheCondition=_isDeleteWhileTheCondition;
@property(retain, nonatomic) AMap3DOverlayTexture *texture; // @synthesize texture=_texture;
@property(nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) _Bool isNight; // @synthesize isNight=_isNight;
@property(nonatomic) _Bool isMainRoad; // @synthesize isMainRoad=_isMainRoad;
@property(nonatomic) _Bool toLeft; // @synthesize toLeft=_toLeft;
@property(retain, nonatomic) NSString *tipID; // @synthesize tipID=_tipID;
@property(retain, nonatomic) NSString *tipName; // @synthesize tipName=_tipName;
- (void).cxx_destruct;
- (void)generateTipsTexture:(id)arg1 isPerspective:(_Bool)arg2;
- (id)generateTipsImage;
- (id)getTextureImagePath;
- (id)init;

@end

