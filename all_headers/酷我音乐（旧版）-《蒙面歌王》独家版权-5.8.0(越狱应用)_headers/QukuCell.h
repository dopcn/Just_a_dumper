//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KuwoButton, NSMutableArray, TableSectionItemInfo;
@protocol QukuCellDelegate;

@interface QukuCell : UITableViewCell
{
    id <QukuCellDelegate> _delegate;
    TableSectionItemInfo *_sectionItem;
    KuwoButton *_sectionButton;
    NSMutableArray *_labelButtons;
}

+ (double)heightOfRowWithCount:(unsigned long long)arg1;
+ (void)calculateQukuCellLayout;
@property(retain, nonatomic) NSMutableArray *labelButtons; // @synthesize labelButtons=_labelButtons;
@property(retain, nonatomic) KuwoButton *sectionButton; // @synthesize sectionButton=_sectionButton;
@property(retain, nonatomic) TableSectionItemInfo *sectionItem; // @synthesize sectionItem=_sectionItem;
@property(nonatomic) id <QukuCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSectionButtonImage:(id)arg1;
- (void)onClickLabelButton:(id)arg1;
- (void)onClickSectionButton:(id)arg1;
- (void)layoutSubviews;
- (int)rowCount;
- (void)refreshButtons;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

