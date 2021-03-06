//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TBDetailNumberPageControl, TBDetailPhotoBounceTipView, TBDetailPhotoCaptionControl, UIButton, UILabel, UIPageControl, UIScrollView;
@protocol TBDetailBigPhotoBrowserDelegate;

@interface TBDetailBigPhotoBrowser : UIView <UIScrollViewDelegate>
{
    _Bool _supportRotationMode;
    _Bool _isLayouting;
    _Bool _needShowCustomView;
    long long _saveImageMode;
    UIScrollView *_pagingScrollView;
    TBDetailPhotoBounceTipView *_bounceTipView;
    TBDetailPhotoCaptionControl *_captionControl;
    TBDetailNumberPageControl *_numberPageControl;
    UIView *_subTitleDescView;
    UIView *_captionParentView;
    UIPageControl *_dotPageControl;
    UIButton *_imageSaveButton;
    NSMutableArray *_zoomingViews;
    NSArray *_photoURLs;
    NSMutableDictionary *_successImageInfo;
    unsigned long long _currentPageIndex;
    unsigned long long _padding;
    CDUnknownBlockType _actionHandler;
    id <TBDetailBigPhotoBrowserDelegate> _delegate;
    UILabel *_closeLabel;
}

@property(retain, nonatomic) UILabel *closeLabel; // @synthesize closeLabel=_closeLabel;
@property(nonatomic) _Bool needShowCustomView; // @synthesize needShowCustomView=_needShowCustomView;
@property(nonatomic) __weak id <TBDetailBigPhotoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) unsigned long long padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) _Bool isLayouting; // @synthesize isLayouting=_isLayouting;
@property(retain, nonatomic) NSMutableDictionary *successImageInfo; // @synthesize successImageInfo=_successImageInfo;
@property(retain, nonatomic) NSArray *photoURLs; // @synthesize photoURLs=_photoURLs;
@property(retain, nonatomic) NSMutableArray *zoomingViews; // @synthesize zoomingViews=_zoomingViews;
@property(retain, nonatomic) UIButton *imageSaveButton; // @synthesize imageSaveButton=_imageSaveButton;
@property(retain, nonatomic) UIPageControl *dotPageControl; // @synthesize dotPageControl=_dotPageControl;
@property(retain, nonatomic) UIView *captionParentView; // @synthesize captionParentView=_captionParentView;
@property(retain, nonatomic) UIView *subTitleDescView; // @synthesize subTitleDescView=_subTitleDescView;
@property(retain, nonatomic) TBDetailNumberPageControl *numberPageControl; // @synthesize numberPageControl=_numberPageControl;
@property(retain, nonatomic) TBDetailPhotoCaptionControl *captionControl; // @synthesize captionControl=_captionControl;
@property(retain, nonatomic) TBDetailPhotoBounceTipView *bounceTipView; // @synthesize bounceTipView=_bounceTipView;
@property(retain, nonatomic) UIScrollView *pagingScrollView; // @synthesize pagingScrollView=_pagingScrollView;
@property(nonatomic) _Bool supportRotationMode; // @synthesize supportRotationMode=_supportRotationMode;
@property(nonatomic) long long saveImageMode; // @synthesize saveImageMode=_saveImageMode;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateSubTitleDescView;
- (void)updateCaption;
- (void)setupSubTitleDescViewIfNeeded;
- (void)setupCaptionControlIfNeeded;
- (void)updatePageControlIfNeeded;
- (void)setupPageControlIfNeeded;
- (void)jumpToProductView;
- (struct CGPoint)contentOffsetForPageIndex:(unsigned long long)arg1;
- (struct CGSize)contentSizeForPageScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (id)zoomingViewAtIndex:(unsigned long long)arg1;
- (void)performAnimationForCustomView:(_Bool)arg1;
- (void)viewingPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (struct CGRect)frameForPagingScrollView;
- (void)performLayoutSubviews;
- (void)savePhoto;
- (void)toggleLongPressGesture:(_Bool)arg1;
- (void)saveImage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)addBounceTipHandler:(CDUnknownBlockType)arg1;
- (id)photoModelAtIndex:(unsigned long long)arg1;
- (void)dismissBrowser;
- (void)dismissBrowserCompletion:(CDUnknownBlockType)arg1;
- (void)addToView:(id)arg1;
- (void)addToView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 photoURLs:(id)arg2 pagePadding:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

