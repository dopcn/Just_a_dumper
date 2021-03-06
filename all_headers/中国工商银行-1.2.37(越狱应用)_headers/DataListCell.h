//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface DataListCell : UITableViewCell
{
    UILabel *infoLabel;
    UILabel *dateLabel;
    UIImageView *m_checkImageView;
    _Bool m_checked;
    _Bool deletestate;
}

@property(nonatomic) _Bool deletestate; // @synthesize deletestate;
@property(nonatomic) _Bool m_checked; // @synthesize m_checked;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setChecked:(_Bool)arg1;
- (void)setDeleteAllState:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCheckImageViewCenter:(struct CGPoint)arg1 alpha:(double)arg2 animated:(_Bool)arg3;
- (void)setCellData:(id)arg1;

@end

