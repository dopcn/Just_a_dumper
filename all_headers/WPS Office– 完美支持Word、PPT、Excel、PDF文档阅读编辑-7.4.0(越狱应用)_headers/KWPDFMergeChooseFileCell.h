//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface KWPDFMergeChooseFileCell : UITableViewCell
{
    UIImageView *_thumbnailImageView;
    UILabel *_titleLabel;
    _Bool _isDraw;
}

- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)configCellWithIcon:(id)arg1 titles:(id)arg2 indexPath:(id)arg3 isDraw:(_Bool)arg4;
- (void)awakeFromNib;
- (void)dealloc;

@end

