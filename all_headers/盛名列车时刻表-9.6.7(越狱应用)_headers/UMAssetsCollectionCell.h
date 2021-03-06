//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface UMAssetsCollectionCell : UITableViewCell
{
    NSArray *_assets;
    unsigned long long _maximumNumberOfSelection;
    NSMutableArray *_gridViews;
    NSMutableDictionary *_assetsSelection;
    NSMutableArray *_assetsSelectionArr;
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSMutableArray *assetsSelectionArr; // @synthesize assetsSelectionArr=_assetsSelectionArr;
@property(retain, nonatomic) NSMutableDictionary *assetsSelection; // @synthesize assetsSelection=_assetsSelection;
@property(retain, nonatomic) NSMutableArray *gridViews; // @synthesize gridViews=_gridViews;
@property(nonatomic) unsigned long long maximumNumberOfSelection; // @synthesize maximumNumberOfSelection=_maximumNumberOfSelection;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)addGridViewsRowNumber:(unsigned long long)arg1 rowHeight:(unsigned long long)arg2 selection:(id)arg3 range:(struct _NSRange)arg4;
- (void)setAssets:(id)arg1 rowNumber:(unsigned long long)arg2 height:(unsigned long long)arg3 selection:(id)arg4 range:(struct _NSRange)arg5 selectionArray:(id)arg6;
- (void)setAssets:(id)arg1 rowNumber:(unsigned long long)arg2 height:(unsigned long long)arg3 selection:(id)arg4 range:(struct _NSRange)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

