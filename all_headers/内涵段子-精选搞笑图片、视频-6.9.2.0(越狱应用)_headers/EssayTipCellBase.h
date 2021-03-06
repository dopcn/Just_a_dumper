//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EssayTipCellViewBase, SSTipModel, UITableView;

@interface EssayTipCellBase : UITableViewCell
{
    UITableView *_tableView;
    EssayTipCellViewBase *_cellView;
    SSTipModel *_tipModel;
}

+ (double)heightForTipModel:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) SSTipModel *tipModel; // @synthesize tipModel=_tipModel;
@property(retain, nonatomic) EssayTipCellViewBase *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)startTimer:(double)arg1;
- (void)updateThemes;
- (void)themeChanged:(id)arg1;
- (void)refreshUI;
- (id)createCellView;
- (void)initSubViews;
- (id)initWithTableView:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

