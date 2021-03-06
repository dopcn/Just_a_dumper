//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWTableViewCell.h"

#import "SWColumnViewDataSource-Protocol.h"
#import "SWColumnViewDelegate-Protocol.h"

@class NSString, SWBackgroundPackage, SWColumnView, UIActivityIndicatorView;
@protocol SWBackgroundDetailGridCell_ColumnTypeDelegate;

@interface SWBackgroundDetailGridCell_ColumnType : SWTableViewCell <SWColumnViewDataSource, SWColumnViewDelegate>
{
    id <SWBackgroundDetailGridCell_ColumnTypeDelegate> _delegate;
    SWBackgroundPackage *_package;
    SWColumnView *_columnView;
    UIActivityIndicatorView *_indicator;
}

+ (double)heightForContent:(id)arg1;
@property(nonatomic) __weak UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) SWColumnView *columnView; // @synthesize columnView=_columnView;
@property(retain, nonatomic) SWBackgroundPackage *package; // @synthesize package=_package;
@property(nonatomic) __weak id <SWBackgroundDetailGridCell_ColumnTypeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)columnView:(id)arg1 didSelectIndex:(long long)arg2;
- (id)columnView:(id)arg1 cellForColumnIndex:(long long)arg2;
- (double)columnView:(id)arg1 widthForColumnAtIndex:(long long)arg2;
- (long long)columnViewNumberOfColumns:(id)arg1;
- (void)setContent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

