//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIScrollView;
@protocol KTVScrollImageViewDelegate;

@interface KTVScrollImageView : UIView <UIScrollViewDelegate>
{
    long long _currentPageIndex;
    id <KTVScrollImageViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_leftImageViewCell;
    UIView *_centerImageViewCell;
    UIView *_rightImageViewCell;
}

@property(retain, nonatomic) UIView *rightImageViewCell; // @synthesize rightImageViewCell=_rightImageViewCell;
@property(retain, nonatomic) UIView *centerImageViewCell; // @synthesize centerImageViewCell=_centerImageViewCell;
@property(retain, nonatomic) UIView *leftImageViewCell; // @synthesize leftImageViewCell=_leftImageViewCell;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <KTVScrollImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollRightByOnePage;
- (void)scrollLeftByOnePage;
- (id)allCells;
- (void)refreshImageViewCell:(id)arg1 pageIndex:(long long)arg2;
- (void)resetCurrentPageIndex:(long long)arg1;
- (void)registerScrollImageViewCellNib:(id)arg1;
- (void)registerDefaultScrollImageViewCell;
@property(readonly, nonatomic) UIView *currentScrollImageViewCell;
- (void)reloadData;
- (void)initializeScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

