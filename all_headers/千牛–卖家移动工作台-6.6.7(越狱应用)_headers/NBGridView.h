//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NBGridCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIScrollView;
@protocol NBGridViewDataSource, NBGridViewDelegate;

@interface NBGridView : UIView <UIScrollViewDelegate, NBGridCellDelegate>
{
    int _layoutStyle;
    UIScrollView *_scrollView;
    id <NBGridViewDataSource> _dataSource;
    id <NBGridViewDelegate> _delegate;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
    unsigned long long _cellMargin;
    unsigned long long _currentPageIndex;
    unsigned long long _numberOfPages;
    unsigned long long _numberOfTatalRows;
}

@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) unsigned long long numberOfTatalRows; // @synthesize numberOfTatalRows=_numberOfTatalRows;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) unsigned long long cellMargin; // @synthesize cellMargin=_cellMargin;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) __weak id <NBGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NBGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateCurrentPageIndex;
- (void)gridCellSelected:(id)arg1;
- (void)reloadData;
- (void)drawRect:(struct CGRect)arg1;
- (void)createSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

