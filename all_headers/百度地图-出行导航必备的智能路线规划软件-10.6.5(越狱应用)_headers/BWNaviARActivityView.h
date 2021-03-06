//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BWNaviActivityPoiModel, UIButton;
@protocol BWNaviARActivityViewDelegate;

@interface BWNaviARActivityView : UIView
{
    UIButton *_btActivity;
    struct CGSize _viewSize;
    id <BWNaviARActivityViewDelegate> _poiViewDelegate;
    BWNaviActivityPoiModel *_poiActivityModel;
}

@property(retain, nonatomic) BWNaviActivityPoiModel *poiActivityModel; // @synthesize poiActivityModel=_poiActivityModel;
@property(nonatomic) __weak id <BWNaviARActivityViewDelegate> poiViewDelegate; // @synthesize poiViewDelegate=_poiViewDelegate;
- (void).cxx_destruct;
- (void)clickActiviyBt;
- (void)setDestOriPoint:(struct CGPoint)arg1 interactFrame:(struct CGRect)arg2;
- (double)getDistanceFromMyLocWithPoint:(struct BMPoint)arg1;
- (id)selectArPoisInPoints:(id)arg1;
- (struct CGSize)resetContentsAndRetSize;
- (struct BMPoint)getActivityPoint;
- (struct BMPoint)makeArNaviPoints:(id)arg1;
- (id)init;

@end

