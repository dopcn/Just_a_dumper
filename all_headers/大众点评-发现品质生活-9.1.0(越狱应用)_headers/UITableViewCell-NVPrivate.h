//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@interface UITableViewCell (NVPrivate)
- (void)setCellBackgroundAuto:(id)arg1 withLocate:(id)arg2;
- (_Bool)isTableView:(id)arg1 hasEmptyHeaderInSection:(long long)arg2;
- (void)changeCellType:(int)arg1;
- (int)getCellType:(id)arg1 withLocation:(id)arg2;
- (void)setCellBackground:(long long)arg1 withLocate:(long long)arg2 withSectionRowCount:(long long)arg3 withMargin:(double)arg4;
- (void)setCellBackground:(long long)arg1 withCellType:(int)arg2 withMargin:(double)arg3;
- (void)setCellBackground:(long long)arg1 withCellType:(int)arg2 withInset:(struct UIEdgeInsets)arg3;
- (void)setCellBackground:(long long)arg1 withCellType:(int)arg2 withBackgroundColor:(id)arg3 withLineColor:(id)arg4 withHighBackColor:(id)arg5 withHighLineColor:(id)arg6 withMargin:(double)arg7;
- (void)setCellBackground:(long long)arg1 withCellType:(int)arg2 withBackgroundColor:(id)arg3 withLineColor:(id)arg4 withHighBackColor:(id)arg5 withHighLineColor:(id)arg6 withInset:(struct UIEdgeInsets)arg7;
@property(readonly, nonatomic) _Bool useCustomStyle; // @dynamic useCustomStyle;
- (void)setUseCustomStyle:(_Bool)arg1;
@end

