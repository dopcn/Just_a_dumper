//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIScrollView;
@protocol UnlimitedScrollViewDataSource, UnlimitedScrollViewDelegate;

@interface UnlimitedScrollView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    id <UnlimitedScrollViewDataSource> _dataSource;
    id <UnlimitedScrollViewDelegate> _delegate;
    NSMutableArray *_reuseArray;
    NSArray *_usingArray;
}

@property(copy, nonatomic) NSArray *usingArray; // @synthesize usingArray=_usingArray;
@property(retain, nonatomic) NSMutableArray *reuseArray; // @synthesize reuseArray=_reuseArray;
@property(nonatomic) __weak id <UnlimitedScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UnlimitedScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (id)middleCell;
- (void)layoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)middleIndex;
- (id)defaultCell;
- (void)scroll:(long long)arg1;
- (void)refreshScrollView;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)reloadData:(_Bool)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

