//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHTableViewCellEx.h>

@class AHLabel, UIView;

@interface MCDraftsListCell : AHTableViewCellEx
{
    UIView *uploadView;
    AHLabel *titleLabel;
    AHLabel *contentLabel;
    AHLabel *timeLabel;
    AHLabel *statusLabel;
    _Bool _edited;
    _Bool _changeFrame;
}

@property(retain, nonatomic) AHLabel *statusLabel; // @synthesize statusLabel;
@property(retain, nonatomic) AHLabel *timeLabel; // @synthesize timeLabel;
@property(retain, nonatomic) AHLabel *contentLabel; // @synthesize contentLabel;
@property(retain, nonatomic) AHLabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIView *uploadView; // @synthesize uploadView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateProgress:(float)arg1;
- (void)setStatusUploading;
- (void)setStatusError;
- (void)setStatusPause;
- (void)setStatusWait;
- (void)setStatusNone;
- (void)drawWithData:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellFrame:(struct CGRect)arg3;

@end

