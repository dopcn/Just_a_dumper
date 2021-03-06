//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMComTableViewCell.h"

@class UIImageView, UILabel;

@interface UMComNoticeListTableViewCell : UMComTableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_noticeIndicator;
}

@property(retain, nonatomic) UIImageView *noticeIndicator; // @synthesize noticeIndicator=_noticeIndicator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)reloadCellWithImage:(id)arg1 title:(id)arg2 isNotice:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellSize:(struct CGSize)arg3;

@end

