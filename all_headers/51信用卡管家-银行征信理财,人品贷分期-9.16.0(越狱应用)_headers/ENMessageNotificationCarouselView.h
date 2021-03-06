//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer;
@protocol ENMessageNotificationCarouselViewProtocol;

@interface ENMessageNotificationCarouselView : UIView
{
    _Bool _isAnimating;
    _Bool _isUpdateDataSource;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _currentViewBlock;
    UIView<ENMessageNotificationCarouselViewProtocol> *_firstCarouselView;
    UIView<ENMessageNotificationCarouselViewProtocol> *_secondCarouselView;
    UIView<ENMessageNotificationCarouselViewProtocol> *_currentShowCarouselView;
    NSArray *_modelArray;
    long long _currentIndex;
    NSTimer *_timer;
    unsigned long long _animationStage;
    long long _animationCount;
}

@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) _Bool isUpdateDataSource; // @synthesize isUpdateDataSource=_isUpdateDataSource;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) unsigned long long animationStage; // @synthesize animationStage=_animationStage;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) UIView<ENMessageNotificationCarouselViewProtocol> *currentShowCarouselView; // @synthesize currentShowCarouselView=_currentShowCarouselView;
@property(retain, nonatomic) UIView<ENMessageNotificationCarouselViewProtocol> *secondCarouselView; // @synthesize secondCarouselView=_secondCarouselView;
@property(retain, nonatomic) UIView<ENMessageNotificationCarouselViewProtocol> *firstCarouselView; // @synthesize firstCarouselView=_firstCarouselView;
@property(copy, nonatomic) CDUnknownBlockType currentViewBlock; // @synthesize currentViewBlock=_currentViewBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;
- (void)tapCarouselView:(id)arg1;
- (void)updateCarouselView;
- (void)animationAction;
- (void)stopAnimation;
- (void)startAnimation;
- (void)updateViewWithCarouselViewClass:(Class)arg1 andModelArray:(id)arg2;
- (void)dealloc;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

