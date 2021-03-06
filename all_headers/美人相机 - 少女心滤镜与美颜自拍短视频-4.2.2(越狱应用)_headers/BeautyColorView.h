//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DraggableListViewDelegate-Protocol.h"
#import "SLBeautySliderDelegate-Protocol.h"
#import "UIKeyFrameAnimationViewDelegate-Protocol.h"

@class BCPublicCellView, BeautyButton, ColorImageParam, DraggableListView, NSMutableArray, NSMutableDictionary, NSString, SLBeautySlider, UIButton, UIImage, UIImageView, UILongPressGestureRecognizer;
@protocol BeautyColorViewDelegate;

@interface BeautyColorView : UIView <DraggableListViewDelegate, UIKeyFrameAnimationViewDelegate, SLBeautySliderDelegate>
{
    _Bool _isFromLink;
    id <BeautyColorViewDelegate> _delegate;
    UIView *_beautyContentView;
    UIImageView *_beautyImageView;
    UIImage *_beautyImage;
    UIImage *_sourceImage;
    UIImage *_thumbnailImage;
    NSMutableDictionary *_beautyColorImageDic;
    UIButton *_compareBtn;
    DraggableListView *_colorDraggableListView;
    UIView *_operateView;
    BeautyButton *_colorOptionBtn;
    UIImageView *_selectOptionView;
    SLBeautySlider *_sliderControl;
    SLBeautySlider *_skinColorSlider;
    SLBeautySlider *_whiteningSlider;
    SLBeautySlider *_buffingSlider;
    NSString *_selectColorTypeStr;
    ColorImageParam *_colorParam;
    NSMutableArray *_colorParams;
    BCPublicCellView *_selectCellView;
    UIView *_sliderView;
    UIView *_customView;
    UILongPressGestureRecognizer *_longPressCompareGesture;
    struct CGPoint _beautyCenter;
    struct CGRect _beautyFrame;
}

@property(nonatomic) _Bool isFromLink; // @synthesize isFromLink=_isFromLink;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressCompareGesture; // @synthesize longPressCompareGesture=_longPressCompareGesture;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) BCPublicCellView *selectCellView; // @synthesize selectCellView=_selectCellView;
@property(retain) NSMutableArray *colorParams; // @synthesize colorParams=_colorParams;
@property(retain, nonatomic) ColorImageParam *colorParam; // @synthesize colorParam=_colorParam;
@property(retain, nonatomic) NSString *selectColorTypeStr; // @synthesize selectColorTypeStr=_selectColorTypeStr;
@property(retain, nonatomic) SLBeautySlider *buffingSlider; // @synthesize buffingSlider=_buffingSlider;
@property(retain, nonatomic) SLBeautySlider *whiteningSlider; // @synthesize whiteningSlider=_whiteningSlider;
@property(retain, nonatomic) SLBeautySlider *skinColorSlider; // @synthesize skinColorSlider=_skinColorSlider;
@property(retain, nonatomic) SLBeautySlider *sliderControl; // @synthesize sliderControl=_sliderControl;
@property(retain, nonatomic) UIImageView *selectOptionView; // @synthesize selectOptionView=_selectOptionView;
@property(retain, nonatomic) BeautyButton *colorOptionBtn; // @synthesize colorOptionBtn=_colorOptionBtn;
@property(retain, nonatomic) UIView *operateView; // @synthesize operateView=_operateView;
@property(retain, nonatomic) DraggableListView *colorDraggableListView; // @synthesize colorDraggableListView=_colorDraggableListView;
@property(retain, nonatomic) UIButton *compareBtn; // @synthesize compareBtn=_compareBtn;
@property(retain) NSMutableDictionary *beautyColorImageDic; // @synthesize beautyColorImageDic=_beautyColorImageDic;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) struct CGRect beautyFrame; // @synthesize beautyFrame=_beautyFrame;
@property(nonatomic) struct CGPoint beautyCenter; // @synthesize beautyCenter=_beautyCenter;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) UIImage *beautyImage; // @synthesize beautyImage=_beautyImage;
@property(retain, nonatomic) UIImageView *beautyImageView; // @synthesize beautyImageView=_beautyImageView;
@property(retain, nonatomic) UIView *beautyContentView; // @synthesize beautyContentView=_beautyContentView;
@property(nonatomic) __weak id <BeautyColorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyFrameView:(id)arg1 animationDidStop:(id)arg2 finished:(_Bool)arg3;
- (void)draggableListView:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)draggableListView:(id)arg1 selectIndexPath:(id)arg2;
- (id)draggableListView:(id)arg1 cellForIndexPath:(id)arg2;
- (long long)numberOfItemsInListView:(id)arg1;
- (void)longPressCompareGesture:(id)arg1;
- (void)SLBeautySliderTapTrackUp:(id)arg1;
- (void)SLBeautySliderTouchUp:(id)arg1;
- (void)SLBeautySliderValueChanged:(id)arg1;
- (void)SLBeautySliderTouchDown:(id)arg1;
- (void)pressedComparedUp:(id)arg1;
- (void)pressedComparedDown:(id)arg1;
- (void)pressedColorOptionBtnCancel:(id)arg1;
- (void)pressedColorOptionBtnDown:(id)arg1;
- (void)pressedColorOptionBtn:(id)arg1;
- (void)pressedCustomBackBtn:(id)arg1;
- (void)pressedSliderViewBackBtn:(id)arg1;
- (void)pressedSureBtn:(id)arg1;
- (void)pressedCancelBtn:(id)arg1;
- (void)showDraggableTips;
- (void)showTopSafeAreaViewWithImage:(id)arg1;
- (void)dismissBottomSafeAreaView;
- (void)showBottomSafeAreaView;
- (void)dismissCustomView;
- (void)showCustomView;
- (void)dismissSliderView;
- (void)showSliderViewWithValue:(float)arg1 indexPath:(id)arg2;
- (void)dismissCompareBtn;
- (void)showCompareBtn;
- (void)dismissLancomeProgressWheel;
- (void)showLancomeProgressWheel;
- (id)updateJingBaiDateWithColorTags:(id)arg1;
- (id)updateLancomeDateWithColorTags:(id)arg1;
- (long long)itemWithColorTypeStr:(id)arg1;
- (id)getthumbnailImageFromBeautyImageView:(id)arg1;
- (id)nameWithColorImageType:(int)arg1;
- (void)initCustomView;
- (void)initSliderView;
- (void)initOperateView;
- (void)initBeautyImageView;
- (void)initColorData;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1 fromLink:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

