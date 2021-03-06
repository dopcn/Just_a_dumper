//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView;
@protocol MILimitSegmentViewDelegate;

@interface MILimitSegmentView : UIView <UIScrollViewDelegate>
{
    _Bool _isPinnedLastSegment;
    NSArray *_titleArray;
    NSArray *_dataArray;
    id <MILimitSegmentViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_buttonArray;
    UIImageView *_indicatorView;
    UIButton *_lastBtn;
    UIButton *_currentSelectedBtn;
    UIImageView *_dividerView;
    UIButton *_pinnedButton;
    double _segmentWidth;
    UIImageView *_arrowImg;
}

@property(retain, nonatomic) UIImageView *arrowImg; // @synthesize arrowImg=_arrowImg;
@property(nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(retain, nonatomic) UIButton *pinnedButton; // @synthesize pinnedButton=_pinnedButton;
@property(retain, nonatomic) UIImageView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UIButton *currentSelectedBtn; // @synthesize currentSelectedBtn=_currentSelectedBtn;
@property(retain, nonatomic) UIButton *lastBtn; // @synthesize lastBtn=_lastBtn;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <MILimitSegmentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(nonatomic) _Bool isPinnedLastSegment; // @synthesize isPinnedLastSegment=_isPinnedLastSegment;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)segmentedControlChange:(id)arg1;
- (void)coverLastBtn:(_Bool)arg1;
- (long long)currentIndex;
- (void)changeSegmentedControlWithIndex:(long long)arg1;
- (id)initWithOriginY:(double)arg1 Titles:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

