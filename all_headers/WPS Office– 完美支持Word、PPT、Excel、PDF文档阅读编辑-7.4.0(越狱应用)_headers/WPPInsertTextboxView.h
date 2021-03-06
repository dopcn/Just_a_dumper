//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KGridViewDelegate-Protocol.h"

@class KGridView, NSString;
@protocol WPPInsertTextboxViewDelegate;

@interface WPPInsertTextboxView : UIView <KGridViewDelegate>
{
    id <WPPInsertTextboxViewDelegate> _delegate;
    UIView *_titleView;
    KGridView *_gridView;
}

@property(retain, nonatomic) KGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) id <WPPInsertTextboxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gridView:(id)arg1 didSelectCell:(id)arg2;
- (id)gridView:(id)arg1 cellForGridIndex:(id)arg2;
- (double)gridView:(id)arg1 spaceForCellGridIndex:(id)arg2;
- (double)gridView:(id)arg1 spaceForRowAt:(long long)arg2;
- (long long)numberOfCellsOfGridView:(id)arg1;
- (long long)numberOfColumnsOfGridView:(id)arg1;
- (double)gridView:(id)arg1 heightForRowAt:(long long)arg2;
- (double)gridView:(id)arg1 widthForColumnAt:(long long)arg2;
- (double)horizontalGap;
- (double)verticalGap;
- (double)topGap;
- (double)leftGap;
- (unsigned long long)numberRows;
- (unsigned long long)numberOfColumns;
- (double)contentHeight;
- (void)resetLayout;
- (void)initTextboxView;
- (void)initTitleView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

