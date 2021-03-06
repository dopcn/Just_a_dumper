//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface XHPathCover : UIView
{
    _Bool normal;
    _Bool paste;
    _Bool hasStop;
    _Bool isrefreshed;
    _Bool _touching;
    _Bool _isZoomingEffect;
    _Bool _isLightEffect;
    UIImageView *_bannerImageView;
    double _offsetY;
    double _parallaxHeight;
    double _lightEffectPadding;
    double _lightEffectAlpha;
    CDUnknownBlockType _handleRefreshEvent;
    UIView *_bannerView;
    double _showUserInfoViewOffsetHeight;
}

@property(nonatomic) double showUserInfoViewOffsetHeight; // @synthesize showUserInfoViewOffsetHeight=_showUserInfoViewOffsetHeight;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) CDUnknownBlockType handleRefreshEvent; // @synthesize handleRefreshEvent=_handleRefreshEvent;
@property(nonatomic) double lightEffectAlpha; // @synthesize lightEffectAlpha=_lightEffectAlpha;
@property(nonatomic) double lightEffectPadding; // @synthesize lightEffectPadding=_lightEffectPadding;
@property(nonatomic) _Bool isLightEffect; // @synthesize isLightEffect=_isLightEffect;
@property(nonatomic) _Bool isZoomingEffect; // @synthesize isZoomingEffect=_isZoomingEffect;
@property(nonatomic) double parallaxHeight; // @synthesize parallaxHeight=_parallaxHeight;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) _Bool touching; // @synthesize touching=_touching;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
- (void).cxx_destruct;
- (void)resetTouch;
- (void)setIsRefreshed:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (void)setBGImg:(struct CGRect)arg1;
- (void)_setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBackgroundImageUrlString:(id)arg1;
- (void)setBackgroundImage:(id)arg1;

@end

