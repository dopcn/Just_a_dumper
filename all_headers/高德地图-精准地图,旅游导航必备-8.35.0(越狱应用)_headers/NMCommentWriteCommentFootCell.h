//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, NSIndexPath, UIButton, UILabel;
@protocol NMCommentWriteCommentFootCellDelegate;

@interface NMCommentWriteCommentFootCell : UITableViewCell
{
    id <NMCommentWriteCommentFootCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    UILabel *_poiNameLabel;
    UIButton *_encouragementButton;
    CALayer *_bottomSeparateLine;
}

@property(retain, nonatomic) CALayer *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) UIButton *encouragementButton; // @synthesize encouragementButton=_encouragementButton;
@property(retain, nonatomic) UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <NMCommentWriteCommentFootCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)encouragementButtonClicked;
- (void)reloadUIWithFootPoiData:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

